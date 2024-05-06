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
	/// Сводка для rrev
	/// </summary>
	public ref class rrev : public System::Windows::Forms::Form
	{
	public:
		rrev(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		rrev(System::Windows::Forms::Form^ parent)
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
		~rrev()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelrevfindt;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBoxfindnumbert;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ buttonrevfindpanelback;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::ComboBox^ comboBoxfindsubjectst;
	private: System::Windows::Forms::ComboBox^ comboBoxfindstudentst;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::TextBox^ textBoxfindrevt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(rrev::typeid));
			this->panelrevfindt = (gcnew System::Windows::Forms::Panel());
			this->comboBoxfindnumbert = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->buttonrevfindpanelback = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->comboBoxfindsubjectst = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxfindstudentst = (gcnew System::Windows::Forms::ComboBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBoxfindrevt = (gcnew System::Windows::Forms::TextBox());
			this->panelrevfindt->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelrevfindt
			// 
			this->panelrevfindt->Controls->Add(this->comboBoxfindnumbert);
			this->panelrevfindt->Controls->Add(this->label15);
			this->panelrevfindt->Controls->Add(this->buttonrevfindpanelback);
			this->panelrevfindt->Controls->Add(this->label49);
			this->panelrevfindt->Controls->Add(this->label51);
			this->panelrevfindt->Controls->Add(this->comboBoxfindsubjectst);
			this->panelrevfindt->Controls->Add(this->comboBoxfindstudentst);
			this->panelrevfindt->Controls->Add(this->label52);
			this->panelrevfindt->Controls->Add(this->textBoxfindrevt);
			this->panelrevfindt->Location = System::Drawing::Point(1, 0);
			this->panelrevfindt->Name = L"panelrevfindt";
			this->panelrevfindt->Size = System::Drawing::Size(324, 506);
			this->panelrevfindt->TabIndex = 24;
			// 
			// comboBoxfindnumbert
			// 
			this->comboBoxfindnumbert->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxfindnumbert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxfindnumbert->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxfindnumbert->FormattingEnabled = true;
			this->comboBoxfindnumbert->Location = System::Drawing::Point(145, 274);
			this->comboBoxfindnumbert->Name = L"comboBoxfindnumbert";
			this->comboBoxfindnumbert->Size = System::Drawing::Size(149, 32);
			this->comboBoxfindnumbert->TabIndex = 50;
			this->comboBoxfindnumbert->SelectedIndexChanged += gcnew System::EventHandler(this, &rrev::comboBoxfindnumbert_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(49, 268);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 39);
			this->label15->TabIndex = 49;
			this->label15->Text = L"Номер :";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// buttonrevfindpanelback
			// 
			this->buttonrevfindpanelback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonrevfindpanelback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonrevfindpanelback.BackgroundImage")));
			this->buttonrevfindpanelback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonrevfindpanelback->Location = System::Drawing::Point(280, 0);
			this->buttonrevfindpanelback->Name = L"buttonrevfindpanelback";
			this->buttonrevfindpanelback->Size = System::Drawing::Size(44, 40);
			this->buttonrevfindpanelback->TabIndex = 10;
			this->buttonrevfindpanelback->UseVisualStyleBackColor = false;
			this->buttonrevfindpanelback->Click += gcnew System::EventHandler(this, &rrev::buttonrevfindpanelback_Click);
			// 
			// label49
			// 
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(2, 110);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(318, 60);
			this->label49->TabIndex = 16;
			this->label49->Text = L"Найти отзыв";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(25, 187);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(114, 39);
			this->label51->TabIndex = 37;
			this->label51->Text = L"Студент :";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBoxfindsubjectst
			// 
			this->comboBoxfindsubjectst->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxfindsubjectst->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxfindsubjectst->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxfindsubjectst->FormattingEnabled = true;
			this->comboBoxfindsubjectst->Location = System::Drawing::Point(145, 234);
			this->comboBoxfindsubjectst->Name = L"comboBoxfindsubjectst";
			this->comboBoxfindsubjectst->Size = System::Drawing::Size(149, 32);
			this->comboBoxfindsubjectst->TabIndex = 42;
			this->comboBoxfindsubjectst->SelectedIndexChanged += gcnew System::EventHandler(this, &rrev::comboBoxfindsubjectst_SelectedIndexChanged);
			// 
			// comboBoxfindstudentst
			// 
			this->comboBoxfindstudentst->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxfindstudentst->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxfindstudentst->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxfindstudentst->FormattingEnabled = true;
			this->comboBoxfindstudentst->Location = System::Drawing::Point(145, 193);
			this->comboBoxfindstudentst->Name = L"comboBoxfindstudentst";
			this->comboBoxfindstudentst->Size = System::Drawing::Size(149, 32);
			this->comboBoxfindstudentst->TabIndex = 40;
			this->comboBoxfindstudentst->SelectedIndexChanged += gcnew System::EventHandler(this, &rrev::comboBoxfindstudentst_SelectedIndexChanged);
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(25, 228);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(114, 39);
			this->label52->TabIndex = 41;
			this->label52->Text = L"Предмет :";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxfindrevt
			// 
			this->textBoxfindrevt->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxfindrevt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxfindrevt->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.841584F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxfindrevt->Location = System::Drawing::Point(31, 328);
			this->textBoxfindrevt->Multiline = true;
			this->textBoxfindrevt->Name = L"textBoxfindrevt";
			this->textBoxfindrevt->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxfindrevt->Size = System::Drawing::Size(264, 156);
			this->textBoxfindrevt->TabIndex = 51;
			// 
			// rrev
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 552);
			this->ControlBox = false;
			this->Controls->Add(this->panelrevfindt);
			this->Name = L"rrev";
			this->Text = L"Отзывы";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &rrev::rrev_FormClosing);
			this->Load += gcnew System::EventHandler(this, &rrev::rrev_Load);
			this->panelrevfindt->ResumeLayout(false);
			this->panelrevfindt->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connstr);
		OleDbDataReader^ dbreader;

	private: System::Void rrev_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rrev_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void buttonrevfindpanelback_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBoxfindstudentst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBoxfindsubjectst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBoxfindnumbert_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	void findr();
	void findt();
};
}
