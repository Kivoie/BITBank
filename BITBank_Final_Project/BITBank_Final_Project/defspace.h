#pragma once
//macros and definitions
#define crlf textBox1->AppendText("\r\n");
#define smallSplitter textBox1->AppendText("----------------------------------------------------------------------");
#define largeSplitter textBox1->AppendText("======================================================================");
#define submitRoutine submitClicked = true; textBox2->Clear();
#define index_scale 10

//variable declarations
double tbox;
int tempValue, status, invest_num;
char ch, accBuffer[17];

//file handling declarations
FILE *accounts;	//Customer's account..........................[accounts.txt] o
FILE *password;	//Encrypted (basic encryption)................[password.txt] o
FILE *fortune;	//Home fortune................................[fortune.txt] x
FILE *temp;		//Temporary storate for password encryption...[temporary.txt] o
FILE *balance;	//For account balance in CAD..................[balance.txt] x
FILE *iSpend;	//iSpend proprietary spending tracker.........[iSpend.txt] o
FILE *market;	//Information about market (fake).............[market.txt] x
FILE *BITMCI;	//BIT Market Commodities Index................[BITMCI.txt] o
FILE *transfer; //Data for electronic transfer of funds.......[transfer.txt] x