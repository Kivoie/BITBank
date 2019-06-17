#pragma once
//  __  __ ___ ___  ___ ___ _    _      _   _  _ ___ ___  _   _ ___ 
// |  \/  |_ _/ __|/ __| __| |  | |    /_\ | \| | __/ _ \| | | / __|
// | |\/| || |\__ \ (__| _|| |__| |__ / _ \| .` | _| (_) | |_| \__ \
// |_|  |_|___|___/\___|___|____|____/_/ \_\_|\_|___\___/ \___/|___/
// ------------------------------------------------------------------

void mainInterface::flagnotfound() {
	MessageBox::Show("Oh no! Something went wrong. Please restart the program.", "Flag Not Found", MessageBoxButtons::OK, MessageBoxIcon::Error);
	Application::Exit();
}

void mainInterface::textBox3_NeutralColor() {

	textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
	textBox3->ForeColor = System::Drawing::Color::Black;
}

void mainInterface::textBox3_ErrorColor() {

	textBox3->BackColor = System::Drawing::Color::Crimson;
	textBox3->ForeColor = System::Drawing::Color::Black;

}

void mainInterface::textBox3_OKColor() {

	textBox3->BackColor = System::Drawing::Color::LightGreen;
	textBox3->ForeColor = System::Drawing::Color::Black;

}
