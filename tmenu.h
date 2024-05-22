#pragma once

#include "log.h"
#include "reg.h"
#include "tprofile.h"
#include "shed.h"
#include "trevmenu.h"
#include "rrev.h"

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
	/// Сводка для tmenu
	/// </summary>
	public ref class tmenu : public System::Windows::Forms::Form
	{
	public:
		tmenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		tmenu(System::Windows::Forms::Form^ parent)
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
		~tmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmenut;
	protected:
	private: System::Windows::Forms::Button^ buttonThelp;
	private: System::Windows::Forms::Button^ buttonTchats;
	private: System::Windows::Forms::Button^ buttonmenutback;
	private: System::Windows::Forms::Button^ buttonTreview;
	private: System::Windows::Forms::Button^ buttonTprofile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonTshed;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::Form^ parent;
	private: System::Windows::Forms::Button^ buttonExit;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tmenu::typeid));
			this->panelmenut = (gcnew System::Windows::Forms::Panel());
			this->buttonThelp = (gcnew System::Windows::Forms::Button());
			this->buttonTshed = (gcnew System::Windows::Forms::Button());
			this->buttonmenutback = (gcnew System::Windows::Forms::Button());
			this->buttonTreview = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonTprofile = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonTchats = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->panelmenut->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmenut
			// 
			this->panelmenut->Controls->Add(this->buttonThelp);
			this->panelmenut->Controls->Add(this->buttonTshed);
			this->panelmenut->Controls->Add(this->buttonmenutback);
			this->panelmenut->Controls->Add(this->buttonTreview);
			this->panelmenut->Controls->Add(this->label9);
			this->panelmenut->Controls->Add(this->buttonTprofile);
			this->panelmenut->Controls->Add(this->buttonExit);
			this->panelmenut->Controls->Add(this->buttonTchats);
			this->panelmenut->Location = System::Drawing::Point(0, 1);
			this->panelmenut->Name = L"panelmenut";
			this->panelmenut->Size = System::Drawing::Size(324, 553);
			this->panelmenut->TabIndex = 13;
			// 
			// buttonThelp
			// 
			this->buttonThelp->BackColor = System::Drawing::SystemColors::Control;
			this->buttonThelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonThelp.BackgroundImage")));
			this->buttonThelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonThelp->Location = System::Drawing::Point(0, -1);
			this->buttonThelp->Name = L"buttonThelp";
			this->buttonThelp->Size = System::Drawing::Size(44, 40);
			this->buttonThelp->TabIndex = 11;
			this->buttonThelp->UseVisualStyleBackColor = false;
			this->buttonThelp->Click += gcnew System::EventHandler(this, &tmenu::buttonThelp_Click);
			// 
			// buttonTshed
			// 
			this->buttonTshed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTshed->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonTshed, L"shcedule.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonTshed, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonTshed->Location = System::Drawing::Point(58, 258);
			this->buttonTshed->Name = L"buttonTshed";
			this->helpProvider1->SetShowHelp(this->buttonTshed, true);
			this->buttonTshed->Size = System::Drawing::Size(195, 42);
			this->buttonTshed->TabIndex = 7;
			this->buttonTshed->Text = L"Расписание";
			this->buttonTshed->UseVisualStyleBackColor = true;
			this->buttonTshed->Click += gcnew System::EventHandler(this, &tmenu::buttonTshed_Click);
			this->buttonTshed->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &tmenu::buttonTshed_HelpRequested);
			// 
			// buttonmenutback
			// 
			this->buttonmenutback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonmenutback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmenutback.BackgroundImage")));
			this->buttonmenutback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonmenutback->Location = System::Drawing::Point(267, 376);
			this->buttonmenutback->Name = L"buttonmenutback";
			this->buttonmenutback->Size = System::Drawing::Size(44, 40);
			this->buttonmenutback->TabIndex = 10;
			this->buttonmenutback->UseVisualStyleBackColor = false;
			this->buttonmenutback->Visible = false;
			this->buttonmenutback->Click += gcnew System::EventHandler(this, &tmenu::buttonmenutback_Click);
			// 
			// buttonTreview
			// 
			this->buttonTreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTreview->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTreview->Location = System::Drawing::Point(58, 315);
			this->buttonTreview->Name = L"buttonTreview";
			this->buttonTreview->Size = System::Drawing::Size(195, 42);
			this->buttonTreview->TabIndex = 8;
			this->buttonTreview->Text = L"Отзывы";
			this->buttonTreview->UseVisualStyleBackColor = true;
			this->buttonTreview->Click += gcnew System::EventHandler(this, &tmenu::buttonTreview_Click);
			this->buttonTreview->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &tmenu::buttonTreview_HelpRequested);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(62, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 54);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Меню";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonTprofile
			// 
			this->buttonTprofile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTprofile->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonTprofile, L"profile.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonTprofile, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonTprofile->Location = System::Drawing::Point(58, 200);
			this->buttonTprofile->Name = L"buttonTprofile";
			this->helpProvider1->SetShowHelp(this->buttonTprofile, true);
			this->buttonTprofile->Size = System::Drawing::Size(195, 43);
			this->buttonTprofile->TabIndex = 6;
			this->buttonTprofile->Text = L"Профиль";
			this->buttonTprofile->UseVisualStyleBackColor = true;
			this->buttonTprofile->Click += gcnew System::EventHandler(this, &tmenu::buttonTprofile_Click);
			this->buttonTprofile->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &tmenu::buttonTprofile_HelpRequested);
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonExit.BackgroundImage")));
			this->buttonExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 17.82178F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonExit->Location = System::Drawing::Point(280, -1);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(44, 40);
			this->buttonExit->TabIndex = 14;
			this->buttonExit->Text = L"Х";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &tmenu::buttonExit_Click);
			// 
			// buttonTchats
			// 
			this->buttonTchats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTchats->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTchats->Location = System::Drawing::Point(58, 373);
			this->buttonTchats->Name = L"buttonTchats";
			this->buttonTchats->Size = System::Drawing::Size(195, 43);
			this->buttonTchats->TabIndex = 9;
			this->buttonTchats->Text = L"Чаты";
			this->buttonTchats->UseVisualStyleBackColor = true;
			this->buttonTchats->Visible = false;
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"C:\\Users\\strel\\Desktop\\Yes App — копия\\справка.chm";
			// 
			// tmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 553);
			this->ControlBox = false;
			this->Controls->Add(this->panelmenut);
			this->Name = L"tmenu";
			this->Text = L"Меню";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &tmenu::tmenu_FormClosing);
			this->Load += gcnew System::EventHandler(this, &tmenu::tmenu_Load);
			this->panelmenut->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
	OleDbConnection^ conn = gcnew OleDbConnection(connstr);

	private: System::Void buttonTshed_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonTreview_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent);
	private: System::Void tmenu_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tmenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void buttonTreview_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonmenutback_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonThelp_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonTprofile_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTshed_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent);
private: System::Void buttonTprofile_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent);
};
}
