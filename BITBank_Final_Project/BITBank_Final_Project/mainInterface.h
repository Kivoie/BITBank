#pragma once
#include "LiterallyEverything.h"
#define crlf textBox1->AppendText("\r\n");
#define smallSplitter textBox1->AppendText("----------------------------------------------------------------------");
#define largeSplitter textBox1->AppendText("======================================================================");

double tbox;
int tempValue;
char ch;

FILE *accounts;	//Customer's account..........................[accounts.txt]
FILE *password;	//Encrypted (basic encryption)................[password.txt]
FILE *fortune;	//Home fortune................................[fortune.txt]
FILE *temp;		//Temporary storate for password encryption...[temporary.txt]

namespace BITBankFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainInterface
	/// </summary>
	public ref class mainInterface : public System::Windows::Forms::Form
	{
	public:
		mainInterface(void)
		{
			InitializeComponent();
			
			tbox = 0;
			tempValue = 0;
			commandFlag = 0;


		}

	//Function prototypes (for DBABash.h)
	private: void accMain();
	private: void accNew();
	private: void accView();
	private: void accEdit();
	private: void accPass();
	private: void accDelete();
	private: void iSpendMain();
	private: void marketMain();
	private: void etransMain();
	private: void helpMain();

	private: void flagnotfound();
	private: System::Windows::Forms::Label^  label1;

	private: bool submitClicked = false;
	private: void textBox3_NeutralColor();
	private: void textBox3_ErrorColor();
	private: int commandFlag;
			 // [1] = New Account
			 // [2] = View Account
			 // [3] = Edit Account
			 // [4] = New/Change password
			 // [5] = Delete Account
			 // [6] = 

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





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(316, 184);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 4;
			this->button4->Text = L"iSpend©";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(63, 308);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Market";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(190, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Transfer";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
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
			this->textBox3->Size = System::Drawing::Size(353, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Ready. Type commands in the box below or click a button.";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &mainInterface::textBox3_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(137, 435);
			this->dateTimePicker1->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(197, 20);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->Value = System::DateTime(2019, 6, 12, 0, 0, 0, 0);
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
			// mainInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 800);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainInterface_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		// current date/time based on current system
		time_t now = time(0);

		// convert now to string form
		char* dt = ctime(&now);

		//time_t rawtime;
		//struct tm * timeinfo;
		//char buffer[80];

		//time(&rawtime);
		//timeinfo = localtime(&rawtime);

		//strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", timeinfo);
		//std::string str(buffer);

		//std::cout << str;
		textBox1->Text = ("Welcome to BITBank DBA 2019\r\nPress a button or enter in a command to begin. Type help or click the Help button for help on commands and functions.\r\n");

		// convert now to tm struct for UTC
		//tm *gmtm = gmtime(&now);
		//dt = asctime(gmtm);
		//textBox1->Text = "The UTC date and time is: ";
		//std::cout << "UTC time: "<< dt << std::endl;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		printf("print help commands/functions\n");		//For debugging
		
		


	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	
	if (Int32::TryParse(textBox1->Text, tempValue)) {
		tbox = float::Parse(textBox1->Text);
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {	//

	textBox1->Text = ("Account Management\r\n");
	smallSplitter
	textBox1->AppendText("\r\nWhat would you like to do?");
	textBox1->AppendText("\r\n[acc New] \tMake a new account");
	textBox1->AppendText("\r\n[acc View] \tView account");
	textBox1->AppendText("\r\n[acc Edit] \tEdit account");
	textBox1->AppendText("\r\n[acc Pass] \tEdit password");
	textBox1->AppendText("\r\n[acc Delete] \tDelete account from database");


	
	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {	//Submit button

	textBox3_NeutralColor();

	//The order matters, do not change order
	if (submitClicked == false) {
		accMain();		//Account main loop
		iSpendMain();	//iSpend main loop
		marketMain();	//market main loop
		etransMain();	//etransfer main loop
		helpMain();		//help main loop
	}
	else if (submitClicked == true) {

		if (commandFlag = 1) {		// New account

			accNew();
			//submitClicked = true;
		}
	}
	else {
		flagnotfound();	//flag not found error box
	}

}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox1->Text = "BITBank DBA developed and designed by Danny Vuong.\r\n";
	textBox1->AppendText("Student ID: 101040331\r\n");
	textBox1->AppendText("CU: DannyVuong@cmail.carleton.ca\r\n");
	textBox1->AppendText("AC: vuon0023@algonquinlive.com\r\n");
	textBox1->AppendText("Bitbucket Repo: https://bitbucket.org/Kivoie/bitbank/src/master/ \r\n");
	textBox1->AppendText("\r\nCARLETON UNIVERSITY COPYRIGHT (c) 2019. ALL RIGHTS RESERVED. NO PART O\
F THIS FILE OR PROJECT MAY BE REPRODUCED, IN ANY FORM OR BY ANY OTHER MEANS, WITHOUT \
PERMISSION IN WRITING FROM THE UNIVERSITY.");
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}