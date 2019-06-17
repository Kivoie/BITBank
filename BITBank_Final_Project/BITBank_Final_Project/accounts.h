#pragma once

using namespace System;
using namespace BITBankFinalProject;

//    _   ___ ___ ___  _   _ _  _ _____ ___ 
//   /_\ / __/ __/ _ \| | | | \| |_   _/ __|
//  / _ \ (_| (_| (_) | |_| | .` | | | \__ \
// /_/ \_\___\___\___/ \___/|_|\_| |_| |___/
// ------------------------------------------

void mainInterface::mainLoop() {

	if (textBox2->Text == "acc New" || textBox2->Text == "-an") {	//New Account
		commandFlag = 1;		//commandFlag is the multi-value flag for for searching which command has just been entered
		submitClicked = true;	//submitClicked is the flag for what the "Submit" button functions will perform
		textBox2->Clear();		//Clear command line box
		accountsNULLCheck();
	}
	else if (textBox2->Text == "acc View" || textBox2->Text == "-av") {	//View Account
		commandFlag = 2;
		submitRoutine			//This is the macro for	"submitClicked = true;" and "textBox2->Clear();"
		accView();
	}
	else if (textBox2->Text == "acc Edit" || textBox2->Text == "-ae") {	//Edit Account
		commandFlag = 3;
		submitRoutine
		accountsNULLCheck();
	}
	else if (textBox2->Text == "acc Pass" || textBox2->Text == "-ap") {	//New/change account password
		commandFlag = 4;
		submitRoutine
		fopen_s(&password, "password.txt" , "r");
		passwordNULLCheck();
	}
	else if (textBox2->Text == "acc Delete" || textBox2->Text == "-ad") {
		commandFlag = 5;
		submitRoutine
		accDelete();
	}
	else if (textBox2->Text == "ispend Add" || textBox2->Text == "-ia") {
		commandFlag = 6;
		submitRoutine
		textBox3->Text = "How much did you spend today? (Don't include '$' or ',')";
	}
	else if (textBox2->Text == "ispend View" || textBox2->Text == "-iv") {
		commandFlag = 7;
		submitRoutine
		iSpendView();
	}
	else if (textBox2->Text == "fortune" || textBox2->Text == "-fo") {
		commandFlag = 8;
		submitRoutine
		fortune_switch();
	}
	else if (textBox2->Text == "m Com" || textBox2->Text == "-mc") {
		commandFlag = 9;
		submitRoutine
		m_commodities();
		submitClicked = false;
	}
	else if (textBox2->Text == "m Inv" || textBox2->Text == "-mi") {
		commandFlag = 10;
		submitRoutine
		if (invest_num == 0) {

			textBox3_ErrorColor();
			textBox3->Text = "You need to type \"-mc\" to see the market first!";

			submitClicked = false;

			return;
		}
		textBox3->Text = "What equity would you like to invest in?";
	}
	else if (textBox2->Text == "trn Send" || textBox2->Text == "-ts") {
		commandFlag = 11;
		submitRoutine
		textBox3->Text = "Enter recipient's phone number (Do not include any \"-\")";
		textBox2->MaxLength = 11;
		send2Flag = false;
	}
	else if (textBox2->Text == "trn New" || textBox2->Text == "-tn") {
		commandFlag = 12;
		submitRoutine
		textBox3->Text = "Enter a new phone number to your contacts";
		textBox2->MaxLength = 11;
	}
	else if (textBox2->Text == "trn View" || textBox2->Text == "-tv") {
		commandFlag = 13;
		submitRoutine
		etransHistory();
	}
	else if (textBox2->Text == "help" || textBox2->Text == "Help" || textBox2->Text == "-h") {
		commandFlag = 14;
		submitClicked = false;
		textBox2->Clear();
		textBox3->Text = "Ready. Type commands in the box below or click a button.";
		helpDialogue();
	}
	else {
		textBox3_ErrorColor();
		textBox3->Text = "\'" + textBox2->Text + "\' is not a recognized command.";
		textBox2->Clear();
		submitClicked = false;
	}
}

void mainInterface::accNew() {

	String ^ accNumber = textBox2->Text;

	//stdio functions for file handling (i/o)
	fopen_s(&accounts, "accounts.txt", "w+");	//open file in read/write mode. Creates a new file by default if file == NULL

	fprintf(accounts, "%s", accNumber);
	fclose(accounts);
	
	textBox3_OKColor();
	textBox3->Text = "Your account number has been successfully added!";
	textBox2->Clear();

	textBox2->MaxLength = 0;

	submitClicked = false;

}

void mainInterface::accView() {

	accountsView();
	submitClicked = false;

}

void mainInterface::accEdit() {

	String ^ accNumberEdit = textBox2->Text;

	fopen_s(&accounts, "accounts.txt", "w+");

	fprintf(accounts, "%s", accNumberEdit);
	fclose(accounts);
	textBox3_OKColor();
	textBox3->Text = "Your account number has been successfully changed!";
	textBox2->Clear();

	textBox2->MaxLength = 0;		//"Indefinite" length

	submitClicked = false;

}

void mainInterface::accPass() {

	passwordEncryption();
	submitClicked = false;

}

void mainInterface::accDelete() {

	accountsThanos();
	submitClicked = false;

}

void mainInterface::passwordNULLCheck() {

	if (password == NULL) {
		textBox3->Text = "Please enter a 8-20 digit password";
		textBox2->PasswordChar = '*';
		textBox2->MaxLength = 20;

	}
	else {
		fclose(password);
		System::Windows::Forms::DialogResult passwordCheck = MessageBox::Show("You already ha\
ave a password set. Would you like to change it?", "Password Change", MessageBoxButtons::Ye\
sNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);

		if (System::Windows::Forms::DialogResult::Yes == passwordCheck) {
			textBox3->Text = "Please enter a 8-20 digit password";
			textBox2->PasswordChar = '*';
			textBox2->MaxLength = 20;
		}
		else if (System::Windows::Forms::DialogResult::No == passwordCheck) {
			submitClicked = false;
		}
		else if (System::Windows::Forms::DialogResult::Cancel == passwordCheck) {
			submitClicked = false;
		}
	}
}

void mainInterface::accountsNULLCheck() {

	fopen_s(&accounts, "accounts.txt", "r");

	if (accounts == NULL) {
		textBox3->Text = "Please enter your 15 digit account number.";
		textBox2->MaxLength = 15;
	}
	else {
		fclose(accounts);
		System::Windows::Forms::DialogResult accountsCheck = MessageBox::Show("You already have an \
account registered. Would you like to overwrite it?", "Account Change", MessageBoxButtons::YesNo\
Cancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);

		if (System::Windows::Forms::DialogResult::Yes == accountsCheck) {
			textBox3->Text = "Please enter your 15 digit account number.";
			textBox2->MaxLength = 15;
		}
		else {
			submitClicked = false;
		}
	}

}

void mainInterface::accountsThanos() {	//Your account gone, in a snap

	fopen_s(&accounts, "accounts.txt", "r");

	if (accounts == NULL) {
		printf("no account(s) found.\n");
		textBox3_ErrorColor();
		textBox3->Text = "Error deleting file, \"accounts.txt\" not found!";
	}
	else {
		fclose(accounts);

		System::Windows::Forms::DialogResult accountsDelete = MessageBox::Show("Are you \
sure you would like to delete your account? THIS WILL NOT SEND IT TO THE \
RECYCLE BIN. THIS WILL COMPLETELY ERASE IT FROM THE HARD DRIVE AND CAN ONLY BE RECOVERED AGAIN WITH DATA \
RECOVERY SOFTWARE. You can always make a new account if you ever decide to delete your current one.", "Delete Acc\
ount", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);

		if (System::Windows::Forms::DialogResult::Yes == accountsDelete) {
			remove("accounts.txt");
			printf("accounts.txt state updated. [DELETED]");
			textBox3_OKColor();
			textBox3->Text = "\"accounts.txt\" has been successfully deleted!";
		}
	}
}

void mainInterface::passwordEncryption() {

	String ^ pass = textBox2->Text;
	fopen_s(&password, "password.txt", "w+");
	fopen_s(&temp, "temporary.txt", "w+");

	fprintf(temp, "%s", pass);
	fclose(temp);
	fopen_s(&temp, "temporary.txt", "a+");

	while (1)
	{
		ch = fgetc(temp);
		if (ch == EOF)
		{
			printf("End Of File\n");	//debugging
			break;
		}
		else
		{
			ch = ch + 15;				//Weak encryption algorithm :p
			fputc(ch, password);		//place text into "password.txt"
		}
	}

	ch = NULL;	//initialized to NULL since it would be a security flaw, otherwise
				//the last character will still be in memory and that's a big no no
	fclose(password);
	fclose(temp);

	fopen_s(&temp, "temporary.txt", "w");	//Comment out these 4 lines if you want proof that the your 
	fprintf(temp, "");						//text files have saved. Open up the temporary.txt file
	fclose(temp);							//located in "directory pending" to view the text you've entered.
	status = remove("temporary.txt");		//This line Thanos's the temporary file. *finger snap*

	if (status == 0) {
		printf("temporary.txt removed\n");	//debugging msg
	}
	else {
		printf("temporary.txt is NULL\n");	//debugging msg
	}

	status = NULL;
	textBox3_OKColor();
	textBox3->Text = "Your password is now encrypted, check out password.txt!";
	textBox2->Clear();

	printf("password.txt state updated");	//debugging

	textBox2->PasswordChar = NULL;
	textBox2->MaxLength = 0;

}

void mainInterface::accountsView() {

	fopen_s(&accounts, "accounts.txt", "r");

	if (accounts == NULL) {
		textBox3_ErrorColor();
		textBox3->Text = "Account not found! Make a new account using \"acc New\"";
	}
	else {
		fclose(accounts);

		textBox3_OKColor();
		StreamReader^ DataIn = File::OpenText("accounts.txt");
		String^ DataAcc;
		while ((DataAcc = DataIn->ReadLine()) != nullptr)
		{
			textBox3->Text = "Your accounts number is " + DataAcc;
		}

		DataIn->Close();	//Call the Close method for DataIn. Closes the stream reader
		//This bug was giving me issues earlier, basically whenever i would try and do
		//"acc View" and then "acc Edit", my program would crash right after I clicked
		//Submit to enter in my account number. This method fixed it by closing the
		//stream reader so that it isn't being used after accView is done.
	}
}