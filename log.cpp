#pragma once
#include "log.h"
#include "tmenu.h"
#include <Windows.h>

#include "reg.h"
//#include "rmenu.h"
//#include "tmenu.h"
//#include "smenu.h"

#include <string>
using std::string;



namespace kursme {
		System::Void log::buttonlogin_Click(System::Object^ sender, System::EventArgs^) {

			string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
			sql += SystemToStl(this->textBoxlogin->Text) + "'";
			String^ pass1 = this->textBoxpass->Text;

			String^ comstr = gcnew String(sql.c_str());
			OleDbCommand^ com = gcnew OleDbCommand(comstr, this->conn);
			OleDbDataReader^ dbreader = com->ExecuteReader();
			if (dbreader->Read())
			{
				dbreader->Close();
				dbreader = com->ExecuteReader();
				while (dbreader->Read())
				{
					id = safe_cast<int>(dbreader->GetValue(0));
					count = safe_cast<int>(dbreader->GetValue(14));
					who = dbreader->GetString(12);
					counter(count, conn);

					if (pass1 == dbreader->GetString(2))
					{
						

						if (SystemToStl(who) == "учитель")
						{
							tmenu^ f;
							f = gcnew tmenu(this);
							f->Show();
							this->Hide();
						}
						else if (SystemToStl(who) == "ученик")
						{
							//smenu^ f;
							//f = gcnew smenu(this);
						   // f->Show();
							this->Hide();
						}
						else if (SystemToStl(who) == "родитель")
						{
							//rmenu^ f;
						   // f = gcnew rmenu(this);
							//f->Show();
							this->Hide();
						}
					}
					else
					{
						MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK);
					}
				}
				dbreader->Close();

			}
			else
			{
				///ошибка
				MessageBox::Show("Такого аккаунта не существует", "Ошибка", MessageBoxButtons::OK);
			}

		}

		System::Void log::label5_Click(System::Object^ sender, System::EventArgs^ e) {
			reg^ f;
			f = gcnew reg(this);
			f->Show();
			this->Hide();
		}
		/*
		System::Void log::log_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			this->Close();
		}*/
}
