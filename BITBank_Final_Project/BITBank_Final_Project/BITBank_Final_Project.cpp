// ---------------------------------------------------
// COPYRIGHT 2019 CARLETON UNIVERSITY. NO PART OF
// THIS FILE OR PROJECT MAY BE REPRODUCED, IN ANY
// FORM OR BY ANY OTHER MEANS, WITHOUT PERMISSION
// IN WRITING FROM THE UNIVERSITY.
// ---------------------------------------------------
// All images in this project are self-drawn. Any
// resemblance to actual persons, past or present,
// companies, or businesses is purely coincidental.
// ---------------------------------------------------
// *AUTHOR(STUDENT NAME): Danny Vuong
//
// *STUDENT NUMBER: 101040331
//
// *E-MAIL ADDRESS: DannyVuong@cmail.carleton.ca
//
// *ASSIGNMENT NUMBER AND NAME: Final Project
//
// *PROFESSOR'S NAME: Chris Joslin
//
// *PURPOSE: An E-Banking application that is capable
// of managing user's accounts and balances.
// ---------------------------------------------------
// *Objective									     |
// ---------------------------------------------------
// This is an application that can perform various
// advanced features such as track your daily/monthly
// spending, track current (fake) market trends and
// data, E-transfer funds directly from your (fake)
// bank account(s). This program includes a command
// line to enter in commands to instruct the program
// to perform many tasks.
// ---------------------------------------------------
// *Glossary and Index of Classes and Methods		 |
// ---------------------------------------------------
// 
// 
// 
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <conio.h>
#include <array>
#include <cmath>
#include <ctime>
#include <chrono>
#include <Windows.h>
#include "DBABash.h"
#include "mainInterface.h"

using namespace System;
using namespace BITBankFinalProject;


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{

	Application::EnableVisualStyles();		//Method for enabling the visual style library packages (C++)
	Application::SetCompatibleTextRenderingDefault(false);	//Bool false to disable compatibility with text rendering

		//I HIGHLY RECOMMEND YOU DO NOT COMMENT THIS LINE OUT AS IT IS A LEGAL DISCLAIMER
	System::Windows::Forms::DialogResult result = MessageBox::Show("PLEASE DO NOT USE \
YOUR REAL BANK INFORMATION AS ALL INFORMATION IS STORED ON LOCAL PLAIN TEXT FILES FOR \
EASE OF RETRIEVAL.\n\nBy clicking Yes you agree that all of the credentials and inform\
ation created and managed by this program is solely your responsibility in the event t\
hat any of the afore mentioned data is leaked or is stolen from an external source. Ot\
herwise, click No to quit the program.", "BITBank Disclaimer", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	if (System::Windows::Forms::DialogResult::Yes == result) {
		Application::Run(gcnew mainInterface());
	}
	else {
		return 0;
	}


	

    return 0;
}
