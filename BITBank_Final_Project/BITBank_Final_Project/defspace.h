#pragma once
//macros and definitions
#define crlf textBox1->AppendText("\r\n"); //"carriage return, line feed"
#define smallSplitter textBox1->AppendText("----------------------------------------------------------------------");
#define largeSplitter textBox1->AppendText("======================================================================");
#define submitRoutine submitClicked = true; textBox2->Clear();
#define index_scale 10

//variable declarations
double tbox;
int tempValue;
int status, invest_num;
char ch, accBuffer[17];


/*FILE HANDLING DOCUMENTATION

FILE NAMES		DESCRIPTION									  NAME AND PATH        STATUS
============================================================================================*/
FILE *accounts;	//Customer's account..........................[accounts.txt]............o	//
FILE *password;	//Encrypted (Caesar encryption)               [password.txt]            o	//
FILE *fortune;	//iSpend fortune..............................[fortune.txt].........x		//
FILE *temp;		//Temporary storate for password encryption   [temporary.txt]           o*	//
FILE *balance;	//For account balance in CAD..................[balance.txt].........x		//
FILE *iSpend;	//iSpend proprietary spending tracker         [iSpend.txt]              o**	//
FILE *market;	//Information about market (fake).............[market.txt]..........x		//
FILE *BITMCI;	//BIT Market Commodities Index                [BITMCI.txt]              o	//
FILE *transfer; /*Data for electronic transfer of funds.......[transfer.txt]............o	//
============================================================================================*/
// o*	Appears briefly, but removes itself right away since it's temporary
// o**	Similar content in the file may originate from several different commands