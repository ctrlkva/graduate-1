#pragma once
#include "tmenu.h"

#include <Windows.h>
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
	/// Сводка для shed
	/// </summary>
	public ref class shed : public System::Windows::Forms::Form
	{
	public:
		shed(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
    public:
        shed(System::Windows::Forms::Form^ parent)
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
		~shed()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Form^ parent;
    private: System::Windows::Forms::Panel^ panelshed;
    protected:
    private: System::Windows::Forms::Label^ label76;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::Label^ label73;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::Label^ label61;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label75;
    private: System::Windows::Forms::Panel^ panel1;






















































































    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label74;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Button^ buttonshedback;








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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(shed::typeid));
            this->panelshed = (gcnew System::Windows::Forms::Panel());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->buttonshedback = (gcnew System::Windows::Forms::Button());
            this->panelshed->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // panelshed
            // 
            this->panelshed->Controls->Add(this->label76);
            this->panelshed->Controls->Add(this->label64);
            this->panelshed->Controls->Add(this->label65);
            this->panelshed->Controls->Add(this->label66);
            this->panelshed->Controls->Add(this->label73);
            this->panelshed->Controls->Add(this->label62);
            this->panelshed->Controls->Add(this->label63);
            this->panelshed->Controls->Add(this->label61);
            this->panelshed->Controls->Add(this->label60);
            this->panelshed->Controls->Add(this->label59);
            this->panelshed->Controls->Add(this->label58);
            this->panelshed->Controls->Add(this->label75);
            this->panelshed->Controls->Add(this->panel1);
            this->panelshed->Controls->Add(this->buttonshedback);
            this->panelshed->Location = System::Drawing::Point(1, 1);
            this->panelshed->Name = L"panelshed";
            this->panelshed->Size = System::Drawing::Size(1420, 555);
            this->panelshed->TabIndex = 26;
            // 
            // label76
            // 
            this->label76->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label76->Location = System::Drawing::Point(3, 473);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(89, 32);
            this->label76->TabIndex = 76;
            this->label76->Text = L"20:00";
            this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label64
            // 
            this->label64->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label64->Location = System::Drawing::Point(3, 435);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(89, 32);
            this->label64->TabIndex = 75;
            this->label64->Text = L"19:00";
            this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label65
            // 
            this->label65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label65->Location = System::Drawing::Point(3, 397);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(89, 32);
            this->label65->TabIndex = 74;
            this->label65->Text = L"18:00";
            this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label66
            // 
            this->label66->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label66->Location = System::Drawing::Point(3, 359);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(89, 32);
            this->label66->TabIndex = 73;
            this->label66->Text = L"17:00";
            this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label73
            // 
            this->label73->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label73->Location = System::Drawing::Point(3, 321);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(89, 32);
            this->label73->TabIndex = 72;
            this->label73->Text = L"16:00";
            this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label62
            // 
            this->label62->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label62->Location = System::Drawing::Point(3, 283);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(89, 32);
            this->label62->TabIndex = 71;
            this->label62->Text = L"15:00";
            this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label63
            // 
            this->label63->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label63->Location = System::Drawing::Point(3, 245);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(89, 32);
            this->label63->TabIndex = 70;
            this->label63->Text = L"14:00";
            this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label61
            // 
            this->label61->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label61->Location = System::Drawing::Point(3, 207);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(89, 32);
            this->label61->TabIndex = 69;
            this->label61->Text = L"13:00";
            this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label60
            // 
            this->label60->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label60->Location = System::Drawing::Point(3, 169);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(89, 32);
            this->label60->TabIndex = 68;
            this->label60->Text = L"12:00";
            this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label59
            // 
            this->label59->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label59->Location = System::Drawing::Point(3, 133);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(89, 32);
            this->label59->TabIndex = 67;
            this->label59->Text = L"11:00";
            this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label58
            // 
            this->label58->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label58->Location = System::Drawing::Point(3, 95);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(89, 32);
            this->label58->TabIndex = 66;
            this->label58->Text = L"10:00";
            this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label75
            // 
            this->label75->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label75->Location = System::Drawing::Point(3, 57);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(89, 32);
            this->label75->TabIndex = 65;
            this->label75->Text = L"9:00";
            this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel1
            // 
            this->panel1->AutoScroll = true;
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->label67);
            this->panel1->Controls->Add(this->label68);
            this->panel1->Controls->Add(this->label69);
            this->panel1->Controls->Add(this->label70);
            this->panel1->Controls->Add(this->label71);
            this->panel1->Controls->Add(this->label72);
            this->panel1->Controls->Add(this->label74);
            this->panel1->Controls->Add(this->label57);
            this->panel1->Location = System::Drawing::Point(92, 3);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1268, 534);
            this->panel1->TabIndex = 58;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(173, 57);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(164, 32);
            this->textBox2->TabIndex = 73;
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(3, 57);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(164, 32);
            this->textBox1->TabIndex = 72;
            // 
            // label67
            // 
            this->label67->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label67->Location = System::Drawing::Point(1023, 0);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(161, 47);
            this->label67->TabIndex = 57;
            this->label67->Text = L"ВС";
            this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label68
            // 
            this->label68->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label68->Location = System::Drawing::Point(853, 0);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(164, 47);
            this->label68->TabIndex = 56;
            this->label68->Text = L"СБ";
            this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label69
            // 
            this->label69->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label69->Location = System::Drawing::Point(683, 0);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(164, 47);
            this->label69->TabIndex = 55;
            this->label69->Text = L"ПТ";
            this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label70
            // 
            this->label70->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label70->Location = System::Drawing::Point(513, 0);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(164, 47);
            this->label70->TabIndex = 54;
            this->label70->Text = L"ЧТ";
            this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label71
            // 
            this->label71->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label71->Location = System::Drawing::Point(343, 0);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(164, 47);
            this->label71->TabIndex = 53;
            this->label71->Text = L"СР";
            this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label72
            // 
            this->label72->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label72->Location = System::Drawing::Point(173, 0);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(164, 47);
            this->label72->TabIndex = 52;
            this->label72->Text = L"ВТ";
            this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label74
            // 
            this->label74->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label74->Location = System::Drawing::Point(3, 0);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(164, 47);
            this->label74->TabIndex = 16;
            this->label74->Text = L"ПН";
            this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label57
            // 
            this->label57->Font = (gcnew System::Drawing::Font(L"Segoe Print", 17.82178F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label57->Location = System::Drawing::Point(2, 4);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(1191, 72);
            this->label57->TabIndex = 58;
            this->label57->Text = L"_________________________________________________________________________________"
                L"____________________________________";
            this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // buttonshedback
            // 
            this->buttonshedback->BackColor = System::Drawing::SystemColors::Control;
            this->buttonshedback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonshedback.BackgroundImage")));
            this->buttonshedback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->buttonshedback->Location = System::Drawing::Point(0, -1);
            this->buttonshedback->Name = L"buttonshedback";
            this->buttonshedback->Size = System::Drawing::Size(44, 40);
            this->buttonshedback->TabIndex = 10;
            this->buttonshedback->UseVisualStyleBackColor = false;
            this->buttonshedback->Click += gcnew System::EventHandler(this, &shed::buttonshedback_Click);
            // 
            // shed
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1480, 553);
            this->ControlBox = false;
            this->Controls->Add(this->panelshed);
            this->Name = L"shed";
            this->Text = L"Расписание";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &shed::shed_FormClosing);
            this->Load += gcnew System::EventHandler(this, &shed::shed_Load);
            this->panelshed->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
        String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
        OleDbConnection^ conn = gcnew OleDbConnection(connstr);
        OleDbDataReader^ dbreader;

    private: System::Void shed_Load(System::Object^ sender, System::EventArgs^ e);

    private: System::Void shed_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
    private: System::Void buttonshedback_Click(System::Object^ sender, System::EventArgs^ e);
    
};
}
