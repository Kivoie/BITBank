#pragma once
//macros and definitions
#define crlf textBox1->AppendText("\r\n");
#define smallSplitter textBox1->AppendText("----------------------------------------------------------------------");
#define largeSplitter textBox1->AppendText("======================================================================");
#define submitRoutine submitClicked = true; textBox2->Clear();

//variable declarations
double tbox;
int tempValue, status;
char ch, accBuffer[17];

//file handling declarations
FILE *accounts;	//Customer's account..........................[accounts.txt]
FILE *password;	//Encrypted (basic encryption)................[password.txt]
FILE *fortune;	//Home fortune................................[fortune.txt]
FILE *temp;		//Temporary storate for password encryption...[temporary.txt]
FILE *balance;	//For account balance in CAD..................[balance.txt]
FILE *iSpend;	//iSpend proprietary spending tracker.........[iSpend.txt]
FILE *market;	//Information about market (fake).............[market.txt]
FILE *transfer; //Data for electronic transfer of funds.......[transfer.txt]