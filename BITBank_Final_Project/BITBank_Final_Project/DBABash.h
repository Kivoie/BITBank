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

	if (textBox2->Text == "acc New") {
		commandFlag = 1;
		submitClicked = true;
		textBox2->Clear();		//Clear command line box
		textBox3->Text = "Please enter your 15 digit account number.";
	}
	else if (textBox2->Text == "acc View") {
		commandFlag = 2;
		submitClicked = true;
		textBox2->Clear();
	}
	else if (textBox2->Text == "acc Edit") {
		commandFlag = 3;
		submitClicked = true;
		textBox2->Clear();
	}
	else if (textBox2->Text == "acc Pass") {
		commandFlag = 4;
		submitClicked = true;
		textBox2->Clear();
	}
	else if (textBox2->Text == "acc Delete") {
		commandFlag = 5;
		submitClicked = true;
		textBox2->Clear();
	}
}

void mainInterface::accNew() {

	//Windows forms is really weird in C++, for now there's no restrictions as
	//to what you can have as your account id lol
	
	String ^ accNumber = textBox2->Text;

	//stdio functions for file handling (i/o)
	fopen_s(&accounts, "accounts.txt", "w+");	//open file in read/write mode. Creates a new file by default if file == NULL

	fprintf(accounts, "%s", accNumber);
	fclose(accounts);
	

	textBox3->Text = "Your account number has been successfully added!";
	textBox2->Clear();

	//submitClicked = false;

}

void mainInterface::accView() {



}

void mainInterface::accEdit() {



}

void mainInterface::accPass() {

	fopen_s(&password, "pass.txt", "w+");
	fopen_s(&temp, "temporary.txt", "w+");
	while (1)
	{
		ch = fgetc(accounts);
		if (ch == EOF)
		{
			printf("\nEnd Of File\n");
			break;
		}
		else
		{
			ch = ch + 100;
			fputc(ch, accounts);
		}
	}
	fclose(accounts);
	fclose(temp);



}

void mainInterface::accDelete() {

	System::Windows::Forms::DialogResult acc_Delete = MessageBox::Show("Are you sure you would like to\
 delete your account? This will delete your password as well.", "Delete Account Confirmation", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);

	if (System::Windows::Forms::DialogResult::Yes == acc_Delete) {
		fopen_s(&accounts, "accounts.txt", "w");
		fprintf(accounts, " \b");
		fclose(accounts);
		fopen_s(&password, "password.txt", "w");
		fprintf(password, " \b");
		fclose(password);
		fopen_s(&temp, "temporary.txt", "w");
		fprintf(temp, " \b");
		fclose(temp);
	}
	//else if ((System::Windows::Forms::DialogResult::No) == acc_Delete || System::Windows::Forms::DialogResult::Cancel == acc_Delete);
	//NULL;
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