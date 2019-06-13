#pragma once
#include "LiterallyEverything.h"

using namespace System;
using namespace BITBankFinalProject;

//    _   ___ ___ ___  _   _ _  _ _____ ___ 
//   /_\ / __/ __/ _ \| | | | \| |_   _/ __|
//  / _ \ (_| (_| (_) | |_| | .` | | | \__ \
// /_/ \_\___\___\___/ \___/|_|\_| |_| |___/
// ------------------------------------------

void mainInterface::accMain() {

	if (textBox2->Text == "acc New") {	//New Account
		commandFlag = 1;		//commandFlag is the multi-value flag for for searching which command has just been entered
		submitClicked = true;	//submitClicked is the flag for what the "Submit" button functions will perform
		textBox2->Clear();		//Clear command line box
		fopen_s(&accounts, "accounts.txt", "r");
		accountsNULLCheck();

	}
	else if (textBox2->Text == "acc View") {	//View Account
		commandFlag = 2;
		submitRoutine		//This is the macro for	"submitClicked = true;" and "textBox2->Clear();"
		textBox3->Text = "Press the submit button again to scan for the account list";
	}
	else if (textBox2->Text == "acc Edit") {	//Edit Account
		commandFlag = 3;
		submitRoutine
		fopen_s(&accounts, "accounts.txt", "r");
		accountsNULLCheck();
	}
	else if (textBox2->Text == "acc Pass") {	//New/change account password
		commandFlag = 4;
		submitRoutine
		fopen_s(&password, "password.txt" , "r");
		passwordNULLCheck();
	}
	else if (textBox2->Text == "acc Delete") {
		commandFlag = 5;
		submitRoutine
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

	String ^ accNumber = textBox2->Text;

	fopen_s(&accounts, "accounts.txt", "w+");

	fprintf(accounts, "%s", accNumber);
	fclose(accounts);
	textBox3_OKColor();
	textBox3->Text = "Your account number has been successfully changed!";
	textBox2->Clear();

	textBox2->MaxLength = 0;

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

//  _ ___                   _ 
// (_) __|_ __  ___ _ _  __| |
// | \__ \ '_ \/ -_) ' \/ _` |
// |_|___/ .__/\___|_||_\__,_|
// ------|_|-------------------

void mainInterface::iSpendMain() {


}

//  __  __   _   ___ _  _____ _____ 
// |  \/  | /_\ | _ \ |/ / __|_   _|
// | |\/| |/ _ \|   / ' <| _|  | |  
// |_|  |_/_/ \_\_|_\_|\_\___| |_|  
// ---------------------------------

void mainInterface::marketMain() {


}

//  _____ ___    _   _  _ ___ ___ ___ ___  ___ 
// |_   _| _ \  /_\ | \| / __| __| __| _ \/ __|
//   | | |   / / _ \| .` \__ \ _|| _||   /\__ \
//   |_| |_|_\/_/ \_\_|\_|___/_| |___|_|_\|___/
// ---------------------------------------------

void mainInterface::etransMain() {


}

//  _  _ ___ _    ___ 
// | || | __| |  | _ \
// | __ | _|| |__|  _/
// |_||_|___|____|_|  
// --------------------

void mainInterface::helpMain() {

	if (textBox2->Text == "help") {
		commandFlag = 13;
		submitClicked = false;
		textBox2->Clear();
		textBox3->Text = "Ready. Type commands in the box below or click a button.";
		helpDialogue();
	}
	else {
		textBox3_ErrorColor();
		textBox3->Text = "\"" + textBox2->Text + "\" is not a recognized command.";
		submitClicked = false;
		textBox2->Clear();
	}
}

void mainInterface::helpDialogue() {

	textBox1->Text = "Type in commands in the command line below and press submit to ent\
er them. You can press any of the buttons above to view additional commands for each section. Note \
that you don't need to pressa section in order to enter in a command.\r\n\r\nFor a version of the fu\
ull repository click the Credits to view the link to my repository.";

}

//  __  __ ___ ___  ___ ___ _    _      _   _  _ ___ ___  _   _ ___ 
// |  \/  |_ _/ __|/ __| __| |  | |    /_\ | \| | __/ _ \| | | / __|
// | |\/| || |\__ \ (__| _|| |__| |__ / _ \| .` | _| (_) | |_| \__ \
// |_|  |_|___|___/\___|___|____|____/_/ \_\_|\_|___\___/ \___/|___/
// ------------------------------------------------------------------

void mainInterface::flagnotfound() {
	MessageBox::Show("Oh no! Something went wrong. Please restart the program.", "Flag Not Found", MessageBoxButtons::OK, MessageBoxIcon::Error);
	Application::Exit();
}

void mainInterface::textBox3_NeutralColor() {

	textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
	textBox3->ForeColor = System::Drawing::Color::Black;
}

void mainInterface::textBox3_ErrorColor() {

	textBox3->BackColor = System::Drawing::Color::Crimson;
	textBox3->ForeColor = System::Drawing::Color::Black;

}

void mainInterface::textBox3_OKColor() {

	textBox3->BackColor = System::Drawing::Color::LightGreen;
	textBox3->ForeColor = System::Drawing::Color::Black;

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
ave a password set. Would you like to change it?", "Password Change", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);

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

	if (accounts == NULL) {
		textBox3->Text = "Please enter your 15 digit account number.";
		textBox2->MaxLength = 15;
	}
	else {
		fclose(accounts);
		System::Windows::Forms::DialogResult accountsCheck = MessageBox::Show("You already have an \
account registered. Would you like to overwrite it?", "Account Change", MessageBoxButtons::YesNo\
Cancel, MessageBoxIcon::Warning);

		if (System::Windows::Forms::DialogResult::Yes == accountsCheck) {
			textBox3->Text = "Please enter your 15 digit account number.";
			textBox2->MaxLength = 15;
		}
		else {
			submitClicked = false;
		}
	}

}

void mainInterface::accountsThanos() {

	fopen_s(&accounts, "accounts.txt", "r");

	if (accounts == NULL) {
		printf("no account(s) found.\n");
	}
	else {
		fclose(accounts);

		System::Windows::Forms::DialogResult accountsDelete = MessageBox::Show("Are you abso-tively-po\
si-lutely sure (i made that up :p) you would like to delete your account? This will NOT send it to the \
recycle bin. This will completely erase it from the hard drive and can only be recovered again with data \
recovery software. You may make a new account if you ever decide to delete your current one.", "Delete Acc\
ount", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);

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
			ch = ch + 100;				//Weak encryption algorithm :p
			fputc(ch, password);		//place text into "password.txt"
		}
	}

	ch = NULL;
	fclose(password);
	fclose(temp);

	fopen_s(&temp, "temporary.txt", "w");	//Comment out these 4 lines if you want proof that the your 
	fprintf(temp, "");						//text files have saved. Open up the temporary.txt file
	fclose(temp);							//located in "directory pending" to view the text you've entered.
	status = remove("temporary.txt");		//Thanos's the temporary file. *finger snap*

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
		fclose(accounts);
		textBox3_ErrorColor();
		textBox2->Text = "Account not found! Make a new account using \"acc New\"";
	}
	else {
		fclose(accounts);
		fopen_s(&accounts, "accounts.txt", "r");
		fgets(accBuffer, 16, accounts);
		int i = 0;
		while (1) {

			ch = fgetc(accounts);
			if (ch = EOF) {
				break;
			}
			else {
				accBuffer[i] = ch;
				i++;
			}
		}
		printf("%s", accBuffer);
		textBox3_OKColor();
		textBox3->Text = "Your account number is " + accBuffer[i];
		fclose(accounts);
	}
}