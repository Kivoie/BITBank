#pragma once
//macros and definitions
#define crlf textBox1->AppendText("\r\n");
#define smallSplitter textBox1->AppendText("----------------------------------------------------------------------");
#define largeSplitter textBox1->AppendText("======================================================================");
#define submitRoutine submitClicked = true; textBox2->Clear();
#define index_scale 10

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
FILE *BITMCI;	//BIT Market Commodities Index................[BITMCI.txt]
FILE *transfer; //Data for electronic transfer of funds.......[transfer.txt]

//macros and defs for commodities index
#define copper textBox1->AppendText("\r\nCopper ");
#define zinc textBox1->AppendText("\r\nZinc ");
#define gold  textBox1->AppendText("\r\nGold ");
#define nickel textBox1->AppendText("\r\nNickel ");
#define aluminum textBox1->AppendText("\r\nAluminum ");
#define lead textBox1->AppendText("\r\nLead ");
#define coil textBox1->AppendText("\r\nCrude Oil ");
#define silver textBox1->AppendText("\r\nSilver ");