#include "tprofile.h"

namespace kursme {

	extern string SystemToStl(String^ s);
	extern void counter(int count, OleDbConnection^ conn);

	extern int id;
	extern string login;
	extern string pass;
	extern string name;
	extern string name2;
	extern string name3;
	extern string discord;
	extern string phone;
	extern string vk;
	extern string offline;
	extern string online;
	extern int money;
	extern string who;
	extern int hours;
	extern int count;

	extern string logged;

	System::Void tprofile::tprofile_Load(System::Object^ sender, System::EventArgs^ e) {
		conn->Open();
		this->Location = Point(1585, 490);

		if (logged != "no")
		{
			labelprofthours->Text = "Часов в прошлом месяце :  " + hours;
			labelprofrmoney->Text = "Баланс :  " + (money).ToString();
			textBoxproftname->Text = gcnew String(name.c_str());
			textBoxproftname2->Text = gcnew String(name2.c_str());
			textBoxproftname3->Text = gcnew String(name3.c_str());
			textBoxproftphone->Text = gcnew String(phone.c_str());
			textBoxproftdiscord->Text = gcnew String(discord.c_str());
			textBoxproftvk->Text = gcnew String(vk.c_str());
			comboBoxproftoff->Text = gcnew String(offline.c_str());

			if (online == "Да")
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
			labelprofthours->Text = "Часов в прошлом месяце :   ";
			labelprofrmoney->Text = "Баланс :  0";
			textBoxproftname->Text = "";
			textBoxproftname2->Text = "";
			textBoxproftname3->Text = "";
			textBoxproftphone->Text = "";
			textBoxproftdiscord->Text = "";
			textBoxproftvk->Text = "";
			comboBoxproftoff->Text = "";
			checkBoxprofton->Checked = false;
		}

		if ((who) == "учитель")
		{
			label7->Location = Point(3, 43);

			label17->Location = Point(61, 115);
			textBoxproftname->Location = Point(140, 123);
			label28->Location = Point(46, 133);

			label18->Location = Point(21, 153);
			textBoxproftname2->Location = Point(140, 158);
			label3->Location = Point(88, 168);

			label45->Location = Point(3, 190);
			textBoxproftname3->Location = Point(140, 195);
			label46->Location = Point(88, 205);

			label20->Location = Point(25, 223);
			textBoxproftphone->Location = Point(140, 232);
			label11->Location = Point(123, 242);

			label19->Location = Point(25, 269);
			textBoxproftdiscord->Location = Point(140, 269);
			label35->Location = Point(88, 279);

			label22->Location = Point(70, 303);
			textBoxproftvk->Location = Point(140, 306);
			label36->Location = Point(109, 316);

			label21->Location = Point(13, 370);
			comboBoxproftoff->Location = Point(127, 377);

			label24->Location = Point(34, 412);
			checkBoxprofton->Location = Point(129, 430);

			labelprofthours->Location = Point(171, 409);

			labelprofrmoney->Visible = false;
		}
		else if ((who) == "ученик")
		{
			label7->Location = Point(3, 147);

			label17->Location = Point(62, 225);
			textBoxproftname->Location = Point(141, 234);
			label28->Location = Point(48, 242);

			label18->Location = Point(23, 263);
			textBoxproftname2->Location = Point(141, 271);
			label3->Location = Point(90, 279);

			label19->Location = Point(28, 306);
			textBoxproftdiscord->Location = Point(141, 308);
			label35->Location = Point(90, 316);

			labelprofrmoney->Visible = false;

			label11->Visible = false;
			label20->Visible = false;
			textBoxproftphone->Visible = false;

			label45->Visible = false;
			label46->Visible = false;
			textBoxproftname3->Visible = false;

			label22->Visible = false;
			label36->Visible = false;
			textBoxproftvk->Visible = false;

			label21->Visible = false;
			comboBoxproftoff->Visible = false;

			label24->Visible = false;
			checkBoxprofton->Visible = false;

			labelprofthours->Visible = false;
		}
		else if ((who) == "родитель")
		{
			label7->Location = Point(3, 147);

			label17->Location = Point(62, 223);
			textBoxproftname->Location = Point(141, 232);
			label28->Location = Point(48, 242);

			label18->Location = Point(23, 265);
			textBoxproftname2->Location = Point(141, 271);
			label3->Location = Point(90, 281);

			label20->Location = Point(28, 300);
			textBoxproftphone->Location = Point(141, 311);
			label11->Location = Point(126, 320);

			labelprofrmoney->Location = Point(40, 352);

			label45->Visible = false;
			label46->Visible = false;
			textBoxproftname3->Visible = false;

			label19->Visible = false;
			label35->Visible = false;
			textBoxproftdiscord->Visible = false;

			label22->Visible = false;
			label36->Visible = false;
			textBoxproftvk->Visible = false;

			label21->Visible = false;
			comboBoxproftoff->Visible = false;

			label24->Visible = false;
			checkBoxprofton->Visible = false;

			labelprofthours->Visible = false;
		}
	}

	System::Void tprofile::tprofile_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		conn->Close();
		//this->Close();
		//parent->Close();
	}

	System::Void tprofile::buttonproftsave_Click(System::Object^ sender, System::EventArgs^ e) {
		
		counter(count, conn);
		if ((who) == "учитель")
		{
			string ID = SystemToStl(id.ToString());
			string nam = SystemToStl(this->textBoxproftname->Text);
			string nam2 = SystemToStl(this->textBoxproftname2->Text);
			string nam3 = SystemToStl(this->textBoxproftname3->Text);
			string phon = SystemToStl(this->textBoxproftphone->Text);
			string VK = SystemToStl(this->textBoxproftvk->Text);
			string disc = SystemToStl(this->textBoxproftdiscord->Text);
			string of = SystemToStl(this->comboBoxproftoff->Text);
			string on;
			if (this->checkBoxprofton->Checked == true)
			{
				on = "Да";
			}
			else
			{
				on = "Нет";
			}

			string sql3;
			sql3 += "UPDATE [пользователи] SET [имя] = '" + nam + "' , [фамилия] = '" + nam2 + "' , [отчество] = '" + nam3 +
				"' , [телефон] = '" + phon + "' , [дискорд] = '" + disc + "' , [вк] = '" + VK + "' , [онлайн] = '" + on +
				"' , [оффлайн] = '" + of + "' WHERE [Код] = " + ID + ";";
			String^ comstr3 = gcnew String(sql3.c_str());
			OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
			dbreader = com3->ExecuteReader();
			dbreader->Close();
		}
		else if ((who) == "ученик")
		{
			string ID = SystemToStl(id.ToString());
			string mon = SystemToStl(money.ToString());
			string nam = SystemToStl(this->textBoxproftname->Text);
			string nam2 = SystemToStl(this->textBoxproftname2->Text);
			string disc = SystemToStl(this->textBoxproftdiscord->Text);

			string sql3;
			sql3 += "UPDATE [пользователи] SET [имя] = '" + nam + "' , [фамилия] = '" + nam2 + "' , [дискорд] = '" + disc + "' WHERE [Код] = " + ID + ";";
			String^ comstr3 = gcnew String(sql3.c_str());
			OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
			dbreader = com3->ExecuteReader();
			dbreader->Close();
		}
		else if ((who) == "родитель")
		{
			string ID = SystemToStl(id.ToString());
			string nam = SystemToStl(this->textBoxproftname->Text);
			string nam2 = SystemToStl(this->textBoxproftname2->Text);
			string phon = SystemToStl(this->textBoxproftphone->Text);

			string sql3;
			sql3 += "UPDATE [пользователи] SET [имя] = '" + nam + "' , [фамилия] = '" + nam2 + "' , [телефон] = '" + phon + "' WHERE [Код] = " + ID + ";";
			String^ comstr3 = gcnew String(sql3.c_str());
			OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
			dbreader = com3->ExecuteReader();
			dbreader->Close();
		}
	}

	System::Void tprofile::buttonproftback_Click(System::Object^ sender, System::EventArgs^ e) {
		conn->Close();
		this->Close(); 
		parent->Show();
	}

	
}
