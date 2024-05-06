#pragma once

#include "reg.h"
//#include "rmenu.h"
#include "tmenu.h"
//#include "smenu.h"

#include <Windows.h>
#include <vector>
#include <string>
using std::string;
using namespace System::Data::OleDb;

/*
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
 */

namespace kursme {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для log
	/// </summary>
	public ref class log : public System::Windows::Forms::Form
	{
	public:
		log(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~log()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panellogin;
	protected:
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ textBoxlogin;
	private: System::Windows::Forms::Button^ buttonlogin;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBoxpass;
	private: System::Windows::Forms::Label^ label34;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panellogin = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxlogin = (gcnew System::Windows::Forms::TextBox());
			this->buttonlogin = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxpass = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panellogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// panellogin
			// 
			this->panellogin->Controls->Add(this->label29);
			this->panellogin->Controls->Add(this->label5);
			this->panellogin->Controls->Add(this->textBoxlogin);
			this->panellogin->Controls->Add(this->buttonlogin);
			this->panellogin->Controls->Add(this->label30);
			this->panellogin->Controls->Add(this->label1);
			this->panellogin->Controls->Add(this->label33);
			this->panellogin->Controls->Add(this->textBoxpass);
			this->panellogin->Controls->Add(this->label34);
			this->panellogin->Location = System::Drawing::Point(2, 2);
			this->panellogin->Name = L"panellogin";
			this->panellogin->Size = System::Drawing::Size(324, 409);
			this->panellogin->TabIndex = 17;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(35, 174);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(104, 52);
			this->label29->TabIndex = 24;
			this->label29->Text = L"Логин:";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label5->Location = System::Drawing::Point(17, 362);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(296, 43);
			this->label5->TabIndex = 7;
			this->label5->Text = L"или Зарегистрируйтесь";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &log::label5_Click);
			// 
			// textBoxlogin
			// 
			this->textBoxlogin->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxlogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxlogin->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxlogin->Location = System::Drawing::Point(145, 184);
			this->textBoxlogin->Name = L"textBoxlogin";
			this->textBoxlogin->Size = System::Drawing::Size(136, 36);
			this->textBoxlogin->TabIndex = 21;
			// 
			// buttonlogin
			// 
			this->buttonlogin->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonlogin->Location = System::Drawing::Point(84, 295);
			this->buttonlogin->Name = L"buttonlogin";
			this->buttonlogin->Size = System::Drawing::Size(154, 53);
			this->buttonlogin->TabIndex = 5;
			this->buttonlogin->Text = L"Войти";
			this->buttonlogin->UseVisualStyleBackColor = true;
			this->buttonlogin->Click += gcnew System::EventHandler(this, &log::buttonlogin_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(119, 197);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(169, 29);
			this->label30->TabIndex = 26;
			this->label30->Text = L"____________";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(29, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Войдите";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(20, 220);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(119, 53);
			this->label33->TabIndex = 23;
			this->label33->Text = L"Пароль:";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxpass
			// 
			this->textBoxpass->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxpass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxpass->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxpass->Location = System::Drawing::Point(145, 229);
			this->textBoxpass->Name = L"textBoxpass";
			this->textBoxpass->Size = System::Drawing::Size(136, 36);
			this->textBoxpass->TabIndex = 22;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(120, 241);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(169, 29);
			this->label34->TabIndex = 25;
			this->label34->Text = L"____________";
			// 
			// log
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 555);
			this->Controls->Add(this->panellogin);
			this->Name = L"log";
			this->Text = L"Авторизация";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &log::log_FormClosing);
			this->Load += gcnew System::EventHandler(this, &log::log_Load);
			this->panellogin->ResumeLayout(false);
			this->panellogin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
	OleDbConnection^ conn = gcnew OleDbConnection(connstr);
	OleDbDataReader^ dbreader;

	private: System::Void log_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void log_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonlogin_Click(System::Object^ sender, System::EventArgs^);
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
	void data(); 

	/*
	void counter(int count, OleDbConnection^ conn);
	void counter(int count, OleDbConnection^ conn)
	{
		string ID = SystemToStl(idx.ToString());
		count += 1;
		string co = SystemToStl(count.ToString());
		string sql3;
		sql3 += "UPDATE [пользователи] SET [входы] = '" + co + "' WHERE [Код] = " + ID + ";";
		String^ comstr3 = gcnew String(sql3.c_str());
		OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
		dbreader = com3->ExecuteReader();
		dbreader->Close();
	}
	*/
};
}
