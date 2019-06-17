#pragma once
//  _ ___                   _ 
// (_) __|_ __  ___ _ _  __| |
// | \__ \ '_ \/ -_) ' \/ _` |
// |_|___/ .__/\___|_||_\__,_|
// ------|_|-------------------

void mainInterface::iSpendAdd() {

	char buff[20];
	struct tm *sTm;

	time_t now = time(0);
	sTm = localtime(&now);

	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", sTm);

	String^ iSpendAddEntry = textBox2->Text;
	fopen_s(&iSpend, "ispend.txt", "a");
	fprintf(iSpend, "[%s]", buff);
	fprintf(iSpend, " I spent $%s today!\n", iSpendAddEntry);
	fclose(iSpend);
	printf("%s %s\n", buff, "new entry");

	textBox3_OKColor();
	textBox3->Text = ("Your entry has been added, type 'ispend View' to see it!");
	textBox2->Clear();

	submitClicked = false;

}

void mainInterface::iSpendView() {

	StreamReader^ DataIn = File::OpenText("ispend.txt");
	String^ DataStr;
	int line_index = 0;
	textBox1->Clear();
	while ((DataStr = DataIn->ReadLine()) != nullptr)	//While the string is being read (until it hits a null at the EOF) it will continue
	{
		line_index++;
		textBox1->AppendText(line_index + " " + DataStr + "\r\n");
	}

	DataIn->Close();	//very important, we need to close the stream after we're done with it!!

	submitClicked = false;

}