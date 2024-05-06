#include "rrev.h"

namespace kursme {


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

	string numbert;
	string studentt;
	string subjectt; int x = 0; int z = 0;
	string numberr;
	string studentr;
	string subjectr; int a = 0; int b = 0;

	extern void counter(int count, OleDbConnection^ conn);
	extern string SystemToStl(String^ s);

	std::vector<std::string> SplitSentenceIntoWords(std::string sentence) {
		std::vector<std::string> words;
		std::string word;
		for (char c : sentence) {
			if (c == ' ' || c == ',' || c == '.' || c == '\n' || c == '-') {
				if (!word.empty()) {
					words.push_back(word);
					word.clear();
				}
			}
			else {
				word += c;
			}
		}
		if (!word.empty()) {
			words.push_back(word);
		}
		return words;
	}

	void rrev::findr()
	{
		int number[10];
		if (b == 3)
		{
			string ID = SystemToStl(id.ToString());
			studentr = SystemToStl(comboBoxfindstudentst->Text);
			subjectr = SystemToStl(comboBoxfindsubjectst->Text);
			string selectedrev = SystemToStl(comboBoxfindnumbert->Text);

			// Разделение предложения на слова
			std::string sentence = (studentr);
			std::vector<std::string> words = SplitSentenceIntoWords(sentence);
			string nam[10]; string nam2; string nam1; int i = 0;
			for (const auto& word : words) {
				nam[i++] = word;
			}

			string sql = "SELECT `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
			sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
				+ "' AND `пользователи`.`кто` LIKE 'ученик"
				+ "' AND `отзывы`.`предмет` LIKE '" + (subjectr)
				+ "' AND `отзывы`.`Код` LIKE " + selectedrev + ";";
			String^ comstr = gcnew String(sql.c_str());
			OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			dbreader = com->ExecuteReader();
			i = 0; string rev;
			while (dbreader->Read())
			{
				rev = SystemToStl(dbreader->GetString(0));
			}
			dbreader->Close();
			textBoxfindrevt->Text = gcnew String(rev.c_str());
			b = 0;
		}
		else
		{
			comboBoxfindnumbert->Items->Clear();
			string ID = SystemToStl(id.ToString());
			studentr = SystemToStl(comboBoxfindstudentst->Text);
			subjectr = SystemToStl(comboBoxfindsubjectst->Text);

			// Разделение предложения на слова
			std::string sentence = (studentr);
			std::vector<std::string> words = SplitSentenceIntoWords(sentence);
			string nam[10]; string nam2; string nam1; int i = 0;
			for (const auto& word : words) {
				nam[i++] = word;
			}
			
			string sql = "SELECT `отзывы`.`Код`, `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
			sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
				+ "' AND `пользователи`.`кто` LIKE 'ученик"
				+ "' AND `отзывы`.`предмет` LIKE '" + (subjectr) + "';";
			String^ comstr = gcnew String(sql.c_str());
			OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			dbreader = com->ExecuteReader();
			i = 0; string rev[10];
			while (dbreader->Read())
			{
				number[i] = safe_cast<int>(dbreader->GetValue(0));
				comboBoxfindnumbert->Items->Insert(i, dbreader->GetValue(0));
				rev[i] = SystemToStl(dbreader->GetString(1));
				i++;
			}
			dbreader->Close();
			textBoxfindrevt->Text = gcnew String(rev[0].c_str());
		}
	}
	   void rrev::findt()
	   {
		   
		   int number[10];
		   if (z == 3)
		   {
			   string ID = SystemToStl(id.ToString());
			   studentt = SystemToStl(comboBoxfindstudentst->Text);
			   subjectt = SystemToStl(comboBoxfindsubjectst->Text);
			   string selectedrev = SystemToStl(comboBoxfindnumbert->Text);

			   // Разделение предложения на слова
			   std::string sentence = (studentt);
			   std::vector<std::string> words = SplitSentenceIntoWords(sentence);
			   string nam[10]; string nam2; string nam1; int i = 0;
			   for (const auto& word : words) {
				   nam[i++] = word;
			   }
			   
			   string sql = "SELECT `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
			   sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
				   + "' AND `пользователи`.`кто` LIKE 'ученик"
				   + "' AND `отзывы`.`предмет` LIKE '" + (subjectt)
				   + "' AND `отзывы`.`Код` LIKE " + selectedrev
				   + " AND `отзывы`.`учитель` LIKE '" + ID + "';";
			   String^ comstr = gcnew String(sql.c_str());
			   OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			   dbreader = com->ExecuteReader();
			   i = 0; string rev;
			   while (dbreader->Read())
			   {
				   rev = SystemToStl(dbreader->GetString(0));
			   }
			   dbreader->Close();

			   textBoxfindrevt->Text = gcnew String(rev.c_str());
			   z = 0;
		   }
		   else
		   {
			   comboBoxfindnumbert->Items->Clear();
			   string ID = SystemToStl(id.ToString());
			   studentt = SystemToStl(comboBoxfindstudentst->Text);
			   subjectt = SystemToStl(comboBoxfindsubjectst->Text);

			   // Разделение предложения на слова
			   std::string sentence = (studentt);
			   std::vector<std::string> words = SplitSentenceIntoWords(sentence);
			   string nam[10]; string nam2; string nam1; int i = 0;
			   for (const auto& word : words) {
				   nam[i++] = word;
			   }
			   
			   string sql = "SELECT `отзывы`.`Код`, `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
			   sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
				   + "' AND `пользователи`.`кто` LIKE 'ученик"
				   + "' AND `отзывы`.`предмет` LIKE '" + (subjectt)
				   + "' AND `отзывы`.`учитель` LIKE '" + ID + "';";

			   String^ comstr = gcnew String(sql.c_str());
			   OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			   dbreader = com->ExecuteReader();

			   i = 0; string rev[10];
			   while (dbreader->Read())
			   {
				   number[i] = safe_cast<int>(dbreader->GetValue(0));
				   comboBoxfindnumbert->Items->Insert(i, dbreader->GetValue(0));
				   rev[i] = SystemToStl(dbreader->GetString(1));
				   i++;
			   }
			   dbreader->Close();

			   textBoxfindrevt->Text = gcnew String(rev[0].c_str());
		   }
	   }
	System::Void rrev::buttonrevfindpanelback_Click(System::Object^ sender, System::EventArgs^ e){
		parent->Show();
		this->Close(); 
		conn->Close();
	}

	System::Void rrev::rrev_Load(System::Object^ sender, System::EventArgs^ e) {
		conn->Open();
		this->Location = Point(1585, 490);

		if ((who) == "учитель")
		{
			string ID = SystemToStl(id.ToString());
			string sql = "SELECT `пользователи`.`имя`, `пользователи`.`фамилия` FROM `пользователи` INNER JOIN `отзывы` ON `отзывы`.`ученик` = `пользователи`.`Код` WHERE `пользователи`.`кто` LIKE 'ученик' AND `отзывы`.`учитель` LIKE '";
			sql += ID + "';";
			String^ comstr = gcnew String(sql.c_str());
			OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			dbreader = com->ExecuteReader();
			String^ student; int i = 0; String^ temp = "";
			while (dbreader->Read())
			{
				student = dbreader->GetString(0) + " " + dbreader->GetString(1);
				if (student != temp)
				{
					comboBoxfindstudentst->Items->Insert(i, student);
					i++;
					temp = student;
				}
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
				comboBoxfindsubjectst->Items->Insert(i, subject);
				i++;
			}
			dbreader->Close();
		}
		else if ((who) == "родитель")
		{
			string ID = SystemToStl(id.ToString());
			string sql2 = "SELECT `фамилия` FROM `пользователи` WHERE `Код` = ";
			sql2 += ID + ";";
			String^ comstr2 = gcnew String(sql2.c_str());
			OleDbCommand^ com2 = gcnew OleDbCommand(comstr2, conn);
			dbreader = com2->ExecuteReader();
			String^ fam;
			while (dbreader->Read())
			{
				fam = dbreader->GetString(0);
			}
			dbreader->Close();

			string sql1 = "SELECT * FROM `пользователи` WHERE `кто` = 'ученик' AND `фамилия` = '";
			sql1 += SystemToStl(fam) + "';";
			String^ comstr1 = gcnew String(sql1.c_str());
			OleDbCommand^ com1 = gcnew OleDbCommand(comstr1, conn);
			dbreader = com1->ExecuteReader();
			String^ student1; int ii = 0;
			while (dbreader->Read())
			{
				student1 = dbreader->GetString(3) + " " + dbreader->GetString(4);
				comboBoxfindstudentst->Items->Insert(ii, student1);
				ii++;
			}
			dbreader->Close();

			sql1 = "SELECT `название` FROM `предметы`;";
			comstr1 = gcnew String(sql1.c_str());
			com1 = gcnew OleDbCommand(comstr1, conn);
			dbreader = com1->ExecuteReader();
			String^ subject; int i = 0;
			while (dbreader->Read())
			{
				subject = dbreader->GetString(0);
				comboBoxfindsubjectst->Items->Insert(i, subject);
				i++;
			}
			dbreader->Close();
		}
	}
	System::Void rrev::rrev_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		conn->Close();
	}
	System::Void rrev::comboBoxfindstudentst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if ((who) == "учитель")
		{
			if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
			{
				findt();
			}
		}
		else if ((who) == "родитель")
		{
			if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
			{
				findr();
			}
		}
	}
	System::Void rrev::comboBoxfindsubjectst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if ((who) == "учитель")
		{
			if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
			{
				findt();
			}
		}
		else if ((who) == "родитель")
		{
			if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
			{
				findr();
			}
		}
	}
	System::Void rrev::comboBoxfindnumbert_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		z = 3; b = 3;
		
		if ((who) == "учитель")
		{
			if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
			{
				findt();
			}
		}
		else if ((who) == "родитель")
		{
			if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
			{
				findr();
			}
		}
	}
}