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
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox85;
private: System::Windows::Forms::TextBox^ textBox79;
private: System::Windows::Forms::TextBox^ textBox80;
private: System::Windows::Forms::TextBox^ textBox81;
private: System::Windows::Forms::TextBox^ textBox82;
private: System::Windows::Forms::TextBox^ textBox83;
private: System::Windows::Forms::TextBox^ textBox84;
private: System::Windows::Forms::TextBox^ textBox73;
private: System::Windows::Forms::TextBox^ textBox74;
private: System::Windows::Forms::TextBox^ textBox75;
private: System::Windows::Forms::TextBox^ textBox76;
private: System::Windows::Forms::TextBox^ textBox77;
private: System::Windows::Forms::TextBox^ textBox78;
private: System::Windows::Forms::TextBox^ textBox67;
private: System::Windows::Forms::TextBox^ textBox68;
private: System::Windows::Forms::TextBox^ textBox69;
private: System::Windows::Forms::TextBox^ textBox70;
private: System::Windows::Forms::TextBox^ textBox71;
private: System::Windows::Forms::TextBox^ textBox72;
private: System::Windows::Forms::TextBox^ textBox61;
private: System::Windows::Forms::TextBox^ textBox62;
private: System::Windows::Forms::TextBox^ textBox63;
private: System::Windows::Forms::TextBox^ textBox64;
private: System::Windows::Forms::TextBox^ textBox65;
private: System::Windows::Forms::TextBox^ textBox66;
private: System::Windows::Forms::TextBox^ textBox55;
private: System::Windows::Forms::TextBox^ textBox56;
private: System::Windows::Forms::TextBox^ textBox57;
private: System::Windows::Forms::TextBox^ textBox58;
private: System::Windows::Forms::TextBox^ textBox59;
private: System::Windows::Forms::TextBox^ textBox60;
private: System::Windows::Forms::TextBox^ textBox49;
private: System::Windows::Forms::TextBox^ textBox50;
private: System::Windows::Forms::TextBox^ textBox51;
private: System::Windows::Forms::TextBox^ textBox52;
private: System::Windows::Forms::TextBox^ textBox53;
private: System::Windows::Forms::TextBox^ textBox54;
private: System::Windows::Forms::TextBox^ textBox48;
private: System::Windows::Forms::TextBox^ textBox46;
private: System::Windows::Forms::TextBox^ textBox47;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox37;








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
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->textBox29 = (gcnew System::Windows::Forms::TextBox());
            this->textBox30 = (gcnew System::Windows::Forms::TextBox());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->textBox35 = (gcnew System::Windows::Forms::TextBox());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->textBox37 = (gcnew System::Windows::Forms::TextBox());
            this->textBox38 = (gcnew System::Windows::Forms::TextBox());
            this->textBox39 = (gcnew System::Windows::Forms::TextBox());
            this->textBox40 = (gcnew System::Windows::Forms::TextBox());
            this->textBox41 = (gcnew System::Windows::Forms::TextBox());
            this->textBox42 = (gcnew System::Windows::Forms::TextBox());
            this->textBox43 = (gcnew System::Windows::Forms::TextBox());
            this->textBox44 = (gcnew System::Windows::Forms::TextBox());
            this->textBox45 = (gcnew System::Windows::Forms::TextBox());
            this->textBox46 = (gcnew System::Windows::Forms::TextBox());
            this->textBox47 = (gcnew System::Windows::Forms::TextBox());
            this->textBox48 = (gcnew System::Windows::Forms::TextBox());
            this->textBox49 = (gcnew System::Windows::Forms::TextBox());
            this->textBox50 = (gcnew System::Windows::Forms::TextBox());
            this->textBox51 = (gcnew System::Windows::Forms::TextBox());
            this->textBox52 = (gcnew System::Windows::Forms::TextBox());
            this->textBox53 = (gcnew System::Windows::Forms::TextBox());
            this->textBox54 = (gcnew System::Windows::Forms::TextBox());
            this->textBox55 = (gcnew System::Windows::Forms::TextBox());
            this->textBox56 = (gcnew System::Windows::Forms::TextBox());
            this->textBox57 = (gcnew System::Windows::Forms::TextBox());
            this->textBox58 = (gcnew System::Windows::Forms::TextBox());
            this->textBox59 = (gcnew System::Windows::Forms::TextBox());
            this->textBox60 = (gcnew System::Windows::Forms::TextBox());
            this->textBox61 = (gcnew System::Windows::Forms::TextBox());
            this->textBox62 = (gcnew System::Windows::Forms::TextBox());
            this->textBox63 = (gcnew System::Windows::Forms::TextBox());
            this->textBox64 = (gcnew System::Windows::Forms::TextBox());
            this->textBox65 = (gcnew System::Windows::Forms::TextBox());
            this->textBox66 = (gcnew System::Windows::Forms::TextBox());
            this->textBox67 = (gcnew System::Windows::Forms::TextBox());
            this->textBox68 = (gcnew System::Windows::Forms::TextBox());
            this->textBox69 = (gcnew System::Windows::Forms::TextBox());
            this->textBox70 = (gcnew System::Windows::Forms::TextBox());
            this->textBox71 = (gcnew System::Windows::Forms::TextBox());
            this->textBox72 = (gcnew System::Windows::Forms::TextBox());
            this->textBox73 = (gcnew System::Windows::Forms::TextBox());
            this->textBox74 = (gcnew System::Windows::Forms::TextBox());
            this->textBox75 = (gcnew System::Windows::Forms::TextBox());
            this->textBox76 = (gcnew System::Windows::Forms::TextBox());
            this->textBox77 = (gcnew System::Windows::Forms::TextBox());
            this->textBox78 = (gcnew System::Windows::Forms::TextBox());
            this->textBox79 = (gcnew System::Windows::Forms::TextBox());
            this->textBox80 = (gcnew System::Windows::Forms::TextBox());
            this->textBox81 = (gcnew System::Windows::Forms::TextBox());
            this->textBox82 = (gcnew System::Windows::Forms::TextBox());
            this->textBox83 = (gcnew System::Windows::Forms::TextBox());
            this->textBox84 = (gcnew System::Windows::Forms::TextBox());
            this->textBox85 = (gcnew System::Windows::Forms::TextBox());
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
            this->panelshed->Size = System::Drawing::Size(346, 555);
            this->panelshed->TabIndex = 26;
            // 
            // label76
            // 
            this->label76->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label76->Location = System::Drawing::Point(3, 475);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(89, 38);
            this->label76->TabIndex = 76;
            this->label76->Text = L"20:00";
            this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label64
            // 
            this->label64->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label64->Location = System::Drawing::Point(3, 438);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(89, 37);
            this->label64->TabIndex = 75;
            this->label64->Text = L"19:00";
            this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label65
            // 
            this->label65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label65->Location = System::Drawing::Point(3, 400);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(89, 37);
            this->label65->TabIndex = 74;
            this->label65->Text = L"18:00";
            this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label66
            // 
            this->label66->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label66->Location = System::Drawing::Point(3, 361);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(89, 39);
            this->label66->TabIndex = 73;
            this->label66->Text = L"17:00";
            this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label73
            // 
            this->label73->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label73->Location = System::Drawing::Point(3, 323);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(89, 38);
            this->label73->TabIndex = 72;
            this->label73->Text = L"16:00";
            this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label62
            // 
            this->label62->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label62->Location = System::Drawing::Point(3, 285);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(89, 38);
            this->label62->TabIndex = 71;
            this->label62->Text = L"15:00";
            this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label63
            // 
            this->label63->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label63->Location = System::Drawing::Point(3, 247);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(89, 38);
            this->label63->TabIndex = 70;
            this->label63->Text = L"14:00";
            this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label61
            // 
            this->label61->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label61->Location = System::Drawing::Point(3, 209);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(89, 38);
            this->label61->TabIndex = 69;
            this->label61->Text = L"13:00";
            this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label60
            // 
            this->label60->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label60->Location = System::Drawing::Point(3, 171);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(89, 38);
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
            this->label59->Size = System::Drawing::Size(89, 38);
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
            this->label58->Size = System::Drawing::Size(89, 38);
            this->label58->TabIndex = 66;
            this->label58->Text = L"10:00";
            this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label75
            // 
            this->label75->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label75->Location = System::Drawing::Point(3, 55);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(89, 40);
            this->label75->TabIndex = 65;
            this->label75->Text = L"9:00";
            this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel1
            // 
            this->panel1->AutoScroll = true;
            this->panel1->Controls->Add(this->textBox85);
            this->panel1->Controls->Add(this->textBox79);
            this->panel1->Controls->Add(this->textBox80);
            this->panel1->Controls->Add(this->textBox81);
            this->panel1->Controls->Add(this->textBox82);
            this->panel1->Controls->Add(this->textBox83);
            this->panel1->Controls->Add(this->textBox84);
            this->panel1->Controls->Add(this->textBox73);
            this->panel1->Controls->Add(this->textBox74);
            this->panel1->Controls->Add(this->textBox75);
            this->panel1->Controls->Add(this->textBox76);
            this->panel1->Controls->Add(this->textBox77);
            this->panel1->Controls->Add(this->textBox78);
            this->panel1->Controls->Add(this->textBox67);
            this->panel1->Controls->Add(this->textBox68);
            this->panel1->Controls->Add(this->textBox69);
            this->panel1->Controls->Add(this->textBox70);
            this->panel1->Controls->Add(this->textBox71);
            this->panel1->Controls->Add(this->textBox72);
            this->panel1->Controls->Add(this->textBox61);
            this->panel1->Controls->Add(this->textBox62);
            this->panel1->Controls->Add(this->textBox63);
            this->panel1->Controls->Add(this->textBox64);
            this->panel1->Controls->Add(this->textBox65);
            this->panel1->Controls->Add(this->textBox66);
            this->panel1->Controls->Add(this->textBox55);
            this->panel1->Controls->Add(this->textBox56);
            this->panel1->Controls->Add(this->textBox57);
            this->panel1->Controls->Add(this->textBox58);
            this->panel1->Controls->Add(this->textBox59);
            this->panel1->Controls->Add(this->textBox60);
            this->panel1->Controls->Add(this->textBox49);
            this->panel1->Controls->Add(this->textBox50);
            this->panel1->Controls->Add(this->textBox51);
            this->panel1->Controls->Add(this->textBox52);
            this->panel1->Controls->Add(this->textBox53);
            this->panel1->Controls->Add(this->textBox54);
            this->panel1->Controls->Add(this->textBox48);
            this->panel1->Controls->Add(this->textBox46);
            this->panel1->Controls->Add(this->textBox47);
            this->panel1->Controls->Add(this->textBox42);
            this->panel1->Controls->Add(this->textBox43);
            this->panel1->Controls->Add(this->textBox44);
            this->panel1->Controls->Add(this->textBox45);
            this->panel1->Controls->Add(this->textBox38);
            this->panel1->Controls->Add(this->textBox39);
            this->panel1->Controls->Add(this->textBox40);
            this->panel1->Controls->Add(this->textBox41);
            this->panel1->Controls->Add(this->textBox36);
            this->panel1->Controls->Add(this->textBox37);
            this->panel1->Controls->Add(this->textBox31);
            this->panel1->Controls->Add(this->textBox18);
            this->panel1->Controls->Add(this->textBox32);
            this->panel1->Controls->Add(this->textBox25);
            this->panel1->Controls->Add(this->textBox33);
            this->panel1->Controls->Add(this->textBox24);
            this->panel1->Controls->Add(this->textBox34);
            this->panel1->Controls->Add(this->textBox17);
            this->panel1->Controls->Add(this->textBox35);
            this->panel1->Controls->Add(this->textBox16);
            this->panel1->Controls->Add(this->textBox29);
            this->panel1->Controls->Add(this->textBox30);
            this->panel1->Controls->Add(this->textBox15);
            this->panel1->Controls->Add(this->textBox19);
            this->panel1->Controls->Add(this->textBox20);
            this->panel1->Controls->Add(this->textBox21);
            this->panel1->Controls->Add(this->textBox22);
            this->panel1->Controls->Add(this->textBox23);
            this->panel1->Controls->Add(this->textBox26);
            this->panel1->Controls->Add(this->textBox27);
            this->panel1->Controls->Add(this->textBox28);
            this->panel1->Controls->Add(this->textBox9);
            this->panel1->Controls->Add(this->textBox10);
            this->panel1->Controls->Add(this->textBox11);
            this->panel1->Controls->Add(this->textBox12);
            this->panel1->Controls->Add(this->textBox13);
            this->panel1->Controls->Add(this->textBox14);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->textBox6);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox8);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->textBox4);
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
            this->panel1->Size = System::Drawing::Size(232, 534);
            this->panel1->TabIndex = 58;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(173, 60);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(164, 32);
            this->textBox2->TabIndex = 73;
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(3, 60);
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
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(343, 60);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(164, 32);
            this->textBox3->TabIndex = 75;
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox4->Location = System::Drawing::Point(513, 60);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(164, 32);
            this->textBox4->TabIndex = 74;
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox5->Location = System::Drawing::Point(683, 59);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(164, 32);
            this->textBox5->TabIndex = 79;
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox6->Location = System::Drawing::Point(853, 60);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(164, 32);
            this->textBox6->TabIndex = 78;
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox7->Location = System::Drawing::Point(1023, 60);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(164, 32);
            this->textBox7->TabIndex = 77;
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox8->Location = System::Drawing::Point(683, 174);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(164, 32);
            this->textBox8->TabIndex = 76;
            // 
            // textBox9
            // 
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox9->Location = System::Drawing::Point(1023, 98);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(164, 32);
            this->textBox9->TabIndex = 85;
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox10->Location = System::Drawing::Point(853, 98);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(164, 32);
            this->textBox10->TabIndex = 84;
            // 
            // textBox11
            // 
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox11->Location = System::Drawing::Point(683, 98);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(164, 32);
            this->textBox11->TabIndex = 83;
            // 
            // textBox12
            // 
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox12->Location = System::Drawing::Point(513, 98);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(164, 32);
            this->textBox12->TabIndex = 82;
            // 
            // textBox13
            // 
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox13->Location = System::Drawing::Point(343, 98);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(164, 32);
            this->textBox13->TabIndex = 81;
            // 
            // textBox14
            // 
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox14->Location = System::Drawing::Point(173, 98);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(164, 32);
            this->textBox14->TabIndex = 80;
            // 
            // textBox15
            // 
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox15->Location = System::Drawing::Point(343, 174);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(164, 32);
            this->textBox15->TabIndex = 99;
            // 
            // textBox16
            // 
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox16->Location = System::Drawing::Point(3, 402);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(164, 32);
            this->textBox16->TabIndex = 98;
            // 
            // textBox17
            // 
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox17->Location = System::Drawing::Point(3, 440);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(164, 32);
            this->textBox17->TabIndex = 97;
            // 
            // textBox18
            // 
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox18->Location = System::Drawing::Point(173, 212);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(164, 32);
            this->textBox18->TabIndex = 96;
            // 
            // textBox19
            // 
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox19->Location = System::Drawing::Point(3, 326);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(164, 32);
            this->textBox19->TabIndex = 95;
            // 
            // textBox20
            // 
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox20->Location = System::Drawing::Point(3, 364);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(164, 32);
            this->textBox20->TabIndex = 94;
            // 
            // textBox21
            // 
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox21->Location = System::Drawing::Point(3, 212);
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(164, 32);
            this->textBox21->TabIndex = 93;
            // 
            // textBox22
            // 
            this->textBox22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox22->Location = System::Drawing::Point(343, 212);
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(164, 32);
            this->textBox22->TabIndex = 92;
            // 
            // textBox23
            // 
            this->textBox23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox23->Location = System::Drawing::Point(513, 174);
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(164, 32);
            this->textBox23->TabIndex = 91;
            // 
            // textBox24
            // 
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox24->Location = System::Drawing::Point(3, 478);
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(164, 32);
            this->textBox24->TabIndex = 90;
            // 
            // textBox25
            // 
            this->textBox25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox25->Location = System::Drawing::Point(173, 174);
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(164, 32);
            this->textBox25->TabIndex = 89;
            // 
            // textBox26
            // 
            this->textBox26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox26->Location = System::Drawing::Point(3, 288);
            this->textBox26->Name = L"textBox26";
            this->textBox26->Size = System::Drawing::Size(164, 32);
            this->textBox26->TabIndex = 88;
            // 
            // textBox27
            // 
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox27->Location = System::Drawing::Point(3, 250);
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(164, 32);
            this->textBox27->TabIndex = 87;
            // 
            // textBox28
            // 
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox28->Location = System::Drawing::Point(3, 174);
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(164, 32);
            this->textBox28->TabIndex = 86;
            // 
            // textBox29
            // 
            this->textBox29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox29->Location = System::Drawing::Point(3, 136);
            this->textBox29->Name = L"textBox29";
            this->textBox29->Size = System::Drawing::Size(164, 32);
            this->textBox29->TabIndex = 101;
            // 
            // textBox30
            // 
            this->textBox30->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox30->Location = System::Drawing::Point(173, 136);
            this->textBox30->Name = L"textBox30";
            this->textBox30->Size = System::Drawing::Size(164, 32);
            this->textBox30->TabIndex = 100;
            // 
            // textBox31
            // 
            this->textBox31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox31->Location = System::Drawing::Point(1023, 136);
            this->textBox31->Name = L"textBox31";
            this->textBox31->Size = System::Drawing::Size(164, 32);
            this->textBox31->TabIndex = 106;
            // 
            // textBox32
            // 
            this->textBox32->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox32->Location = System::Drawing::Point(853, 136);
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(164, 32);
            this->textBox32->TabIndex = 105;
            // 
            // textBox33
            // 
            this->textBox33->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox33->Location = System::Drawing::Point(683, 136);
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(164, 32);
            this->textBox33->TabIndex = 104;
            // 
            // textBox34
            // 
            this->textBox34->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox34->Location = System::Drawing::Point(513, 136);
            this->textBox34->Name = L"textBox34";
            this->textBox34->Size = System::Drawing::Size(164, 32);
            this->textBox34->TabIndex = 103;
            // 
            // textBox35
            // 
            this->textBox35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox35->Location = System::Drawing::Point(343, 136);
            this->textBox35->Name = L"textBox35";
            this->textBox35->Size = System::Drawing::Size(164, 32);
            this->textBox35->TabIndex = 102;
            // 
            // textBox36
            // 
            this->textBox36->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox36->Location = System::Drawing::Point(853, 174);
            this->textBox36->Name = L"textBox36";
            this->textBox36->Size = System::Drawing::Size(164, 32);
            this->textBox36->TabIndex = 108;
            // 
            // textBox37
            // 
            this->textBox37->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox37->Location = System::Drawing::Point(1023, 174);
            this->textBox37->Name = L"textBox37";
            this->textBox37->Size = System::Drawing::Size(164, 32);
            this->textBox37->TabIndex = 107;
            // 
            // textBox38
            // 
            this->textBox38->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox38->Location = System::Drawing::Point(853, 212);
            this->textBox38->Name = L"textBox38";
            this->textBox38->Size = System::Drawing::Size(164, 32);
            this->textBox38->TabIndex = 112;
            // 
            // textBox39
            // 
            this->textBox39->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox39->Location = System::Drawing::Point(1023, 212);
            this->textBox39->Name = L"textBox39";
            this->textBox39->Size = System::Drawing::Size(164, 32);
            this->textBox39->TabIndex = 111;
            // 
            // textBox40
            // 
            this->textBox40->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox40->Location = System::Drawing::Point(513, 212);
            this->textBox40->Name = L"textBox40";
            this->textBox40->Size = System::Drawing::Size(164, 32);
            this->textBox40->TabIndex = 110;
            // 
            // textBox41
            // 
            this->textBox41->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox41->Location = System::Drawing::Point(683, 212);
            this->textBox41->Name = L"textBox41";
            this->textBox41->Size = System::Drawing::Size(164, 32);
            this->textBox41->TabIndex = 109;
            // 
            // textBox42
            // 
            this->textBox42->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox42->Location = System::Drawing::Point(513, 250);
            this->textBox42->Name = L"textBox42";
            this->textBox42->Size = System::Drawing::Size(164, 32);
            this->textBox42->TabIndex = 116;
            // 
            // textBox43
            // 
            this->textBox43->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox43->Location = System::Drawing::Point(683, 250);
            this->textBox43->Name = L"textBox43";
            this->textBox43->Size = System::Drawing::Size(164, 32);
            this->textBox43->TabIndex = 115;
            // 
            // textBox44
            // 
            this->textBox44->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox44->Location = System::Drawing::Point(173, 250);
            this->textBox44->Name = L"textBox44";
            this->textBox44->Size = System::Drawing::Size(164, 32);
            this->textBox44->TabIndex = 114;
            // 
            // textBox45
            // 
            this->textBox45->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox45->Location = System::Drawing::Point(343, 250);
            this->textBox45->Name = L"textBox45";
            this->textBox45->Size = System::Drawing::Size(164, 32);
            this->textBox45->TabIndex = 113;
            // 
            // textBox46
            // 
            this->textBox46->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox46->Location = System::Drawing::Point(853, 250);
            this->textBox46->Name = L"textBox46";
            this->textBox46->Size = System::Drawing::Size(164, 32);
            this->textBox46->TabIndex = 118;
            // 
            // textBox47
            // 
            this->textBox47->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox47->Location = System::Drawing::Point(1023, 250);
            this->textBox47->Name = L"textBox47";
            this->textBox47->Size = System::Drawing::Size(164, 32);
            this->textBox47->TabIndex = 117;
            // 
            // textBox48
            // 
            this->textBox48->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox48->Location = System::Drawing::Point(3, 98);
            this->textBox48->Name = L"textBox48";
            this->textBox48->Size = System::Drawing::Size(164, 32);
            this->textBox48->TabIndex = 119;
            // 
            // textBox49
            // 
            this->textBox49->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox49->Location = System::Drawing::Point(853, 288);
            this->textBox49->Name = L"textBox49";
            this->textBox49->Size = System::Drawing::Size(164, 32);
            this->textBox49->TabIndex = 125;
            // 
            // textBox50
            // 
            this->textBox50->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox50->Location = System::Drawing::Point(1023, 288);
            this->textBox50->Name = L"textBox50";
            this->textBox50->Size = System::Drawing::Size(164, 32);
            this->textBox50->TabIndex = 124;
            // 
            // textBox51
            // 
            this->textBox51->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox51->Location = System::Drawing::Point(513, 288);
            this->textBox51->Name = L"textBox51";
            this->textBox51->Size = System::Drawing::Size(164, 32);
            this->textBox51->TabIndex = 123;
            // 
            // textBox52
            // 
            this->textBox52->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox52->Location = System::Drawing::Point(683, 288);
            this->textBox52->Name = L"textBox52";
            this->textBox52->Size = System::Drawing::Size(164, 32);
            this->textBox52->TabIndex = 122;
            // 
            // textBox53
            // 
            this->textBox53->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox53->Location = System::Drawing::Point(173, 288);
            this->textBox53->Name = L"textBox53";
            this->textBox53->Size = System::Drawing::Size(164, 32);
            this->textBox53->TabIndex = 121;
            // 
            // textBox54
            // 
            this->textBox54->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox54->Location = System::Drawing::Point(343, 288);
            this->textBox54->Name = L"textBox54";
            this->textBox54->Size = System::Drawing::Size(164, 32);
            this->textBox54->TabIndex = 120;
            // 
            // textBox55
            // 
            this->textBox55->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox55->Location = System::Drawing::Point(853, 326);
            this->textBox55->Name = L"textBox55";
            this->textBox55->Size = System::Drawing::Size(164, 32);
            this->textBox55->TabIndex = 131;
            // 
            // textBox56
            // 
            this->textBox56->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox56->Location = System::Drawing::Point(1023, 326);
            this->textBox56->Name = L"textBox56";
            this->textBox56->Size = System::Drawing::Size(164, 32);
            this->textBox56->TabIndex = 130;
            // 
            // textBox57
            // 
            this->textBox57->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox57->Location = System::Drawing::Point(513, 326);
            this->textBox57->Name = L"textBox57";
            this->textBox57->Size = System::Drawing::Size(164, 32);
            this->textBox57->TabIndex = 129;
            // 
            // textBox58
            // 
            this->textBox58->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox58->Location = System::Drawing::Point(683, 326);
            this->textBox58->Name = L"textBox58";
            this->textBox58->Size = System::Drawing::Size(164, 32);
            this->textBox58->TabIndex = 128;
            // 
            // textBox59
            // 
            this->textBox59->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox59->Location = System::Drawing::Point(173, 326);
            this->textBox59->Name = L"textBox59";
            this->textBox59->Size = System::Drawing::Size(164, 32);
            this->textBox59->TabIndex = 127;
            // 
            // textBox60
            // 
            this->textBox60->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox60->Location = System::Drawing::Point(343, 326);
            this->textBox60->Name = L"textBox60";
            this->textBox60->Size = System::Drawing::Size(164, 32);
            this->textBox60->TabIndex = 126;
            // 
            // textBox61
            // 
            this->textBox61->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox61->Location = System::Drawing::Point(853, 364);
            this->textBox61->Name = L"textBox61";
            this->textBox61->Size = System::Drawing::Size(164, 32);
            this->textBox61->TabIndex = 137;
            // 
            // textBox62
            // 
            this->textBox62->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox62->Location = System::Drawing::Point(1023, 364);
            this->textBox62->Name = L"textBox62";
            this->textBox62->Size = System::Drawing::Size(164, 32);
            this->textBox62->TabIndex = 136;
            // 
            // textBox63
            // 
            this->textBox63->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox63->Location = System::Drawing::Point(513, 364);
            this->textBox63->Name = L"textBox63";
            this->textBox63->Size = System::Drawing::Size(164, 32);
            this->textBox63->TabIndex = 135;
            // 
            // textBox64
            // 
            this->textBox64->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox64->Location = System::Drawing::Point(683, 364);
            this->textBox64->Name = L"textBox64";
            this->textBox64->Size = System::Drawing::Size(164, 32);
            this->textBox64->TabIndex = 134;
            // 
            // textBox65
            // 
            this->textBox65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox65->Location = System::Drawing::Point(173, 364);
            this->textBox65->Name = L"textBox65";
            this->textBox65->Size = System::Drawing::Size(164, 32);
            this->textBox65->TabIndex = 133;
            // 
            // textBox66
            // 
            this->textBox66->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox66->Location = System::Drawing::Point(343, 364);
            this->textBox66->Name = L"textBox66";
            this->textBox66->Size = System::Drawing::Size(164, 32);
            this->textBox66->TabIndex = 132;
            // 
            // textBox67
            // 
            this->textBox67->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox67->Location = System::Drawing::Point(853, 402);
            this->textBox67->Name = L"textBox67";
            this->textBox67->Size = System::Drawing::Size(164, 32);
            this->textBox67->TabIndex = 143;
            // 
            // textBox68
            // 
            this->textBox68->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox68->Location = System::Drawing::Point(1023, 402);
            this->textBox68->Name = L"textBox68";
            this->textBox68->Size = System::Drawing::Size(164, 32);
            this->textBox68->TabIndex = 142;
            // 
            // textBox69
            // 
            this->textBox69->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox69->Location = System::Drawing::Point(513, 402);
            this->textBox69->Name = L"textBox69";
            this->textBox69->Size = System::Drawing::Size(164, 32);
            this->textBox69->TabIndex = 141;
            // 
            // textBox70
            // 
            this->textBox70->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox70->Location = System::Drawing::Point(683, 402);
            this->textBox70->Name = L"textBox70";
            this->textBox70->Size = System::Drawing::Size(164, 32);
            this->textBox70->TabIndex = 140;
            // 
            // textBox71
            // 
            this->textBox71->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox71->Location = System::Drawing::Point(173, 402);
            this->textBox71->Name = L"textBox71";
            this->textBox71->Size = System::Drawing::Size(164, 32);
            this->textBox71->TabIndex = 139;
            // 
            // textBox72
            // 
            this->textBox72->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox72->Location = System::Drawing::Point(343, 402);
            this->textBox72->Name = L"textBox72";
            this->textBox72->Size = System::Drawing::Size(164, 32);
            this->textBox72->TabIndex = 138;
            // 
            // textBox73
            // 
            this->textBox73->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox73->Location = System::Drawing::Point(853, 440);
            this->textBox73->Name = L"textBox73";
            this->textBox73->Size = System::Drawing::Size(164, 32);
            this->textBox73->TabIndex = 149;
            // 
            // textBox74
            // 
            this->textBox74->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox74->Location = System::Drawing::Point(1023, 440);
            this->textBox74->Name = L"textBox74";
            this->textBox74->Size = System::Drawing::Size(164, 32);
            this->textBox74->TabIndex = 148;
            // 
            // textBox75
            // 
            this->textBox75->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox75->Location = System::Drawing::Point(513, 440);
            this->textBox75->Name = L"textBox75";
            this->textBox75->Size = System::Drawing::Size(164, 32);
            this->textBox75->TabIndex = 147;
            // 
            // textBox76
            // 
            this->textBox76->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox76->Location = System::Drawing::Point(683, 440);
            this->textBox76->Name = L"textBox76";
            this->textBox76->Size = System::Drawing::Size(164, 32);
            this->textBox76->TabIndex = 146;
            // 
            // textBox77
            // 
            this->textBox77->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox77->Location = System::Drawing::Point(173, 440);
            this->textBox77->Name = L"textBox77";
            this->textBox77->Size = System::Drawing::Size(164, 32);
            this->textBox77->TabIndex = 145;
            // 
            // textBox78
            // 
            this->textBox78->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox78->Location = System::Drawing::Point(343, 440);
            this->textBox78->Name = L"textBox78";
            this->textBox78->Size = System::Drawing::Size(164, 32);
            this->textBox78->TabIndex = 144;
            // 
            // textBox79
            // 
            this->textBox79->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox79->Location = System::Drawing::Point(853, 478);
            this->textBox79->Name = L"textBox79";
            this->textBox79->Size = System::Drawing::Size(164, 32);
            this->textBox79->TabIndex = 155;
            // 
            // textBox80
            // 
            this->textBox80->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox80->Location = System::Drawing::Point(1023, 478);
            this->textBox80->Name = L"textBox80";
            this->textBox80->Size = System::Drawing::Size(164, 32);
            this->textBox80->TabIndex = 154;
            // 
            // textBox81
            // 
            this->textBox81->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox81->Location = System::Drawing::Point(513, 478);
            this->textBox81->Name = L"textBox81";
            this->textBox81->Size = System::Drawing::Size(164, 32);
            this->textBox81->TabIndex = 153;
            // 
            // textBox82
            // 
            this->textBox82->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox82->Location = System::Drawing::Point(683, 478);
            this->textBox82->Name = L"textBox82";
            this->textBox82->Size = System::Drawing::Size(164, 32);
            this->textBox82->TabIndex = 152;
            // 
            // textBox83
            // 
            this->textBox83->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox83->Location = System::Drawing::Point(173, 478);
            this->textBox83->Name = L"textBox83";
            this->textBox83->Size = System::Drawing::Size(164, 32);
            this->textBox83->TabIndex = 151;
            // 
            // textBox84
            // 
            this->textBox84->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox84->Location = System::Drawing::Point(343, 478);
            this->textBox84->Name = L"textBox84";
            this->textBox84->Size = System::Drawing::Size(164, 32);
            this->textBox84->TabIndex = 150;
            // 
            // textBox85
            // 
            this->textBox85->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox85->Location = System::Drawing::Point(1193, 60);
            this->textBox85->Name = L"textBox85";
            this->textBox85->Size = System::Drawing::Size(164, 32);
            this->textBox85->TabIndex = 156;
            this->textBox85->Visible = false;
            // 
            // shed
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(324, 555);
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
