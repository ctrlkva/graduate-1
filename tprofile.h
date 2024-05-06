#pragma once
#include "tmenu.h"

#include <Windows.h>
#include <vector>
#include <string>
using std::string;
using namespace System::Data::OleDb;

namespace kursme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для tprofile
	/// </summary>
	public ref class tprofile : public System::Windows::Forms::Form
	{
	public:
		tprofile(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		tprofile(System::Windows::Forms::Form^ parent)
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
		~tprofile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelproft;
	private: System::Windows::Forms::Form^ parent;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxproftvk;
	private: System::Windows::Forms::TextBox^ textBoxproftdiscord;
	private: System::Windows::Forms::TextBox^ textBoxproftphone;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBoxproftname3;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBoxproftname2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBoxproftname;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::ComboBox^ comboBoxproftoff;
	private: System::Windows::Forms::CheckBox^ checkBoxprofton;
	private: System::Windows::Forms::Label^ labelprofthours;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ buttonproftsave;
	private: System::Windows::Forms::Button^ buttonproftback;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ labelprofrmoney;


























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tprofile::typeid));
			this->panelproft = (gcnew System::Windows::Forms::Panel());
			this->labelprofrmoney = (gcnew System::Windows::Forms::Label());
			this->buttonproftsave = (gcnew System::Windows::Forms::Button());
			this->textBoxproftvk = (gcnew System::Windows::Forms::TextBox());
			this->textBoxproftdiscord = (gcnew System::Windows::Forms::TextBox());
			this->textBoxproftphone = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBoxproftname3 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBoxproftname2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxproftname = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->comboBoxproftoff = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxprofton = (gcnew System::Windows::Forms::CheckBox());
			this->labelprofthours = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->buttonproftback = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panelproft->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelproft
			// 
			this->panelproft->Controls->Add(this->labelprofrmoney);
			this->panelproft->Controls->Add(this->buttonproftsave);
			this->panelproft->Controls->Add(this->textBoxproftvk);
			this->panelproft->Controls->Add(this->textBoxproftdiscord);
			this->panelproft->Controls->Add(this->textBoxproftphone);
			this->panelproft->Controls->Add(this->label45);
			this->panelproft->Controls->Add(this->textBoxproftname3);
			this->panelproft->Controls->Add(this->label46);
			this->panelproft->Controls->Add(this->label19);
			this->panelproft->Controls->Add(this->label22);
			this->panelproft->Controls->Add(this->label36);
			this->panelproft->Controls->Add(this->label20);
			this->panelproft->Controls->Add(this->label35);
			this->panelproft->Controls->Add(this->label11);
			this->panelproft->Controls->Add(this->label18);
			this->panelproft->Controls->Add(this->textBoxproftname2);
			this->panelproft->Controls->Add(this->label3);
			this->panelproft->Controls->Add(this->label17);
			this->panelproft->Controls->Add(this->textBoxproftname);
			this->panelproft->Controls->Add(this->label28);
			this->panelproft->Controls->Add(this->comboBoxproftoff);
			this->panelproft->Controls->Add(this->checkBoxprofton);
			this->panelproft->Controls->Add(this->label24);
			this->panelproft->Controls->Add(this->label21);
			this->panelproft->Controls->Add(this->buttonproftback);
			this->panelproft->Controls->Add(this->label7);
			this->panelproft->Controls->Add(this->labelprofthours);
			this->panelproft->Location = System::Drawing::Point(0, 0);
			this->panelproft->Name = L"panelproft";
			this->panelproft->Size = System::Drawing::Size(324, 553);
			this->panelproft->TabIndex = 18;
			// 
			// labelprofrmoney
			// 
			this->labelprofrmoney->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelprofrmoney->Location = System::Drawing::Point(21, 9);
			this->labelprofrmoney->Name = L"labelprofrmoney";
			this->labelprofrmoney->Size = System::Drawing::Size(241, 44);
			this->labelprofrmoney->TabIndex = 52;
			this->labelprofrmoney->Text = L"Баланс :   ";
			this->labelprofrmoney->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// buttonproftsave
			// 
			this->buttonproftsave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonproftsave->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonproftsave->Location = System::Drawing::Point(57, 488);
			this->buttonproftsave->Name = L"buttonproftsave";
			this->buttonproftsave->Size = System::Drawing::Size(205, 43);
			this->buttonproftsave->TabIndex = 9;
			this->buttonproftsave->Text = L"Сохранить";
			this->buttonproftsave->UseVisualStyleBackColor = true;
			this->buttonproftsave->Click += gcnew System::EventHandler(this, &tprofile::buttonproftsave_Click);
			// 
			// textBoxproftvk
			// 
			this->textBoxproftvk->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftvk->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftvk->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftvk->Location = System::Drawing::Point(140, 306);
			this->textBoxproftvk->Name = L"textBoxproftvk";
			this->textBoxproftvk->Size = System::Drawing::Size(140, 31);
			this->textBoxproftvk->TabIndex = 43;
			// 
			// textBoxproftdiscord
			// 
			this->textBoxproftdiscord->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftdiscord->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftdiscord->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftdiscord->Location = System::Drawing::Point(140, 269);
			this->textBoxproftdiscord->Name = L"textBoxproftdiscord";
			this->textBoxproftdiscord->Size = System::Drawing::Size(140, 31);
			this->textBoxproftdiscord->TabIndex = 39;
			// 
			// textBoxproftphone
			// 
			this->textBoxproftphone->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftphone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftphone->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftphone->Location = System::Drawing::Point(140, 232);
			this->textBoxproftphone->Name = L"textBoxproftphone";
			this->textBoxproftphone->Size = System::Drawing::Size(140, 31);
			this->textBoxproftphone->TabIndex = 41;
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(3, 190);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(131, 44);
			this->label45->TabIndex = 45;
			this->label45->Text = L"Отчество :";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxproftname3
			// 
			this->textBoxproftname3->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftname3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftname3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftname3->Location = System::Drawing::Point(140, 195);
			this->textBoxproftname3->Name = L"textBoxproftname3";
			this->textBoxproftname3->Size = System::Drawing::Size(140, 31);
			this->textBoxproftname3->TabIndex = 46;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(88, 205);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(202, 30);
			this->label46->TabIndex = 47;
			this->label46->Text = L"___________________________";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(25, 269);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(109, 34);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Дискорд :";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(70, 303);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(64, 43);
			this->label22->TabIndex = 22;
			this->label22->Text = L"ВК :";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(107, 316);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(181, 30);
			this->label36->TabIndex = 44;
			this->label36->Text = L"________________________";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(25, 223);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(109, 51);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Телефон :";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(86, 279);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(202, 30);
			this->label35->TabIndex = 42;
			this->label35->Text = L"___________________________";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(124, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(167, 30);
			this->label11->TabIndex = 40;
			this->label11->Text = L"______________________";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(21, 153);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(113, 44);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Фамилия :";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxproftname2
			// 
			this->textBoxproftname2->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftname2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftname2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftname2->Location = System::Drawing::Point(140, 158);
			this->textBoxproftname2->Name = L"textBoxproftname2";
			this->textBoxproftname2->Size = System::Drawing::Size(140, 31);
			this->textBoxproftname2->TabIndex = 37;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(88, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 30);
			this->label3->TabIndex = 38;
			this->label3->Text = L"___________________________";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(61, 115);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 48);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Имя :";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxproftname
			// 
			this->textBoxproftname->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftname->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftname->Location = System::Drawing::Point(140, 123);
			this->textBoxproftname->Name = L"textBoxproftname";
			this->textBoxproftname->Size = System::Drawing::Size(140, 31);
			this->textBoxproftname->TabIndex = 35;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(47, 133);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(244, 30);
			this->label28->TabIndex = 36;
			this->label28->Text = L"_________________________________";
			// 
			// comboBoxproftoff
			// 
			this->comboBoxproftoff->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxproftoff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxproftoff->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxproftoff->FormattingEnabled = true;
			this->comboBoxproftoff->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"нет", L"Комсомольская, 78", L"Амундсена, 56",
					L"Шаумяна, 87", L"Родонитовая, 15", L"Соболева, 19", L"Заводская, 16", L"Сахарова, 73", L"Вайнера, 60", L"Сыромолотова, 14",
					L"Опалихинская, 18", L"Краснолесье, 24"
			});
			this->comboBoxproftoff->Location = System::Drawing::Point(127, 377);
			this->comboBoxproftoff->Name = L"comboBoxproftoff";
			this->comboBoxproftoff->Size = System::Drawing::Size(176, 32);
			this->comboBoxproftoff->TabIndex = 34;
			// 
			// checkBoxprofton
			// 
			this->checkBoxprofton->AutoSize = true;
			this->checkBoxprofton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.11881F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBoxprofton->Location = System::Drawing::Point(129, 430);
			this->checkBoxprofton->Name = L"checkBoxprofton";
			this->checkBoxprofton->Size = System::Drawing::Size(15, 14);
			this->checkBoxprofton->TabIndex = 33;
			this->checkBoxprofton->UseVisualStyleBackColor = true;
			// 
			// labelprofthours
			// 
			this->labelprofthours->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelprofthours->Location = System::Drawing::Point(171, 409);
			this->labelprofthours->Name = L"labelprofthours";
			this->labelprofthours->Size = System::Drawing::Size(143, 76);
			this->labelprofthours->TabIndex = 28;
			this->labelprofthours->Text = L"Часов в прошлом \r\nмесяце :   ";
			this->labelprofthours->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(34, 412);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(110, 42);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Онлайн :";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(13, 370);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 41);
			this->label21->TabIndex = 24;
			this->label21->Text = L"Оффлайн :";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// buttonproftback
			// 
			this->buttonproftback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonproftback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonproftback.BackgroundImage")));
			this->buttonproftback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonproftback->Location = System::Drawing::Point(280, 0);
			this->buttonproftback->Name = L"buttonproftback";
			this->buttonproftback->Size = System::Drawing::Size(44, 40);
			this->buttonproftback->TabIndex = 10;
			this->buttonproftback->UseVisualStyleBackColor = false;
			this->buttonproftback->Click += gcnew System::EventHandler(this, &tprofile::buttonproftback_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(318, 72);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Профиль";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tprofile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 554);
			this->ControlBox = false;
			this->Controls->Add(this->panelproft);
			this->Name = L"tprofile";
			this->Text = L"Профиль";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &tprofile::tprofile_FormClosing);
			this->Load += gcnew System::EventHandler(this, &tprofile::tprofile_Load);
			this->panelproft->ResumeLayout(false);
			this->panelproft->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connstr);
		OleDbDataReader^ dbreader;

		private: System::Void tprofile_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void tprofile_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		private: System::Void buttonproftsave_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonproftback_Click(System::Object^ sender, System::EventArgs^ e);
};
}
