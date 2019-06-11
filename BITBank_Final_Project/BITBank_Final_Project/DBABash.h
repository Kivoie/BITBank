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
		accNew();
	}
	else if (textBox2->Text == "acc View") {
		accView();
	}
	else if (textBox2->Text == "acc Edit") {
		accEdit();
	}
	else if (textBox2->Text == "acc Pass") {
		accPass();
	}
	else if (textBox2->Text == "acc Delete") {
		accDelete();
	}

}

void mainInterface::accNew() {

	fopen_s(&accounts, "account.txt", "w+");	//open file in read/write mode. Creates a new file by default if file == NULL
	textBox3->Text = "Please enter your 15 digit account number.";
		String ^ accNumber = textBox2->Text;
	fprintf(accounts, "\s", accNumber);
	fclose(accounts);

}

void mainInterface::accView() {



}

void mainInterface::accEdit() {



}

void mainInterface::accPass() {



}

void mainInterface::accDelete() {



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