#pragma once
//  _____ ___    _   _  _ ___ ___ ___ ___  ___ 
// |_   _| _ \  /_\ | \| / __| __| __| _ \/ __|
//   | | |   / / _ \| .` \__ \ _|| _||   /\__ \
//   |_| |_|_\/_/ \_\_|\_|___/_| |___|_|_\|___/
// ---------------------------------------------

void mainInterface::etransSend() { //transcend lol
	textBox2->Clear();
	textBox3->Text = "How much are you sending? (Don't include \"$\" or \",\")";
	submitClicked = true;
	send2Flag = true;

}

void mainInterface::etransNew() {

	String^ newContact = textBox2->Text;
	textBox2->MaxLength = 0;

	textBox3_OKColor();
	textBox3->Text = "You have added " + newContact + " as a new contact!";
	textBox2->Clear();

}

void mainInterface::etransHistory() {

	StreamReader^ DataIn = File::OpenText("transfer.txt");
	String^ DataStr;
	int line_index = 0;
	textBox1->Clear();
	while ((DataStr = DataIn->ReadLine()) != nullptr)	//While the string is being read (until it hits a null at the EOF) it will continue
	{
		line_index++;
		textBox1->AppendText(line_index + "\t" + DataStr + "\r\n");
	}

	DataIn->Close();	//close stream

	submitClicked = false;
	
}

void mainInterface::etransLog() {

	if (send2Flag == false) {
		String^ destPhoneNumber = textBox2->Text;
		fopen_s(&transfer, "transfer.txt", "a");
		fprintf(transfer, "%s\n", destPhoneNumber);
		fclose(transfer);
		printf("%s\n", destPhoneNumber);
		fopen_s(&transfer, "transfer.txt", "r");
		char transBuff[12];
		fgets(transBuff, 12, transfer);
		fclose(transfer);
		etransSend();
	}
	else if (send2Flag == true) {
		String^ destFunds = textBox2->Text;
		printf("%s\n", destPhoneNumber);
		textBox2->Clear();
		textBox2->MaxLength = 0;
		textBox3_OKColor();

		textBox3->Text = "You have sent $" + destFunds + "!";

		char buff[20];
		struct tm *sTm;

		time_t now = time(0);
		sTm = localtime(&now);

		strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", sTm);

		fopen_s(&iSpend, "iSpend.txt", "a");
		fprintf(iSpend, "[%s]", buff);
		fprintf(iSpend, " I sent $%s to %s today!\n", destFunds, transBuff);
		fclose(iSpend);
		printf("%s %s\n", buff, "new entry");
		submitClicked = false;
		send2Flag = false;
	}
}