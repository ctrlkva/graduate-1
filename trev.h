#pragma once

#include "trevmenu.h"
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
	/// Сводка для trev
	/// </summary>
	public ref class trev : public System::Windows::Forms::Form
	{
	public:
		trev(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		trev(System::Windows::Forms::Form^ parent)
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
		~trev()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ parent;
	private: System::Windows::Forms::Panel^ panelrevsave;
	protected:
	private: System::Windows::Forms::Button^ buttonrevsave;
	private: System::Windows::Forms::Button^ buttonrevsavepanelback;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBoxsubjects;
	private: System::Windows::Forms::ComboBox^ comboBoxstudents;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::TextBox^ textBoxrevt;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trev::typeid));
			this->panelrevsave = (gcnew System::Windows::Forms::Panel());
			this->buttonrevsave = (gcnew System::Windows::Forms::Button());
			this->buttonrevsavepanelback = (gcnew System::Windows::Forms::Button());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBoxsubjects = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxstudents = (gcnew System::Windows::Forms::ComboBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBoxrevt = (gcnew System::Windows::Forms::TextBox());
			this->panelrevsave->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelrevsave
			// 
			this->panelrevsave->Controls->Add(this->buttonrevsave);
			this->panelrevsave->Controls->Add(this->buttonrevsavepanelback);
			this->panelrevsave->Controls->Add(this->label48);
			this->panelrevsave->Controls->Add(this->label16);
			this->panelrevsave->Controls->Add(this->comboBoxsubjects);
			this->panelrevsave->Controls->Add(this->comboBoxstudents);
			this->panelrevsave->Controls->Add(this->label50);
			this->panelrevsave->Controls->Add(this->textBoxrevt);
			this->panelrevsave->Location = System::Drawing::Point(1, 1);
			this->panelrevsave->Name = L"panelrevsave";
			this->panelrevsave->Size = System::Drawing::Size(324, 554);
			this->panelrevsave->TabIndex = 23;
			this->panelrevsave->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &trev::panelrevsave_Paint);
			// 
			// buttonrevsave
			// 
			this->buttonrevsave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonrevsave->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonrevsave->Location = System::Drawing::Point(79, 478);
			this->buttonrevsave->Name = L"buttonrevsave";
			this->buttonrevsave->Size = System::Drawing::Size(161, 37);
			this->buttonrevsave->TabIndex = 47;
			this->buttonrevsave->Text = L"Отправить";
			this->buttonrevsave->UseVisualStyleBackColor = true;
			this->buttonrevsave->Click += gcnew System::EventHandler(this, &trev::buttonrevsave_Click);
			// 
			// buttonrevsavepanelback
			// 
			this->buttonrevsavepanelback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonrevsavepanelback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonrevsavepanelback.BackgroundImage")));
			this->buttonrevsavepanelback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonrevsavepanelback->Location = System::Drawing::Point(280, 0);
			this->buttonrevsavepanelback->Name = L"buttonrevsavepanelback";
			this->buttonrevsavepanelback->Size = System::Drawing::Size(44, 40);
			this->buttonrevsavepanelback->TabIndex = 10;
			this->buttonrevsavepanelback->UseVisualStyleBackColor = false;
			this->buttonrevsavepanelback->Click += gcnew System::EventHandler(this, &trev::buttonrevsavepanelback_Click);
			// 
			// label48
			// 
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(3, 61);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(318, 74);
			this->label48->TabIndex = 16;
			this->label48->Text = L"Написать отзыв";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(26, 161);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(114, 39);
			this->label16->TabIndex = 37;
			this->label16->Text = L"Студент :";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBoxsubjects
			// 
			this->comboBoxsubjects->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxsubjects->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxsubjects->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxsubjects->FormattingEnabled = true;
			this->comboBoxsubjects->Location = System::Drawing::Point(146, 227);
			this->comboBoxsubjects->Name = L"comboBoxsubjects";
			this->comboBoxsubjects->Size = System::Drawing::Size(149, 32);
			this->comboBoxsubjects->TabIndex = 42;
			// 
			// comboBoxstudents
			// 
			this->comboBoxstudents->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxstudents->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxstudents->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxstudents->FormattingEnabled = true;
			this->comboBoxstudents->Location = System::Drawing::Point(146, 167);
			this->comboBoxstudents->Name = L"comboBoxstudents";
			this->comboBoxstudents->Size = System::Drawing::Size(149, 32);
			this->comboBoxstudents->TabIndex = 40;
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->Location = System::Drawing::Point(26, 221);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(114, 39);
			this->label50->TabIndex = 41;
			this->label50->Text = L"Предмет :";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxrevt
			// 
			this->textBoxrevt->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxrevt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxrevt->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.841584F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxrevt->Location = System::Drawing::Point(31, 286);
			this->textBoxrevt->Multiline = true;
			this->textBoxrevt->Name = L"textBoxrevt";
			this->textBoxrevt->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxrevt->Size = System::Drawing::Size(264, 156);
			this->textBoxrevt->TabIndex = 48;
			// 
			// trev
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 553);
			this->ControlBox = false;
			this->Controls->Add(this->panelrevsave);
			this->Name = L"trev";
			this->Text = L"Отзывы";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &trev::trev_FormClosing);
			this->Load += gcnew System::EventHandler(this, &trev::trev_Load);
			this->panelrevsave->ResumeLayout(false);
			this->panelrevsave->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connstr);
		OleDbDataReader^ dbreader;
		private: System::Void trev_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void panelrevsave_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void trev_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		private: System::Void buttonrevsavepanelback_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void buttonrevsave_Click(System::Object^ sender, System::EventArgs^ e);
};
}
