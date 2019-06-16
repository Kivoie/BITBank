#pragma once
#include "LiterallyEverything.h"

void mainInterface::fortune_1(){
	textBox1->Text = "1  \"Whether you buy a car, a flat-screen TV, furniture or appliances, the da\
y you take it home, it will already be worth less than you paid. It is a de\
preciating asset. Most purchases we make have a built-in obsolescence, a\
nd with time, they go down in value.\"";
}

void mainInterface::fortune_2(){
	textBox1->Text = "2  \"If a consumer has any intention of regularly carrying a balance-owin\
g on a card, the most important element of choice for him, is to selec\
t the card that offers the lowest ongoing interest rate.\"";
}

void mainInterface::fortune_3(){
	textBox1->Text = "3  \"If you absolutely can pay off your total credit card balance in any mont\
h, pay off as much as you can, over-and-above the minimum required, in orde\
r to reduce the balance owing as quickly as possible.\"";
}

void mainInterface::fortune_4(){
	textBox1->Text = "4  \"Carefully read over ALL the fine print in any contract you're thinking of signing.\"";
}

void mainInterface::fortune_5(){
	textBox1->Text = "5  \"Credit is a useful tool, but only if used prudently. It should always be \
used in a manner that minimizes both interest rates and the duration of the debt incurred.\"";
}

void mainInterface::fortune_6(){
	textBox1->Text = "6  \"The most important thing to remember is to \"shop around\" for a mortgage. By al\
l means go to your Bank or Credit Union and check for their best deal, but ALWAYs, ch\
eck with one or two Mortgage Brokers as well.\"";
}

void mainInterface::fortune_7(){
	textBox1->Text = "7  \"Shop around. Negotiate price whenever possible. If you want to be even more thrifty\
, try this. After successfully negotiating the price on a significant purchase, transfe\
r the equivalent of what you saved into your savings account. You'll be amazed at h\
ow fast your savings will grow!\"";
}

void mainInterface::fortune_8(){
	textBox1->Text = "8  \"We live in a consumer society. There are always expendiitures we must make. But l\
ook for every opportunity to make those expenditures produce the greatest benefit for \
you. Any savings you can achieve by using your smarts in what, when, and how you purcha\
se, will put the savings into your pocket.\"";
}

void mainInterface::fortune_9(){
	textBox1->Text = "9  Debt is like an anchor. It weighs down your chances of increasing your net-wo\
rth. The most important cornerstone of any plan for wealth creation is the early, continuous and p\
assionate effort to mange, and as quickly as possible, eliminate debt of any kind.";
}

void mainInterface::fortune_10(){
	textBox1->Text = "10  By age eighteen, every Canadian begins accumulating contribution room in a T\
FSA (Tax-Free Savings Account). Regardless of one's ability to contribute to it in any year, the carry-\
forward feature may prove in future years to be extremely valuable. A TFSA account DOES NOT need to be \
opened for contribution allowance to start accumulating at age eighteen.";
}
void mainInterface::fortune_11(){
	textBox1->Text = "11  An RESP is an incredibly useful tax-protected vehicle for accumulating post-second\
ary education funds for children. It should be a key element in any financial plan for families with children.";
}
void mainInterface::fortune_12(){
	textBox1->Text = "12  COMPOUNDING is a process by which the original value of an investment increases ex\
ponentially over time. As periodic dividends or interest are automatically reinvested, they escalate the di\
vidends or interest earned in future.";
}
void mainInterface::fortune_13(){
	textBox1->Text = "13  If you do try to predict market moves on a frequent, short-term basis, do so wi\
th no more than 5% of your total portfolio. Be aware that frequent trading rarely leads to long-term \
success.";
}
void mainInterface::fortune_14(){
	textBox1->Text = "14  Whenever considering international investments, the most prudent course may be \
to choose only those products which are fully-hedged against the Canadian dollar. Hedging eliminates \
foreign-currency risk, usually at minimal cost.";
}
void mainInterface::fortune_15(){
	textBox1->Text = "15  Every individual or family unit, seeking to bulid long-term wealth and financial \
independence, should strive to follow a financial plan, updated regularly as personal circumstances change.";
}
void mainInterface::fortune_16(){
	textBox1->Text = "16  ANYONE can call him/herself a financial advisor or planner. Insist on checking creden\
tials and references. If the references leave you feeling less than comfortable, find another advisor.";
}
void mainInterface::fortune_17(){
	textBox1->Text = "17  A financial plan is YOUR plan - not your financial advisor's. His task is solely to \
help you develop the best possible plan, and if necessary, to advise you on its specific implementations. YOU \
are the final decision-maker for each element that requires a decision.";
}
void mainInterface::fortune_18(){
	textBox1->Text = "18  By age 40, do everything possible to top up both RRSP and TFSA accounts to their \
maximum-allowable limits. Continue this practice through to retirement.";
}
void mainInterface::fortune_19(){
	textBox1->Text = "19  Regardless of age, it's never too late to evaluate your finances, prepare a financial \
plan, and apply the best-possible strategies to enhance your retirement lifestyle.";
}
void mainInterface::fortune_20(){
	textBox1->Text = "20  Automate the process of saving through the \"Pay Yourself First\" approach - preferably \
at 10% salary. If you have a partner, encourage a similar habit.";
}

void mainInterface::fortune_switch() {

	srand(time(NULL));
	int choice = rand() % 20;	//choose a random number from 0 to 19, then pick it's corresponding fortune
	printf("%d\n", choice);
	switch (choice) {
	case 0:
		fortune_1();
		break;
	case 1:
		fortune_2();
		break;
	case 2:
		fortune_3();
		break;
	case 3:
		fortune_4();
		break;
	case 4:
		fortune_5();
		break;
	case 5:
		fortune_6();
		break;
	case 6:
		fortune_7();
		break;
	case 7:
		fortune_8();
		break;
	case 8:
		fortune_9();
		break;
	case 9:
		fortune_10();
		break;
	case 10:
		fortune_11();
		break;
	case 11:
		fortune_12();
		break;
	case 12:
		fortune_13();
		break;
	case 13:
		fortune_14();
		break;
	case 14:
		fortune_15();
		break;
	case 15:
		fortune_16();
		break;
	case 16:
		fortune_17();
		break;
	case 17:
		fortune_18();
		break;
	case 18:
		fortune_19();
		break;
	case 19:
		fortune_20();
		break;
	}

	textBox1->AppendText("\r\n\r\nDolezal, P. (2018). The Smart Canadian We\
alth-Builder (3rd ed.). Sidney, BC: Cufflands Publishing.");

	submitClicked = false;

}