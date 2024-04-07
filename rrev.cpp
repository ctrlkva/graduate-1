#include "rrev.h"

#include <string>
using std::string;

namespace kursme {
	System::Void rrev::buttonrevfindpanelback_Click(System::Object^ sender, System::EventArgs^ e)
	{
		parent->Show();
		this->Close();
	}
}