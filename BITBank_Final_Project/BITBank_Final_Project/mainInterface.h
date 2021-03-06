﻿#pragma once
#include "LiterallyEverything.h"
#include "defspace.h"

namespace BITBankFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for mainInterface
	/// </summary>
	public ref class mainInterface : public System::Windows::Forms::Form
	{
	public:
		mainInterface(void)
		{
			InitializeComponent();
			
			commandFlag = 0;
			srand(time(NULL) * 10 / 3);

		}

//   ___ _      _   ___ ___   __  __ ___ _____ _  _  ___  ___    ___ ___  ___ _____ ___ _______   _____ ___ ___ 
//  / __| |    /_\ / __/ __| |  \/  | __|_   _| || |/ _ \|   \  | _ \ _ \/ _ \_   _/ _ \_   _\ \ / / _ \ __/ __|
// | (__| |__ / _ \\__ \__ \ | |\/| | _|  | | | __ | (_) | |) | |  _/   / (_) || || (_) || |  \ V /|  _/ _|\__ \
//  \___|____/_/ \_\___/___/ |_|  |_|___| |_| |_||_|\___/|___/  |_| |_|_\\___/ |_| \___/ |_|   |_| |_| |___|___/
// ==============================================================================================================

	//Press [CTRL]+[LEFT CLICK] on any of these below to view their source code

	//Accounts

	private: void mainLoop();
	private: void accNew();
	private: void accView();
	private: void accEdit();
	private: void accPass();
	private: void accDelete();
	private: void accountsView();
	private: void passwordNULLCheck();
	private: void accountsNULLCheck();
	private: void accountsThanos();
	private: void passwordEncryption();

	//iSpend

	private: void iSpendAdd();
	private: void iSpendView();

	//Market & Commodities

	private: void m_commodities();
	private: void marketGeneral();

	//Transfers and Bill Payments

	private: void etransSend();
	private: void etransLog();
	private: void etransNew();
	private: void etransHistory();

	//fortune (iSpend)

	private: void fortune_switch();
	private: void fortune_1();
	private: void fortune_2();
	private: void fortune_3();
	private: void fortune_4();
	private: void fortune_5();
	private: void fortune_6();
	private: void fortune_7();
	private: void fortune_8();
	private: void fortune_9();
	private: void fortune_10();
	private: void fortune_11();
	private: void fortune_12();
	private: void fortune_13();
	private: void fortune_14();
	private: void fortune_15();
	private: void fortune_16();
	private: void fortune_17();
	private: void fortune_18();
	private: void fortune_19();
	private: void fortune_20();



	//help, misc., and declarations

	private: void flagnotfound();
	private: void helpDialogue();
	private: void textBox3_NeutralColor();
	private: void textBox3_ErrorColor();
	private: void textBox3_OKColor();
	private: bool submitClicked = false;
	private: bool send2Flag = false;
	private: char transBuff;
	private: String^ destPhoneNumber;
	private: String^ destFunds;
	private: bool errorFlag;
	private: int commandFlag;
			 // [1] = new Account
			 // [2] = view Account
			 // [3] = edit Account
			 // [4] = new/change password
			 // [5] = delete Account
			 // [6] = iSpend Add
			 // [7] = iSpend View
			 // [8] = (iSpend) fortune
			 // [9] = view commodities and investments
			 // [10] = invest in an equity
			 // [11] = transfer to someone
			 // [12] = create contacts
			 // [13] = view contacts in your directory
			 // [14] = Help
			 // [15] ...

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainInterface::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(473, 800);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(63, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Home";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainInterface::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(190, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Accounts";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mainInterface::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(316, 308);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Help";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainInterface::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(316, 184);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 4;
			this->button4->Text = L"iSpend©";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainInterface::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(63, 308);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Market";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &mainInterface::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(190, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Transfer";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &mainInterface::button6_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 461);
			this->textBox1->MaxLength = 0;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(449, 201);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Welcome to BITBank DBA 2019\r\nPress a button or enter in a command to begin. Type "
				L"help or click the Help button for help on commands and functions.";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &mainInterface::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 745);
			this->textBox2->MaxLength = 100;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(368, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &mainInterface::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(63, 693);
			this->textBox3->MaxLength = 50;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox3->Size = System::Drawing::Size(353, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Ready. Type commands in the box below or click a button.";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &mainInterface::textBox3_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(12, 435);
			this->dateTimePicker1->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(86, 20);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->Value = System::DateTime(2019, 6, 13, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &mainInterface::dateTimePicker1_ValueChanged);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(386, 742);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Submit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &mainInterface::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(432, 785);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Credits";
			this->label1->Click += gcnew System::EventHandler(this, &mainInterface::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &mainInterface::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(75, 436);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(22, 18);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &mainInterface::pictureBox2_Click_1);
			// 
			// mainInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 800);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"mainInterface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BITBank Desktop Banking Application 2019";
			this->Load += gcnew System::EventHandler(this, &mainInterface::mainInterface_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainInterface_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		//printf("print help commands/functions\n");		//For debugging
		helpDialogue();

	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	dateTimePicker1->Value = System::DateTime::Now;		//Timer that keeps incrementing at 1000 milliseconds to emulate time

}
private: System::Void pictureBox2_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	
	//if (Int32::TryParse(textBox1->Text, tempValue)) {
	//	tbox = float::Parse(textBox1->Text);
	//}

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {	//Submit button

	textBox3_NeutralColor();

	//The order matters, do not change order
	if (submitClicked == false) {
		mainLoop();		//Main loop
	}
	else if (submitClicked == true) {

		if (commandFlag == 1) {			// New account
			accNew();
		}
		else if (commandFlag == 2) {	// View account (this conditional doesn't really do anything anymore)
		//nothing, no user input required at this step
		}
		else if (commandFlag == 3) {	// Edit account
			accEdit();
		}
		else if (commandFlag == 4) {	// Set/change account password
			accPass();
		}
		else if (commandFlag == 5) {	// Delete account (and neither does this one too)
		//nothing, no user input required at this step
		}
		else if (commandFlag == 6) {	// Add new entry into your iSpend tracker
			iSpendAdd();
		}
		else if (commandFlag == 7) {	// View iSpend tracker log (with timestamps)
		//nothing, no user input required at this step
		}
		else if (commandFlag == 8) {	// Display fortune (random from 1-20)
		//nothing, no user input required at this step
		}
		else if (commandFlag == 9) {	// market commodities
		//nothing, no user input required at this step
		}
		else if (commandFlag == 10) {	// equity investment
			marketGeneral();
		}
		else if (commandFlag == 11) {	// transfer to another account
			etransLog();
		}
		else if (commandFlag == 12) {	// add contacts
			etransNew();
		}
		else if (commandFlag == 13) {	// view contacts
		//nothing, no user input required at this step
		}
		else if (commandFlag == 14) {
		//nothing, no user input required at this step
		}
	}
	else {
		flagnotfound();	//flag not found error box
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = "Home";
	crlf largeSplitter
	textBox1->AppendText("Welcome to BITBank DBA 2019\r\nPress a button or enter \
in a command to begin. Type help or click the Help button for help on commands and functions.\r\n");

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {	//

	textBox1->Text = ("Account Management\r\n");
	smallSplitter
		textBox1->AppendText("\r\nWhat would you like to do?");
	textBox1->AppendText("\r\n[acc New]......Make a new account");
	textBox1->AppendText("\r\n[acc View].....View account details");
	textBox1->AppendText("\r\n[acc Edit].....Edit account details");
	textBox1->AppendText("\r\n[acc Pass].....New/Edit password");
	textBox1->AppendText("\r\n[acc Delete]...Delete account from local database");

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = "iSpend (logs are in GMT (Greenwich Mean Time))\r\n";
	smallSplitter
	textBox1->AppendText("What would you like to do?");
	textBox1->AppendText("\r\n[ispend Add].......Adds a new entry into your iSpend tracker");
	textBox1->AppendText("\r\n[ispend View]......View all of your iSpend logs");
	textBox1->AppendText("\r\n[fortune]..........Contains helpful random hints and tips on manag\
ing \t\t\t   personal financing");

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = "Market and Commodities\r\n";
	smallSplitter
	textBox1->AppendText("What would you like to do?");
	textBox1->AppendText("\r\n[m Com].......View current BIT Market Commodities Index (BITMCI)");
	textBox1->AppendText("\r\n[m Inv].......Invest in a commodity listed in the BITMCI");

}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = "Electronic Transfers\r\n";
	smallSplitter
	textBox1->AppendText("[trn Send].......Send funds to another account electronically\r\n");
	textBox1->AppendText("[trn New]........Add a new contact to your directory\r\n");
	textBox1->AppendText("[trn View].......View a list of all your contacts history");

}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = "Credits";
	crlf largeSplitter
		textBox1->AppendText("BITBank DBA developed and designed by Danny Vuong 101040331, Catherin\
e Liu 101109688, and Kenny Chan 100761487\r\n");
	textBox1->AppendText("Questions and inquiry go to either of my student emails");
	textBox1->AppendText("CU: DannyVuong@cmail.carleton.ca\r\n");
	textBox1->AppendText("AC: vuon0023@algonquinlive.com\r\n");
	textBox1->AppendText("Bitbucket Repo: https://bitbucket.org/Kivoie/bitbank/src/master/ \r\n");
	textBox1->AppendText("\r\nCARLETON UNIVERSITY COPYRIGHT (c) 2019. ALL RIGHTS RESERVED. NO PART O\
F THIS FILE OR PROJECT MAY BE REPRODUCED, IN ANY FORM OR BY ANY OTHER MEANS, WITHOUT \
PERMISSION IN WRITING FROM THE UNIVERSITY.");
	textBox1->AppendText("\r\n\r\nPlease refer to my Wiki page in my Bitbucket reposito\
ry above for more documentation on the program.");
}
};
}