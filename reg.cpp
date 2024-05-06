#include "reg.h"


namespace kursme {

	int idy;
	string loginy;
	string passy;
	string namey;
	string name2y;
	string name3y;
	string discordy;
	string phoney;
	string vky;
	string offliney;
	string onliney;
	int moneyy;
	string whoy;
	int hoursy;
	int county;

	string logged;


	extern string SystemToStl(String^ s);
	/*
	string SystemToStl(String^ s)
	{
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		return string(ptr);
	}*/


	void reg::data() {
		loginy = SystemToStl(this->textBoxreglogin->Text);
		passy = SystemToStl(this->textBoxregpass->Text);
		whoy = SystemToStl(this->comboBoxregwho->Text);
		phoney = ("");
		namey = ("");
		name2y = ("");
		name3y = ("");
		discordy = ("");
		vky = ("");
		offliney = ("");
		onliney = ("");
		moneyy = safe_cast<int>(0);
		hoursy = safe_cast<int>(0);
		county = safe_cast<int>(0);

		string sql1 = "SELECT `Код` FROM `пользователи` WHERE `логин` LIKE '";
		sql1 += (loginy)+"'";
		String^ comstr1 = gcnew String(sql1.c_str());
		OleDbCommand^ com1 = gcnew OleDbCommand(comstr1, conn);
		dbreader = com1->ExecuteReader();
		while (dbreader->Read())
		{
			idy = safe_cast<int>(dbreader->GetValue(0));
		}
	}

	System::Void reg::buttonregback_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show();
		this->Close();
		conn->Close();
	}
	System::Void reg::buttonreglogin_Click(System::Object^ sender, System::EventArgs^ e) {

		int id;
		string login;
		string pass;
		string name;
		string name2;
		string name3;
		string discord;
		string phone;
		string vk;
		string offline;
		string online;
		int money;
		string who;
		int hours;
		int count;

		loginy = SystemToStl(this->textBoxreglogin->Text);
		passy = SystemToStl(this->textBoxregpass->Text);
		whoy = SystemToStl(this->comboBoxregwho->Text);
		login = (loginy);
		pass = (passy);
		who = (whoy);

		int err = 0;
		if (this->textBoxreglogin->Text != "")
		{
			if (this->textBoxregpass->Text != "")
			{
				if (this->comboBoxregwho->Text != "" && (this->comboBoxregwho->Text == "учитель" || this->comboBoxregwho->Text == "ученик" || this->comboBoxregwho->Text == "родитель"))
				{
					string sql2 = "SELECT `логин` FROM `пользователи` WHERE `логин` LIKE '";
					sql2 += SystemToStl(this->textBoxreglogin->Text) + "'";
					String^ comstr2 = gcnew String(sql2.c_str());
					OleDbCommand^ com2 = gcnew OleDbCommand(comstr2, conn);
					dbreader = com2->ExecuteReader();
					while (dbreader->Read())
					{
						if (dbreader->GetString(0) == this->textBoxreglogin->Text)
						{
							err = 1;
						}
					}
					dbreader->Close();
					if (err == 1)
					{
						///ошибка
						MessageBox::Show("Такой логин уже существует", "Ошибка", MessageBoxButtons::OK);
					}
					else
					{

						string sql3 = "INSERT INTO [пользователи] ([логин], [пароль], [кто]) VALUES ('";
						sql3 += SystemToStl(this->textBoxreglogin->Text) + "', '" + SystemToStl(this->textBoxregpass->Text) + "', '" + SystemToStl(this->comboBoxregwho->Text) + "');";
						String^ comstr3 = gcnew String(sql3.c_str());
						OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
						dbreader = com3->ExecuteReader();
						dbreader->Close();

							tmenu^ f;
							f = gcnew tmenu(this);
							f->Show();
							this->Hide();
							//conn->Close();
							logged = "no";

						data();
						id = idy;
						login = (loginy);
						pass = (passy);
						name = (namey);
						name2 = (name2y);
						name3 = (name3y);
						discord = (discordy);
						phone = (phoney);
						vk = (vky);
						offline = (offliney);
						online = (onliney);
						money = (moneyy);
						who = (whoy);
						hours = hoursy;
						count = county;
					}
				}
				else
				{
					///ошибка
					MessageBox::Show("Выберите вариант из списка", "Ошибка", MessageBoxButtons::OK);
				}
			}
			else
			{
				///ошибка
				MessageBox::Show("Введите пароль", "Ошибка", MessageBoxButtons::OK);
			}
		}
		else
		{
			///ошибка
			MessageBox::Show("Введите логин", "Ошибка", MessageBoxButtons::OK);
		}
	}
	System::Void reg::reg_Load(System::Object^ sender, System::EventArgs^ e) {
		conn->Open();
		this->Location = Point(1585, 490);
	}
	System::Void reg::reg_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		conn->Close();
		//parent->Close();
		//this->Close();
	}
		   
}
