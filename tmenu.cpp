#include "tmenu.h"
#include "log.h"
//#include "tprofile.h"
//#include "shed.h"
#include "trevmenu.h"
#include "rrev.h"

#include <string>
using std::string;



namespace kursme {
	System::Void tmenu::buttonmenutback_Click(System::Object^ sender, System::EventArgs^ e)
	{
		parent->Show();
		this->Close();
	}
	/*
	System::Void tprof::buttonTprofile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		tprofile^ f;
		f = gcnew tprofile(this);
		f->Show();
		this->Hide();

		if (count > 0)
		{
			string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
			log^ f1 = gcnew log();
			sql += SystemToStl(f1->textBoxlogin->Text) + "'";
			String^ comstr = gcnew String(sql.c_str());
			OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			OleDbDataReader^ dbreader = com->ExecuteReader();
			while (dbreader->Read())
			{
				id = safe_cast<int>(dbreader->GetValue(0));
				hours = safe_cast<int>(dbreader->GetValue(13));
				phone = dbreader->GetString(7);
				name = dbreader->GetString(3);
				name2 = dbreader->GetString(4);
				name3 = dbreader->GetString(5);
				discord = dbreader->GetString(6);
				vk = dbreader->GetString(8);
				offline = dbreader->GetString(9);
				online = dbreader->GetString(10);
			}
			dbreader->Close();
			labelprofthours->Text = "„асов в прошлом мес€це :  " + hours;
			textBoxproftname->Text = name;
			textBoxproftname2->Text = name2;
			textBoxproftname3->Text = name3;
			textBoxproftphone->Text = phone;
			textBoxproftdiscord->Text = discord;
			textBoxproftvk->Text = vk;
			comboBoxproftoff->Text = offline;

			if (online == "ƒа")
			{
				checkBoxprofton->Checked = true;
			}
			else
			{
				checkBoxprofton->Checked = false;
			}
		}
		else
		{
			labelprofthours->Text = "„асов в прошлом мес€це :   ";
			textBoxproftname->Text = "";
			textBoxproftname2->Text = "";
			textBoxproftname3->Text = "";
			textBoxproftphone->Text = "";
			textBoxproftdiscord->Text = "";
			textBoxproftvk->Text = "";
			comboBoxproftoff->Text = "";
			checkBoxprofton->Checked = false;
		}
	}
	
	System::Void tmenu::buttonTshed_Click(System::Object^ sender, System::EventArgs^ e)
	{
		shed^ f;
		f = gcnew shed(this);
		f->Show();
		this->Hide();
	}
	*/
	System::Void tmenu::buttonTreview_Click(System::Object^ sender, System::EventArgs^ e)
	{
		string sql = "SELECT `кто` FROM `пользователи` WHERE `логин` LIKE '";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		OleDbDataReader^ dbreader = com->ExecuteReader();
		while (dbreader->Read())
		{
			who = dbreader->GetString(0);
		}
		dbreader->Close();
		if (SystemToStl(who) == "учитель")
		{
			trevmenu^ f;
			f = gcnew trevmenu(this);
			f->Show();
		}
		else if (SystemToStl(who) == "родитель")
		{
			rrev^ f;
			f = gcnew rrev(this);
			f->Show();
		}
		this->Hide();
	}
}

