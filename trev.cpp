#include "trev.h"


namespace kursme {

	extern std::vector<std::string> SplitSentenceIntoWords(std::string sentence);
	extern string SystemToStl(String^ s);

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


	System::Void trev::trev_Load(System::Object^ sender, System::EventArgs^ e) {
		conn->Open();
		this->Location = Point(1585, 490);

		string sql = "SELECT * FROM `пользователи` WHERE `кто` = 'ученик';";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();
		String^ student; int i = 0;
		while (dbreader->Read())
		{
			student = dbreader->GetString(3) + " " + dbreader->GetString(4);
			comboBoxstudents->Items->Insert(i, student);
			i++;
		}
		dbreader->Close();

		sql = "SELECT `название` FROM `предметы`;";
		comstr = gcnew String(sql.c_str());
		com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();
		String^ subject; i = 0;
		while (dbreader->Read())
		{
			subject = dbreader->GetString(0);
			comboBoxsubjects->Items->Insert(i, subject);
			i++;
		}
		dbreader->Close();
	}
	System::Void trev::trev_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		conn->Close();
	}
	System::Void trev::buttonrevsavepanelback_Click(System::Object^ sender, System::EventArgs^ e) {
		conn->Close();
		parent->Show();
		this->Close();
	}
	System::Void trev::buttonrevsave_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string sentence = SystemToStl(this->comboBoxstudents->Text);
		// Разделение предложения на слова
		std::vector<std::string> words = SplitSentenceIntoWords(sentence);
		string nam[2]; string nam2; string nam1; int i = 0;
		for (const auto& word : words) {
			nam[i++] = word;
		}

		string sql = "SELECT `Код` FROM `пользователи` WHERE `имя` LIKE '";
		sql += nam[0] + "' AND `фамилия` LIKE '" + nam[1] + "'";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();
		int id2;
		while (dbreader->Read())
		{
			id2 = safe_cast<int>(dbreader->GetValue(0));
		}
		dbreader->Close();

		string ID2 = SystemToStl(id2.ToString());
		string ID = SystemToStl(id.ToString());
		string sql3 = "INSERT INTO [отзывы] ([ученик], [предмет], [учитель], [отзыв]) VALUES ('";
		sql3 += ID2 + "', '" + SystemToStl(this->comboBoxsubjects->Text) + "', '" + ID + "', '" + SystemToStl(this->textBoxrevt->Text) + "');";
		String^ comstr3 = gcnew String(sql3.c_str());
		OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
		dbreader = com3->ExecuteReader();
		dbreader->Close();
	}
}
