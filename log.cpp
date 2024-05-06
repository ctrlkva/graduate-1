#pragma once
#include "log.h"

#include <Windows.h>

namespace kursme {
	
	int idx;
	string loginx;
	string passx;
	string namex;
	string name2x;
	string name3x;
	string discordx;
	string phonex;
	string vkx;
	string offlinex;
	string onlinex;
	int moneyx;
	string whox;
	int hoursx;
	int countx;

	string SystemToStl(String^ s) {
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		return string(ptr);
	}
	
	void counter(int count, OleDbConnection^ conn)
	{
		string ID = SystemToStl(idx.ToString());
		count += 1;
		string co = SystemToStl(count.ToString());
		string sql3;
		sql3 += "UPDATE [пользователи] SET [входы] = '" + co + "' WHERE [Код] = " + ID + ";";
		String^ comstr3 = gcnew String(sql3.c_str());
		OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
		OleDbDataReader^ dbreader = com3->ExecuteReader();
		dbreader->Close();
	}


	void log::data() {
		loginx = SystemToStl(this->textBoxlogin->Text);
		passx = SystemToStl(this->textBoxpass->Text);
		string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
		sql += (loginx)+"'";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();
		while (dbreader->Read())
		{
			idx = safe_cast<int>(dbreader->GetValue(0)); /////////прописать роли
			countx = safe_cast<int>(dbreader->GetValue(14));;
			whox = SystemToStl(dbreader->GetString(12));

			if ((whox) == "учитель")
			{
				hoursx = safe_cast<int>(dbreader->GetValue(13));
				phonex = SystemToStl(dbreader->GetString(7));
				namex = SystemToStl(dbreader->GetString(3));
				name2x = SystemToStl(dbreader->GetString(4));
				name3x = SystemToStl(dbreader->GetString(5));
				discordx = SystemToStl(dbreader->GetString(6));
				vkx = SystemToStl(dbreader->GetString(8));
				offlinex = SystemToStl(dbreader->GetString(9));
				onlinex = SystemToStl(dbreader->GetString(10));
			}
			else if ((whox) == "родитель")
			{
				phonex = SystemToStl(dbreader->GetString(7));
				namex = SystemToStl(dbreader->GetString(3));
				name2x = SystemToStl(dbreader->GetString(4));
				moneyx = safe_cast<int>(dbreader->GetValue(11));

			}
			else
			{
				namex = SystemToStl(dbreader->GetString(3));
				name2x = SystemToStl(dbreader->GetString(4));
				discordx = SystemToStl(dbreader->GetString(6));
			}
		}
		dbreader->Close();
	}

	System::Void log::log_Load(System::Object^ sender, System::EventArgs^ e) {
		conn->Open();
		this->Location = Point(1585, 490);
	}
	System::Void log::log_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		conn->Close();
		//this->Close();
	}

	System::Void log::label5_Click(System::Object^ sender, System::EventArgs^ e) {
		reg^ f;
		f = gcnew reg(this);
		f->Show();
		this->Hide();
		//conn->Close();
	}
	System::Void log::buttonlogin_Click(System::Object^ sender, System::EventArgs^) {
		data();

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

		id = idx;
		login = loginx;
		pass = passx;
		name = namex;
		name2 = name2x;
		name3 = name3x;
		discord = discordx;
		phone = phonex;
		vk = vkx;
		offline = offlinex;
		online = onlinex;
		money = moneyx;
		who = whox;
		hours = hoursx;
		count = countx;




		string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
		sql += (login)+"'";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();
		//string bul = "no";
		if (dbreader->Read())
		{
					counter(count, conn);
					if (pass == SystemToStl(dbreader->GetString(2)))
					{
						tmenu^ f;
						f = gcnew tmenu(this);
						f->Show();
						this->Hide();
						//conn->Close();
					}
					else
					{
						MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK);
					}
		}
		else
		{
			///ошибка
			MessageBox::Show("Такого аккаунта не существует", "Ошибка", MessageBoxButtons::OK);
		}
		dbreader->Close();
		/*
		if (bul == "yes")
		{
			dbreader = com->ExecuteReader();
			while (dbreader->Read())
			{
				counter(count, conn);
				if (pass == SystemToStl(dbreader->GetString(2)))
				{
					tmenu^ f;
					f = gcnew tmenu(this);
					f->Show();
					this->Hide();
					conn->Close();
				}
				else
				{
					MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK);
				}
			}
			dbreader->Close();
		}
		*/
		
	}
}
