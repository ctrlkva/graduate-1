#include "trevmenu.h"

namespace kursme {
	System::Void trevmenu::buttonrevtback_Click(System::Object^ sender, System::EventArgs^ e)
	{
		parent->Show();
		this->Close();
		//conn->Close();
	}
	System::Void trevmenu::buttonfindrevpanel_Click(System::Object^ sender, System::EventArgs^ e) {
		rrev^ f;
		f = gcnew rrev(this);
		f->Show();
		this->Hide();
		//////////conn->Close();
	}
	System::Void trevmenu::buttonrevsavepanel_Click(System::Object^ sender, System::EventArgs^ e) {
		trev^ f;
		f = gcnew trev(this);
		f->Show();
		this->Hide();
		////////////conn->Close();
	}
	System::Void trevmenu::trevmenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//conn->Close();
		////////////parent->Close();
	}
	System::Void trevmenu::trevmenu_Load(System::Object^ sender, System::EventArgs^ e) {
		//conn->Open();
		this->Location = Point(1585, 490);
	}
}