#pragma once

#include "log.h"
#include "tmenu.h"
//#include "rmenu.h"
//#include "smenu.h"
#include <Windows.h>
#include <vector>
#include <string>
using std::string;
using namespace System::Data::OleDb;

/*
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
 */

namespace kursme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для reg
	/// </summary>
	public ref class reg : public System::Windows::Forms::Form
	{
	public:
		reg(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		reg(System::Windows::Forms::Form^ parent )
		{

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->parent = parent;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~reg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelreg;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBoxregwho;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxreglogin;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBoxregpass;
	private: System::Windows::Forms::Button^ buttonreglogin;
	private: System::Windows::Forms::Button^ buttonregback;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Form^ parent;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(reg::typeid));
			this->panelreg = (gcnew System::Windows::Forms::Panel());
			this->comboBoxregwho = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxreglogin = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxregpass = (gcnew System::Windows::Forms::TextBox());
			this->buttonreglogin = (gcnew System::Windows::Forms::Button());
			this->buttonregback = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panelreg->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelreg
			// 
			this->panelreg->Controls->Add(this->comboBoxregwho);
			this->panelreg->Controls->Add(this->label2);
			this->panelreg->Controls->Add(this->textBoxreglogin);
			this->panelreg->Controls->Add(this->label27);
			this->panelreg->Controls->Add(this->label4);
			this->panelreg->Controls->Add(this->label13);
			this->panelreg->Controls->Add(this->textBoxregpass);
			this->panelreg->Controls->Add(this->buttonreglogin);
			this->panelreg->Controls->Add(this->buttonregback);
			this->panelreg->Controls->Add(this->label6);
			this->panelreg->Controls->Add(this->label26);
			this->panelreg->Location = System::Drawing::Point(2, 0);
			this->panelreg->Name = L"panelreg";
			this->panelreg->Size = System::Drawing::Size(324, 405);
			this->panelreg->TabIndex = 16;
			// 
			// comboBoxregwho
			// 
			this->comboBoxregwho->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxregwho->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxregwho->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxregwho->FormattingEnabled = true;
			this->comboBoxregwho->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ученик", L"учитель", L"родитель" });
			this->comboBoxregwho->Location = System::Drawing::Point(132, 295);
			this->comboBoxregwho->Name = L"comboBoxregwho";
			this->comboBoxregwho->Size = System::Drawing::Size(149, 32);
			this->comboBoxregwho->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(25, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 52);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Логин:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxreglogin
			// 
			this->textBoxreglogin->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxreglogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxreglogin->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxreglogin->Location = System::Drawing::Point(135, 183);
			this->textBoxreglogin->Name = L"textBoxreglogin";
			this->textBoxreglogin->Size = System::Drawing::Size(136, 36);
			this->textBoxreglogin->TabIndex = 3;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(119, 196);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(169, 29);
			this->label27->TabIndex = 20;
			this->label27->Text = L"____________";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(63, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 53);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Вы:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(10, 219);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 53);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Пароль:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxregpass
			// 
			this->textBoxregpass->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxregpass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxregpass->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxregpass->Location = System::Drawing::Point(135, 228);
			this->textBoxregpass->Name = L"textBoxregpass";
			this->textBoxregpass->Size = System::Drawing::Size(136, 36);
			this->textBoxregpass->TabIndex = 4;
			// 
			// buttonreglogin
			// 
			this->buttonreglogin->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonreglogin->Location = System::Drawing::Point(88, 349);
			this->buttonreglogin->Name = L"buttonreglogin";
			this->buttonreglogin->Size = System::Drawing::Size(152, 53);
			this->buttonreglogin->TabIndex = 5;
			this->buttonreglogin->Text = L"Войти";
			this->buttonreglogin->UseVisualStyleBackColor = true;
			this->buttonreglogin->Click += gcnew System::EventHandler(this, &reg::buttonreglogin_Click);
			// 
			// buttonregback
			// 
			this->buttonregback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonregback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonregback.BackgroundImage")));
			this->buttonregback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonregback->Location = System::Drawing::Point(280, 0);
			this->buttonregback->Name = L"buttonregback";
			this->buttonregback->Size = System::Drawing::Size(44, 40);
			this->buttonregback->TabIndex = 9;
			this->buttonregback->UseVisualStyleBackColor = false;
			this->buttonregback->Click += gcnew System::EventHandler(this, &reg::buttonregback_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(315, 54);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Регистрация";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.68317F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(120, 240);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(169, 29);
			this->label26->TabIndex = 19;
			this->label26->Text = L"____________";
			// 
			// reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 553);
			this->Controls->Add(this->panelreg);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"reg";
			this->Text = L"Регистрация";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &reg::reg_FormClosing);
			this->Load += gcnew System::EventHandler(this, &reg::reg_Load);
			this->panelreg->ResumeLayout(false);
			this->panelreg->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		
		
		String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connstr);
		OleDbDataReader^ dbreader;
		void data();

	private: System::Void reg_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void reg_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonreglogin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonregback_Click(System::Object^ sender, System::EventArgs^ e);
};
}
