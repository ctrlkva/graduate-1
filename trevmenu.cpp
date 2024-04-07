#include "trevmenu.h"

#include <string>
using std::string;



namespace kursme {
	System::Void trevmenu::buttonrevtback_Click(System::Object^ sender, System::EventArgs^ e)
	{
		parent->Show();
		this->Close();
	}

}