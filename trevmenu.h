#pragma once

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
	/// Сводка для trevmenu
	/// </summary>
	public ref class trevmenu : public System::Windows::Forms::Form
	{
	public:
		trevmenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		trevmenu(System::Windows::Forms::Form^ parent)
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
		~trevmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelrevt;
	protected:
	private: System::Windows::Forms::Button^ buttonfindrevpanel;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Button^ buttonrevsavepanel;
	private: System::Windows::Forms::Button^ buttonrevtback;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trevmenu::typeid));
			this->panelrevt = (gcnew System::Windows::Forms::Panel());
			this->buttonfindrevpanel = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->buttonrevsavepanel = (gcnew System::Windows::Forms::Button());
			this->buttonrevtback = (gcnew System::Windows::Forms::Button());
			this->panelrevt->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelrevt
			// 
			this->panelrevt->AutoScroll = true;
			this->panelrevt->Controls->Add(this->buttonfindrevpanel);
			this->panelrevt->Controls->Add(this->label47);
			this->panelrevt->Controls->Add(this->buttonrevsavepanel);
			this->panelrevt->Controls->Add(this->buttonrevtback);
			this->panelrevt->Location = System::Drawing::Point(1, 1);
			this->panelrevt->Name = L"panelrevt";
			this->panelrevt->Size = System::Drawing::Size(324, 349);
			this->panelrevt->TabIndex = 22;
			// 
			// buttonfindrevpanel
			// 
			this->buttonfindrevpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonfindrevpanel->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonfindrevpanel->Location = System::Drawing::Point(66, 294);
			this->buttonfindrevpanel->Name = L"buttonfindrevpanel";
			this->buttonfindrevpanel->Size = System::Drawing::Size(195, 43);
			this->buttonfindrevpanel->TabIndex = 13;
			this->buttonfindrevpanel->Text = L"Найти";
			this->buttonfindrevpanel->UseVisualStyleBackColor = true;
			// 
			// label47
			// 
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(3, 136);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(318, 54);
			this->label47->TabIndex = 11;
			this->label47->Text = L"Отзывы";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonrevsavepanel
			// 
			this->buttonrevsavepanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonrevsavepanel->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonrevsavepanel->Location = System::Drawing::Point(65, 240);
			this->buttonrevsavepanel->Name = L"buttonrevsavepanel";
			this->buttonrevsavepanel->Size = System::Drawing::Size(195, 43);
			this->buttonrevsavepanel->TabIndex = 12;
			this->buttonrevsavepanel->Text = L"Написать";
			this->buttonrevsavepanel->UseVisualStyleBackColor = true;
			// 
			// buttonrevtback
			// 
			this->buttonrevtback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonrevtback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonrevtback.BackgroundImage")));
			this->buttonrevtback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonrevtback->Location = System::Drawing::Point(280, 0);
			this->buttonrevtback->Name = L"buttonrevtback";
			this->buttonrevtback->Size = System::Drawing::Size(44, 40);
			this->buttonrevtback->TabIndex = 10;
			this->buttonrevtback->UseVisualStyleBackColor = false;
			this->buttonrevtback->Click += gcnew System::EventHandler(this, &trevmenu::buttonrevtback_Click);
			// 
			// trevmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 552);
			this->Controls->Add(this->panelrevt);
			this->Name = L"trevmenu";
			this->Text = L"Отзывы";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &trevmenu::trevmenu_FormClosing);
			this->Load += gcnew System::EventHandler(this, &trevmenu::trevmenu_Load);
			this->panelrevt->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
	OleDbConnection^ conn = gcnew OleDbConnection(connstr);
	OleDbDataReader^ dbreader;
	private: System::Void buttonrevtback_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void trevmenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//log^ f1 = gcnew log();
		//f1->conn->Close();
		conn->Close();
	}
	private: System::Void trevmenu_Load(System::Object^ sender, System::EventArgs^ e) {
		conn->Open();
	}
};
}
