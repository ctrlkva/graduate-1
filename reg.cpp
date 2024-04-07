#include "log.h"
#include "reg.h"
#include "tmenu.h"
//#include "rmenu.h"
//#include "smenu.h"

#include <string>
using std::string;



namespace kursme {

			
		   System::Void reg::buttonregback_Click(System::Object^ sender, System::EventArgs^ e) {
			   parent->Show();
			   this->Close();
		   }
		   /*
		   System::Void reg::reg_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			   this->Close();
		   }*/
		   System::Void reg::buttonreglogin_Click(System::Object^ sender, System::EventArgs^ e) {
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

							   string sql1 = "SELECT `Код`, `кто` FROM `пользователи` WHERE `логин` LIKE '";
							   sql1 += SystemToStl(this->textBoxreglogin->Text) + "'";
							   String^ pass = this->textBoxregpass->Text;
							   String^ comstr1 = gcnew String(sql1.c_str());
							   OleDbCommand^ com1 = gcnew OleDbCommand(comstr1, conn);
							   dbreader = com1->ExecuteReader();
							   while (dbreader->Read())
							   {
								   id = safe_cast<int>(dbreader->GetValue(0));
								   who = this->comboBoxregwho->Text;


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
							   dbreader->Close();
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
}
