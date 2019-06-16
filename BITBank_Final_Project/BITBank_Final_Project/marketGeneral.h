#pragma once
//  __  __   _   ___ _  _____ _____ 
// |  \/  | /_\ | _ \ |/ / __|_   _|
// | |\/| |/ _ \|   / ' <| _|  | |  
// |_|  |_/_/ \_\_|_\_|\_\___| |_|  
// ---------------------------------

void mainInterface::marketMain() {

	while (submitClicked == true) {

		if (textBox2->Text == "Copper" || textBox2->Text == "Zinc" || textBox2->Text == "Alm." || textBox2\
			->Text == "Gold" || textBox2->Text == "Nickel" || textBox2->Text == "Lead" || textBox2->Text == "Cr\
. Oil" || textBox2->Text == "Silver") {

			String^ userShareInput = textBox2->Text;

			char buff[20];
			struct tm *sTm;

			time_t now = time(0);
			sTm = localtime(&now);

			strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", sTm);
			printf("%s %s\n", buff, "new entry");

			textBox1->AppendText("\r\n\r\nYou have invested in " + invest_num * 10000 + " shares of " + textBox2->Text + ".");
			fopen_s(&iSpend, "iSpend.txt", "a");
			fprintf(iSpend, "[%s]", buff);
			fprintf(iSpend, " I invested $%d shares in %s today!\n", invest_num * 10000, userShareInput);
			fclose(iSpend);

			textBox3_OKColor();
			textBox3->Text = "Investment successful, type \"-iv\" to view your investment!";
			textBox2->Clear();

			submitClicked = false;
		}
		else {

			textBox3_ErrorColor();
			textBox2->Clear();
			textBox3->Text = "Share not found. Please select a valid share above.";

			submitClicked = true;

			break;
		}
	}

}