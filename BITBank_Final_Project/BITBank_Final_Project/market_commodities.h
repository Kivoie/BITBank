#pragma once
#include "LiterallyEverything.h"
void mainInterface::m_commodities() {

	srand(time(NULL));
	int commodity = rand() % 8;
	int k;

	char commodityArray[8][15]= {"Copper", "Zinc", "Gold", "Nickel", "Alm.", "Lead", "Cr. Oil", "Silver"};

		std::random_shuffle(&commodityArray[0], &commodityArray[8]);
		remove("BITMCI.txt");
		fopen_s(&BITMCI, "BITMCI.txt", "w+");


		for (k = 0; k < 8; k++) {
			fprintf(BITMCI, "%s\t|   ", commodityArray[k]);
			int index_value = 30 + rand() % 250;
			int index_max = index_value;
			for (int m = 0; m < index_max; m += index_scale) {	//Index scale, increments how many until the program will print *

				fprintf(BITMCI, "* ");

			}
			fprintf(BITMCI, "\n");
		}
		fclose(BITMCI);

		StreamReader^ DataIn = File::OpenText("BITMCI.txt");
		String^ DataComs;
		textBox1->Clear();

		textBox1->Text = "BITMCI - BIT MARKET COMMODITIES INDEX 2019 (updates very often)\r\n";
		largeSplitter

		while ((DataComs = DataIn->ReadLine()) != nullptr)
		{
			textBox1->AppendText("\r\n" + DataComs);
		}
		DataIn->Close();	//Important!!

		textBox1->AppendText("\r\n\r\n\r\n(\'*\' = 10,000 units)");

		submitClicked = false;
		//textBox1->AppendText();

}