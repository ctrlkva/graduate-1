#pragma once
#include <Windows.h>
#include <vector>
#include <string>
using std::string;
using namespace System::Data::OleDb;
//комментарий
namespace kursme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;








	private: System::Windows::Forms::Button^ buttonlogin;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ buttonreglogin;



	private: System::Windows::Forms::TextBox^ textBoxregpass;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxreglogin;



	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Button^ buttonregback;





















	private: System::Windows::Forms::Panel^ panelmenut;
	private: System::Windows::Forms::Button^ buttonTchats;
	private: System::Windows::Forms::Button^ buttonTprofile;
	private: System::Windows::Forms::Button^ buttonTshed;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonTreview;
	private: System::Windows::Forms::Panel^ panelmenur;

	private: System::Windows::Forms::Button^ buttonRchats;

	private: System::Windows::Forms::Button^ buttonRprofile;
	private: System::Windows::Forms::Button^ buttonRshed;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ buttonRreview;
	private: System::Windows::Forms::Panel^ panelmenus;
	private: System::Windows::Forms::Button^ buttonSchats;
	private: System::Windows::Forms::Button^ buttonSprofile;
	private: System::Windows::Forms::Button^ buttonSshed;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panelreg;
	private: System::Windows::Forms::Panel^ panellogin;
	private: System::Windows::Forms::Button^ buttonmenutback;
	private: System::Windows::Forms::Button^ buttonmenusback;
	private: System::Windows::Forms::Button^ buttonmenurback;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panelproft;
private: System::Windows::Forms::Button^ buttonproftsave;
private: System::Windows::Forms::Button^ buttonproftback;





	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panelprofr;
private: System::Windows::Forms::Button^ buttonprofrsave;
private: System::Windows::Forms::Button^ buttonprofrback;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Panel^ panelprofs;
private: System::Windows::Forms::Button^ buttonprofssave;
private: System::Windows::Forms::Button^ buttonprofsback;






private: System::Windows::Forms::Panel^ panelrevt;
private: System::Windows::Forms::Button^ buttonrevtback;

private: System::Windows::Forms::Label^ labelprofthours;



























private: System::Windows::Forms::Label^ label25;






private: System::Windows::Forms::Label^ label31;

private: System::Windows::Forms::Label^ label32;





















private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;


private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBoxlogin;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ textBoxpass;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBoxprofrname2;









private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBoxprofrname;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBoxprofrphone;

private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ labelprofrmoney;







private: System::Windows::Forms::ComboBox^ comboBoxregwho;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBoxproftvk;

private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBoxproftphone;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBoxproftdiscord;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBoxproftname2;


private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBoxproftname;



private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::ComboBox^ comboBoxproftoff;
private: System::Windows::Forms::CheckBox^ checkBoxprofton;


private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBoxprofsdiscord;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ textBoxprofsname2;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ textBoxprofsname;

private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ textBoxproftname3;

private: System::Windows::Forms::Label^ label46;

private: System::Windows::Forms::ComboBox^ comboBoxstudents;

private: System::Windows::Forms::Label^ label16;


private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::ComboBox^ comboBoxsubjects;


private: System::Windows::Forms::Label^ label50;


private: System::Windows::Forms::Button^ buttonrevsave;




private: System::Windows::Forms::Panel^ panelrevsave;
private: System::Windows::Forms::Button^ buttonrevsavepanelback;

private: System::Windows::Forms::Button^ buttonfindrevpanel;



private: System::Windows::Forms::Button^ buttonrevsavepanel;

private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Panel^ panelrevfindt;


private: System::Windows::Forms::Button^ buttonrevfindpanelback;

private: System::Windows::Forms::Label^ label49;

private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::ComboBox^ comboBoxfindsubjectst;

private: System::Windows::Forms::ComboBox^ comboBoxfindstudentst;

private: System::Windows::Forms::Label^ label52;

private: System::Windows::Forms::Panel^ panelrevr;
private: System::Windows::Forms::Label^ label53;

private: System::Windows::Forms::Button^ buttonrevrback;






private: System::Windows::Forms::TextBox^ textBoxrevt;

private: System::Windows::Forms::ComboBox^ comboBoxfindnumbert;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBoxfindrevt;
private: System::Windows::Forms::ComboBox^ comboBoxfindnumberr;

private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::ComboBox^ comboBoxfindsubjectsr;

private: System::Windows::Forms::ComboBox^ comboBoxfindstudentsr;

private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ textBoxfindrevr;
private: System::Windows::Forms::Panel^ panelshed;



private: System::Windows::Forms::Button^ buttonshedback;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label72;

private: System::Windows::Forms::Label^ label74;


private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox64;
private: System::Windows::Forms::TextBox^ textBox65;
private: System::Windows::Forms::TextBox^ textBox66;
private: System::Windows::Forms::TextBox^ textBox67;
private: System::Windows::Forms::TextBox^ textBox68;
private: System::Windows::Forms::TextBox^ textBox69;
private: System::Windows::Forms::TextBox^ textBox70;
private: System::Windows::Forms::TextBox^ textBox71;
private: System::Windows::Forms::TextBox^ textBox72;
private: System::Windows::Forms::TextBox^ textBox73;
private: System::Windows::Forms::TextBox^ textBox74;
private: System::Windows::Forms::TextBox^ textBox75;
private: System::Windows::Forms::TextBox^ textBox76;
private: System::Windows::Forms::TextBox^ textBox77;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::TextBox^ textBox46;
private: System::Windows::Forms::TextBox^ textBox47;
private: System::Windows::Forms::TextBox^ textBox48;
private: System::Windows::Forms::TextBox^ textBox49;
private: System::Windows::Forms::TextBox^ textBox50;
private: System::Windows::Forms::TextBox^ textBox51;
private: System::Windows::Forms::TextBox^ textBox52;
private: System::Windows::Forms::TextBox^ textBox53;
private: System::Windows::Forms::TextBox^ textBox54;
private: System::Windows::Forms::TextBox^ textBox55;
private: System::Windows::Forms::TextBox^ textBox56;
private: System::Windows::Forms::TextBox^ textBox57;
private: System::Windows::Forms::TextBox^ textBox58;
private: System::Windows::Forms::TextBox^ textBox59;
private: System::Windows::Forms::TextBox^ textBox60;
private: System::Windows::Forms::TextBox^ textBox61;
private: System::Windows::Forms::TextBox^ textBox62;
private: System::Windows::Forms::TextBox^ textBox63;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::TextBox^ textBox78;
private: System::Windows::Forms::TextBox^ textBox79;
private: System::Windows::Forms::TextBox^ textBox80;
private: System::Windows::Forms::TextBox^ textBox81;
private: System::Windows::Forms::TextBox^ textBox82;
private: System::Windows::Forms::TextBox^ textBox83;
private: System::Windows::Forms::TextBox^ textBox84;
private: System::Windows::Forms::HelpProvider^ helpProvider1;
private: System::Windows::Forms::Button^ buttonThelp;
private: System::Windows::Forms::Button^ buttonRhelp;
private: System::Windows::Forms::Button^ buttonShelp;



























private: System::ComponentModel::IContainer^ components;





















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonlogin = (gcnew System::Windows::Forms::Button());
			this->buttonregback = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonreglogin = (gcnew System::Windows::Forms::Button());
			this->textBoxregpass = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxreglogin = (gcnew System::Windows::Forms::TextBox());
			this->panelmenut = (gcnew System::Windows::Forms::Panel());
			this->buttonThelp = (gcnew System::Windows::Forms::Button());
			this->buttonTchats = (gcnew System::Windows::Forms::Button());
			this->buttonmenutback = (gcnew System::Windows::Forms::Button());
			this->buttonTreview = (gcnew System::Windows::Forms::Button());
			this->buttonTprofile = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonTshed = (gcnew System::Windows::Forms::Button());
			this->panelmenur = (gcnew System::Windows::Forms::Panel());
			this->buttonRhelp = (gcnew System::Windows::Forms::Button());
			this->buttonRchats = (gcnew System::Windows::Forms::Button());
			this->buttonmenurback = (gcnew System::Windows::Forms::Button());
			this->buttonRreview = (gcnew System::Windows::Forms::Button());
			this->buttonRprofile = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonRshed = (gcnew System::Windows::Forms::Button());
			this->panelmenus = (gcnew System::Windows::Forms::Panel());
			this->buttonShelp = (gcnew System::Windows::Forms::Button());
			this->buttonSchats = (gcnew System::Windows::Forms::Button());
			this->buttonmenusback = (gcnew System::Windows::Forms::Button());
			this->buttonSprofile = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonSshed = (gcnew System::Windows::Forms::Button());
			this->panelreg = (gcnew System::Windows::Forms::Panel());
			this->comboBoxregwho = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panellogin = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBoxlogin = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxpass = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panelproft = (gcnew System::Windows::Forms::Panel());
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
			this->buttonproftsave = (gcnew System::Windows::Forms::Button());
			this->buttonproftback = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panelprofr = (gcnew System::Windows::Forms::Panel());
			this->labelprofrmoney = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBoxprofrphone = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxprofrname2 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBoxprofrname = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->buttonprofrsave = (gcnew System::Windows::Forms::Button());
			this->buttonprofrback = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panelprofs = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxprofsdiscord = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBoxprofsname2 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBoxprofsname = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->buttonprofssave = (gcnew System::Windows::Forms::Button());
			this->buttonprofsback = (gcnew System::Windows::Forms::Button());
			this->panelrevt = (gcnew System::Windows::Forms::Panel());
			this->buttonfindrevpanel = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->buttonrevsavepanel = (gcnew System::Windows::Forms::Button());
			this->buttonrevtback = (gcnew System::Windows::Forms::Button());
			this->buttonrevsave = (gcnew System::Windows::Forms::Button());
			this->comboBoxsubjects = (gcnew System::Windows::Forms::ComboBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->comboBoxstudents = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->panelrevsave = (gcnew System::Windows::Forms::Panel());
			this->buttonrevsavepanelback = (gcnew System::Windows::Forms::Button());
			this->textBoxrevt = (gcnew System::Windows::Forms::TextBox());
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
			this->panelrevr = (gcnew System::Windows::Forms::Panel());
			this->comboBoxfindnumberr = (gcnew System::Windows::Forms::ComboBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->comboBoxfindsubjectsr = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxfindstudentsr = (gcnew System::Windows::Forms::ComboBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBoxfindrevr = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->buttonrevrback = (gcnew System::Windows::Forms::Button());
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
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->panelmenut->SuspendLayout();
			this->panelmenur->SuspendLayout();
			this->panelmenus->SuspendLayout();
			this->panelreg->SuspendLayout();
			this->panellogin->SuspendLayout();
			this->panelproft->SuspendLayout();
			this->panelprofr->SuspendLayout();
			this->panelprofs->SuspendLayout();
			this->panelrevt->SuspendLayout();
			this->panelrevsave->SuspendLayout();
			this->panelrevfindt->SuspendLayout();
			this->panelrevr->SuspendLayout();
			this->panelshed->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::labelregister_Click);
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
			this->buttonlogin->Click += gcnew System::EventHandler(this, &MyForm::buttonlogin_Click);
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
			this->buttonregback->Click += gcnew System::EventHandler(this, &MyForm::buttonregback_Click);
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
			this->buttonreglogin->Click += gcnew System::EventHandler(this, &MyForm::buttonreglogin_Click);
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
			// panelmenut
			// 
			this->panelmenut->Controls->Add(this->buttonThelp);
			this->panelmenut->Controls->Add(this->buttonTchats);
			this->panelmenut->Controls->Add(this->buttonmenutback);
			this->panelmenut->Controls->Add(this->buttonTreview);
			this->panelmenut->Controls->Add(this->buttonTprofile);
			this->panelmenut->Controls->Add(this->label9);
			this->panelmenut->Controls->Add(this->buttonTshed);
			this->panelmenut->Location = System::Drawing::Point(940, 8);
			this->panelmenut->Name = L"panelmenut";
			this->panelmenut->Size = System::Drawing::Size(324, 442);
			this->panelmenut->TabIndex = 12;
			this->panelmenut->Visible = false;
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
			this->buttonThelp->Click += gcnew System::EventHandler(this, &MyForm::buttonThelp_Click);
			// 
			// buttonTchats
			// 
			this->buttonTchats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTchats->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTchats->Location = System::Drawing::Point(62, 375);
			this->buttonTchats->Name = L"buttonTchats";
			this->buttonTchats->Size = System::Drawing::Size(195, 43);
			this->buttonTchats->TabIndex = 9;
			this->buttonTchats->Text = L"Чаты";
			this->buttonTchats->UseVisualStyleBackColor = true;
			this->buttonTchats->Click += gcnew System::EventHandler(this, &MyForm::buttonTchats_Click);
			// 
			// buttonmenutback
			// 
			this->buttonmenutback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonmenutback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmenutback.BackgroundImage")));
			this->buttonmenutback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonmenutback->Location = System::Drawing::Point(280, 0);
			this->buttonmenutback->Name = L"buttonmenutback";
			this->buttonmenutback->Size = System::Drawing::Size(44, 40);
			this->buttonmenutback->TabIndex = 10;
			this->buttonmenutback->UseVisualStyleBackColor = false;
			this->buttonmenutback->Click += gcnew System::EventHandler(this, &MyForm::buttonmenutback_Click);
			// 
			// buttonTreview
			// 
			this->buttonTreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTreview->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonTreview, L"treview.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonTreview, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonTreview->Location = System::Drawing::Point(62, 317);
			this->buttonTreview->Name = L"buttonTreview";
			this->helpProvider1->SetShowHelp(this->buttonTreview, true);
			this->buttonTreview->Size = System::Drawing::Size(195, 42);
			this->buttonTreview->TabIndex = 8;
			this->buttonTreview->Text = L"Отзывы";
			this->buttonTreview->UseVisualStyleBackColor = true;
			this->buttonTreview->Click += gcnew System::EventHandler(this, &MyForm::buttonTreview_Click);
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
			this->buttonTprofile->Location = System::Drawing::Point(62, 202);
			this->buttonTprofile->Name = L"buttonTprofile";
			this->helpProvider1->SetShowHelp(this->buttonTprofile, true);
			this->buttonTprofile->Size = System::Drawing::Size(195, 43);
			this->buttonTprofile->TabIndex = 6;
			this->buttonTprofile->Text = L"Профиль";
			this->buttonTprofile->UseVisualStyleBackColor = true;
			this->buttonTprofile->Click += gcnew System::EventHandler(this, &MyForm::buttonTprofile_Click);
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
			// buttonTshed
			// 
			this->buttonTshed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonTshed->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonTshed, L"schedule.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonTshed, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonTshed->Location = System::Drawing::Point(62, 260);
			this->buttonTshed->Name = L"buttonTshed";
			this->helpProvider1->SetShowHelp(this->buttonTshed, true);
			this->buttonTshed->Size = System::Drawing::Size(195, 42);
			this->buttonTshed->TabIndex = 7;
			this->buttonTshed->Text = L"Расписание";
			this->buttonTshed->UseVisualStyleBackColor = true;
			this->buttonTshed->Click += gcnew System::EventHandler(this, &MyForm::buttonTshed_Click);
			// 
			// panelmenur
			// 
			this->panelmenur->Controls->Add(this->buttonRhelp);
			this->panelmenur->Controls->Add(this->buttonRchats);
			this->panelmenur->Controls->Add(this->buttonmenurback);
			this->panelmenur->Controls->Add(this->buttonRreview);
			this->panelmenur->Controls->Add(this->buttonRprofile);
			this->panelmenur->Controls->Add(this->label12);
			this->panelmenur->Controls->Add(this->buttonRshed);
			this->panelmenur->Location = System::Drawing::Point(1271, 8);
			this->panelmenur->Name = L"panelmenur";
			this->panelmenur->Size = System::Drawing::Size(324, 442);
			this->panelmenur->TabIndex = 13;
			this->panelmenur->Visible = false;
			// 
			// buttonRhelp
			// 
			this->buttonRhelp->BackColor = System::Drawing::SystemColors::Control;
			this->buttonRhelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRhelp.BackgroundImage")));
			this->buttonRhelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonRhelp->Location = System::Drawing::Point(0, 0);
			this->buttonRhelp->Name = L"buttonRhelp";
			this->buttonRhelp->Size = System::Drawing::Size(44, 40);
			this->buttonRhelp->TabIndex = 12;
			this->buttonRhelp->UseVisualStyleBackColor = false;
			this->buttonRhelp->Click += gcnew System::EventHandler(this, &MyForm::buttonRhelp_Click);
			// 
			// buttonRchats
			// 
			this->buttonRchats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonRchats->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRchats->Location = System::Drawing::Point(68, 375);
			this->buttonRchats->Name = L"buttonRchats";
			this->buttonRchats->Size = System::Drawing::Size(191, 43);
			this->buttonRchats->TabIndex = 9;
			this->buttonRchats->Text = L"Чаты";
			this->buttonRchats->UseVisualStyleBackColor = true;
			this->buttonRchats->Click += gcnew System::EventHandler(this, &MyForm::buttonRchats_Click);
			// 
			// buttonmenurback
			// 
			this->buttonmenurback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonmenurback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmenurback.BackgroundImage")));
			this->buttonmenurback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonmenurback->Location = System::Drawing::Point(280, 0);
			this->buttonmenurback->Name = L"buttonmenurback";
			this->buttonmenurback->Size = System::Drawing::Size(44, 40);
			this->buttonmenurback->TabIndex = 11;
			this->buttonmenurback->UseVisualStyleBackColor = false;
			this->buttonmenurback->Click += gcnew System::EventHandler(this, &MyForm::buttonmenurback_Click);
			// 
			// buttonRreview
			// 
			this->buttonRreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonRreview->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonRreview, L"rreview.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonRreview, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonRreview->Location = System::Drawing::Point(68, 317);
			this->buttonRreview->Name = L"buttonRreview";
			this->helpProvider1->SetShowHelp(this->buttonRreview, true);
			this->buttonRreview->Size = System::Drawing::Size(191, 42);
			this->buttonRreview->TabIndex = 8;
			this->buttonRreview->Text = L"Отзывы";
			this->buttonRreview->UseVisualStyleBackColor = true;
			this->buttonRreview->Click += gcnew System::EventHandler(this, &MyForm::buttonRreview_Click);
			// 
			// buttonRprofile
			// 
			this->buttonRprofile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonRprofile->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonRprofile, L"profile.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonRprofile, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonRprofile->Location = System::Drawing::Point(68, 202);
			this->buttonRprofile->Name = L"buttonRprofile";
			this->helpProvider1->SetShowHelp(this->buttonRprofile, true);
			this->buttonRprofile->Size = System::Drawing::Size(191, 43);
			this->buttonRprofile->TabIndex = 6;
			this->buttonRprofile->Text = L"Профиль";
			this->buttonRprofile->UseVisualStyleBackColor = true;
			this->buttonRprofile->Click += gcnew System::EventHandler(this, &MyForm::buttonRprofile_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(65, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(194, 54);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Меню";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonRshed
			// 
			this->buttonRshed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonRshed->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonRshed, L"schedule.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonRshed, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonRshed->Location = System::Drawing::Point(68, 260);
			this->buttonRshed->Name = L"buttonRshed";
			this->helpProvider1->SetShowHelp(this->buttonRshed, true);
			this->buttonRshed->Size = System::Drawing::Size(191, 42);
			this->buttonRshed->TabIndex = 7;
			this->buttonRshed->Text = L"Расписание";
			this->buttonRshed->UseVisualStyleBackColor = true;
			this->buttonRshed->Click += gcnew System::EventHandler(this, &MyForm::buttonRshed_Click);
			// 
			// panelmenus
			// 
			this->panelmenus->Controls->Add(this->buttonShelp);
			this->panelmenus->Controls->Add(this->buttonSchats);
			this->panelmenus->Controls->Add(this->buttonmenusback);
			this->panelmenus->Controls->Add(this->buttonSprofile);
			this->panelmenus->Controls->Add(this->label10);
			this->panelmenus->Controls->Add(this->buttonSshed);
			this->panelmenus->Location = System::Drawing::Point(1601, 7);
			this->panelmenus->Name = L"panelmenus";
			this->panelmenus->Size = System::Drawing::Size(324, 443);
			this->panelmenus->TabIndex = 14;
			// 
			// buttonShelp
			// 
			this->buttonShelp->BackColor = System::Drawing::SystemColors::Control;
			this->buttonShelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonShelp.BackgroundImage")));
			this->buttonShelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonShelp->Location = System::Drawing::Point(0, 0);
			this->buttonShelp->Name = L"buttonShelp";
			this->buttonShelp->Size = System::Drawing::Size(44, 40);
			this->buttonShelp->TabIndex = 12;
			this->buttonShelp->UseVisualStyleBackColor = false;
			this->buttonShelp->Click += gcnew System::EventHandler(this, &MyForm::buttonShelp_Click);
			// 
			// buttonSchats
			// 
			this->buttonSchats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSchats->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSchats->Location = System::Drawing::Point(67, 342);
			this->buttonSchats->Name = L"buttonSchats";
			this->buttonSchats->Size = System::Drawing::Size(191, 43);
			this->buttonSchats->TabIndex = 9;
			this->buttonSchats->Text = L"Чаты";
			this->buttonSchats->UseVisualStyleBackColor = true;
			this->buttonSchats->Click += gcnew System::EventHandler(this, &MyForm::buttonSchats_Click);
			// 
			// buttonmenusback
			// 
			this->buttonmenusback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonmenusback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmenusback.BackgroundImage")));
			this->buttonmenusback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonmenusback->Location = System::Drawing::Point(280, 0);
			this->buttonmenusback->Name = L"buttonmenusback";
			this->buttonmenusback->Size = System::Drawing::Size(44, 40);
			this->buttonmenusback->TabIndex = 11;
			this->buttonmenusback->UseVisualStyleBackColor = false;
			this->buttonmenusback->Click += gcnew System::EventHandler(this, &MyForm::buttonmenusback_Click);
			// 
			// buttonSprofile
			// 
			this->buttonSprofile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSprofile->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonSprofile, L"profile.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonSprofile, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonSprofile->Location = System::Drawing::Point(67, 228);
			this->buttonSprofile->Name = L"buttonSprofile";
			this->helpProvider1->SetShowHelp(this->buttonSprofile, true);
			this->buttonSprofile->Size = System::Drawing::Size(191, 43);
			this->buttonSprofile->TabIndex = 6;
			this->buttonSprofile->Text = L"Профиль";
			this->buttonSprofile->UseVisualStyleBackColor = true;
			this->buttonSprofile->Click += gcnew System::EventHandler(this, &MyForm::buttonSprofile_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(318, 54);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Меню";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonSshed
			// 
			this->buttonSshed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSshed->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpProvider1->SetHelpKeyword(this->buttonSshed, L"schedule.htm");
			this->helpProvider1->SetHelpNavigator(this->buttonSshed, System::Windows::Forms::HelpNavigator::Topic);
			this->buttonSshed->Location = System::Drawing::Point(67, 286);
			this->buttonSshed->Name = L"buttonSshed";
			this->helpProvider1->SetShowHelp(this->buttonSshed, true);
			this->buttonSshed->Size = System::Drawing::Size(191, 42);
			this->buttonSshed->TabIndex = 7;
			this->buttonSshed->Text = L"Расписание";
			this->buttonSshed->UseVisualStyleBackColor = true;
			this->buttonSshed->Click += gcnew System::EventHandler(this, &MyForm::buttonSshed_Click);
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
			this->helpProvider1->SetHelpNavigator(this->panelreg, System::Windows::Forms::HelpNavigator::Topic);
			this->panelreg->Location = System::Drawing::Point(672, 582);
			this->panelreg->Name = L"panelreg";
			this->helpProvider1->SetShowHelp(this->panelreg, true);
			this->panelreg->Size = System::Drawing::Size(324, 405);
			this->panelreg->TabIndex = 15;
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
			this->panellogin->Location = System::Drawing::Point(342, 577);
			this->panellogin->Name = L"panellogin";
			this->panellogin->Size = System::Drawing::Size(324, 409);
			this->panellogin->TabIndex = 16;
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
			// panelproft
			// 
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
			this->panelproft->Controls->Add(this->labelprofthours);
			this->panelproft->Controls->Add(this->label24);
			this->panelproft->Controls->Add(this->label21);
			this->panelproft->Controls->Add(this->buttonproftsave);
			this->panelproft->Controls->Add(this->buttonproftback);
			this->panelproft->Controls->Add(this->label7);
			this->panelproft->Location = System::Drawing::Point(1387, 568);
			this->panelproft->Name = L"panelproft";
			this->panelproft->Size = System::Drawing::Size(324, 555);
			this->panelproft->TabIndex = 17;
			this->panelproft->Visible = false;
			// 
			// textBoxproftvk
			// 
			this->textBoxproftvk->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxproftvk->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproftvk->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxproftvk->Location = System::Drawing::Point(140, 308);
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
			this->textBoxproftdiscord->Location = System::Drawing::Point(140, 271);
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
			this->textBoxproftphone->Location = System::Drawing::Point(140, 234);
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
			this->textBoxproftname3->Location = System::Drawing::Point(140, 197);
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
			this->label46->Location = System::Drawing::Point(88, 207);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(202, 30);
			this->label46->TabIndex = 47;
			this->label46->Text = L"___________________________";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(25, 263);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(109, 40);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Дискорд :";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(70, 291);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(64, 60);
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
			this->label36->Location = System::Drawing::Point(107, 318);
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
			this->label35->Location = System::Drawing::Point(86, 281);
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
			this->label11->Location = System::Drawing::Point(122, 245);
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
			this->textBoxproftname2->Location = System::Drawing::Point(140, 160);
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
			this->label3->Location = System::Drawing::Point(88, 170);
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
			this->checkBoxprofton->Location = System::Drawing::Point(128, 427);
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
			this->label24->Location = System::Drawing::Point(33, 409);
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
			// buttonproftsave
			// 
			this->buttonproftsave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonproftsave->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonproftsave->Location = System::Drawing::Point(62, 488);
			this->buttonproftsave->Name = L"buttonproftsave";
			this->buttonproftsave->Size = System::Drawing::Size(195, 43);
			this->buttonproftsave->TabIndex = 9;
			this->buttonproftsave->Text = L"Сохранить";
			this->buttonproftsave->UseVisualStyleBackColor = true;
			this->buttonproftsave->Click += gcnew System::EventHandler(this, &MyForm::buttonproftsave_Click);
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
			this->buttonproftback->Click += gcnew System::EventHandler(this, &MyForm::buttonproftback_Click);
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
			// panelprofr
			// 
			this->panelprofr->Controls->Add(this->labelprofrmoney);
			this->panelprofr->Controls->Add(this->label25);
			this->panelprofr->Controls->Add(this->textBoxprofrphone);
			this->panelprofr->Controls->Add(this->label42);
			this->panelprofr->Controls->Add(this->label31);
			this->panelprofr->Controls->Add(this->textBoxprofrname2);
			this->panelprofr->Controls->Add(this->label41);
			this->panelprofr->Controls->Add(this->label32);
			this->panelprofr->Controls->Add(this->textBoxprofrname);
			this->panelprofr->Controls->Add(this->label38);
			this->panelprofr->Controls->Add(this->buttonprofrsave);
			this->panelprofr->Controls->Add(this->buttonprofrback);
			this->panelprofr->Controls->Add(this->label8);
			this->panelprofr->Location = System::Drawing::Point(163, 611);
			this->panelprofr->Name = L"panelprofr";
			this->panelprofr->Size = System::Drawing::Size(324, 419);
			this->panelprofr->TabIndex = 18;
			this->panelprofr->Visible = false;
			// 
			// labelprofrmoney
			// 
			this->labelprofrmoney->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelprofrmoney->Location = System::Drawing::Point(38, 311);
			this->labelprofrmoney->Name = L"labelprofrmoney";
			this->labelprofrmoney->Size = System::Drawing::Size(241, 44);
			this->labelprofrmoney->TabIndex = 52;
			this->labelprofrmoney->Text = L"Баланс :   ";
			this->labelprofrmoney->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(26, 257);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(107, 42);
			this->label25->TabIndex = 45;
			this->label25->Text = L"Телефон :";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxprofrphone
			// 
			this->textBoxprofrphone->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxprofrphone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxprofrphone->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxprofrphone->Location = System::Drawing::Point(139, 264);
			this->textBoxprofrphone->Name = L"textBoxprofrphone";
			this->textBoxprofrphone->Size = System::Drawing::Size(140, 31);
			this->textBoxprofrphone->TabIndex = 50;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(46, 274);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(244, 30);
			this->label42->TabIndex = 51;
			this->label42->Text = L"_________________________________";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(21, 224);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(112, 37);
			this->label31->TabIndex = 38;
			this->label31->Text = L"Фамилия :";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxprofrname2
			// 
			this->textBoxprofrname2->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxprofrname2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxprofrname2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxprofrname2->Location = System::Drawing::Point(139, 228);
			this->textBoxprofrname2->Name = L"textBoxprofrname2";
			this->textBoxprofrname2->Size = System::Drawing::Size(140, 31);
			this->textBoxprofrname2->TabIndex = 48;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(46, 238);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(244, 30);
			this->label41->TabIndex = 49;
			this->label41->Text = L"_________________________________";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(60, 186);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(73, 38);
			this->label32->TabIndex = 36;
			this->label32->Text = L"Имя :";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxprofrname
			// 
			this->textBoxprofrname->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxprofrname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxprofrname->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxprofrname->Location = System::Drawing::Point(139, 191);
			this->textBoxprofrname->Name = L"textBoxprofrname";
			this->textBoxprofrname->Size = System::Drawing::Size(140, 31);
			this->textBoxprofrname->TabIndex = 46;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(46, 201);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(244, 30);
			this->label38->TabIndex = 47;
			this->label38->Text = L"_________________________________";
			// 
			// buttonprofrsave
			// 
			this->buttonprofrsave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonprofrsave->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonprofrsave->Location = System::Drawing::Point(64, 373);
			this->buttonprofrsave->Name = L"buttonprofrsave";
			this->buttonprofrsave->Size = System::Drawing::Size(195, 43);
			this->buttonprofrsave->TabIndex = 9;
			this->buttonprofrsave->Text = L"Сохранить";
			this->buttonprofrsave->UseVisualStyleBackColor = true;
			this->buttonprofrsave->Click += gcnew System::EventHandler(this, &MyForm::buttonprofrsave_Click);
			// 
			// buttonprofrback
			// 
			this->buttonprofrback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonprofrback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonprofrback.BackgroundImage")));
			this->buttonprofrback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonprofrback->Location = System::Drawing::Point(280, 0);
			this->buttonprofrback->Name = L"buttonprofrback";
			this->buttonprofrback->Size = System::Drawing::Size(44, 40);
			this->buttonprofrback->TabIndex = 10;
			this->buttonprofrback->UseVisualStyleBackColor = false;
			this->buttonprofrback->Click += gcnew System::EventHandler(this, &MyForm::buttonprofrback_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(318, 79);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Профиль";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelprofs
			// 
			this->panelprofs->Controls->Add(this->label14);
			this->panelprofs->Controls->Add(this->textBoxprofsdiscord);
			this->panelprofs->Controls->Add(this->label23);
			this->panelprofs->Controls->Add(this->label37);
			this->panelprofs->Controls->Add(this->textBoxprofsname2);
			this->panelprofs->Controls->Add(this->label39);
			this->panelprofs->Controls->Add(this->label40);
			this->panelprofs->Controls->Add(this->textBoxprofsname);
			this->panelprofs->Controls->Add(this->label43);
			this->panelprofs->Controls->Add(this->label44);
			this->panelprofs->Controls->Add(this->buttonprofssave);
			this->panelprofs->Controls->Add(this->buttonprofsback);
			this->panelprofs->Location = System::Drawing::Point(1667, 533);
			this->panelprofs->Name = L"panelprofs";
			this->panelprofs->Size = System::Drawing::Size(324, 418);
			this->panelprofs->TabIndex = 19;
			this->panelprofs->Visible = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(25, 284);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(109, 48);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Дискорд :";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxprofsdiscord
			// 
			this->textBoxprofsdiscord->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxprofsdiscord->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxprofsdiscord->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxprofsdiscord->Location = System::Drawing::Point(140, 291);
			this->textBoxprofsdiscord->Name = L"textBoxprofsdiscord";
			this->textBoxprofsdiscord->Size = System::Drawing::Size(140, 31);
			this->textBoxprofsdiscord->TabIndex = 49;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(122, 302);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(167, 30);
			this->label23->TabIndex = 50;
			this->label23->Text = L"______________________";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(21, 248);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(113, 44);
			this->label37->TabIndex = 43;
			this->label37->Text = L"Фамилия :";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxprofsname2
			// 
			this->textBoxprofsname2->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxprofsname2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxprofsname2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxprofsname2->Location = System::Drawing::Point(140, 255);
			this->textBoxprofsname2->Name = L"textBoxprofsname2";
			this->textBoxprofsname2->Size = System::Drawing::Size(140, 31);
			this->textBoxprofsname2->TabIndex = 47;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(88, 265);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(202, 30);
			this->label39->TabIndex = 48;
			this->label39->Text = L"___________________________";
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(61, 211);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(73, 42);
			this->label40->TabIndex = 42;
			this->label40->Text = L"Имя :";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxprofsname
			// 
			this->textBoxprofsname->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxprofsname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxprofsname->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxprofsname->Location = System::Drawing::Point(140, 218);
			this->textBoxprofsname->Name = L"textBoxprofsname";
			this->textBoxprofsname->Size = System::Drawing::Size(140, 31);
			this->textBoxprofsname->TabIndex = 45;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(47, 228);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(244, 30);
			this->label43->TabIndex = 46;
			this->label43->Text = L"_________________________________";
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(3, 138);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(318, 72);
			this->label44->TabIndex = 41;
			this->label44->Text = L"Профиль";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonprofssave
			// 
			this->buttonprofssave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonprofssave->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25743F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonprofssave->Location = System::Drawing::Point(63, 372);
			this->buttonprofssave->Name = L"buttonprofssave";
			this->buttonprofssave->Size = System::Drawing::Size(195, 43);
			this->buttonprofssave->TabIndex = 9;
			this->buttonprofssave->Text = L"Сохранить";
			this->buttonprofssave->UseVisualStyleBackColor = true;
			this->buttonprofssave->Click += gcnew System::EventHandler(this, &MyForm::buttonprofssave_Click);
			// 
			// buttonprofsback
			// 
			this->buttonprofsback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonprofsback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonprofsback.BackgroundImage")));
			this->buttonprofsback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonprofsback->Location = System::Drawing::Point(280, 0);
			this->buttonprofsback->Name = L"buttonprofsback";
			this->buttonprofsback->Size = System::Drawing::Size(44, 40);
			this->buttonprofsback->TabIndex = 10;
			this->buttonprofsback->UseVisualStyleBackColor = false;
			this->buttonprofsback->Click += gcnew System::EventHandler(this, &MyForm::buttonprofsback_Click);
			// 
			// panelrevt
			// 
			this->panelrevt->AutoScroll = true;
			this->panelrevt->Controls->Add(this->buttonfindrevpanel);
			this->panelrevt->Controls->Add(this->label47);
			this->panelrevt->Controls->Add(this->buttonrevsavepanel);
			this->panelrevt->Controls->Add(this->buttonrevtback);
			this->panelrevt->Location = System::Drawing::Point(278, 8);
			this->panelrevt->Name = L"panelrevt";
			this->panelrevt->Size = System::Drawing::Size(324, 349);
			this->panelrevt->TabIndex = 21;
			this->panelrevt->Visible = false;
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
			this->buttonfindrevpanel->Click += gcnew System::EventHandler(this, &MyForm::buttonfindrevpanel_Click);
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
			this->buttonrevsavepanel->Click += gcnew System::EventHandler(this, &MyForm::buttonrevsavepanel_Click);
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
			this->buttonrevtback->Click += gcnew System::EventHandler(this, &MyForm::buttonrevtback_Click);
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
			this->buttonrevsave->Click += gcnew System::EventHandler(this, &MyForm::buttonrevsave_Click);
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
			this->panelrevsave->Location = System::Drawing::Point(1057, 545);
			this->panelrevsave->Name = L"panelrevsave";
			this->panelrevsave->Size = System::Drawing::Size(324, 554);
			this->panelrevsave->TabIndex = 22;
			this->panelrevsave->Visible = false;
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
			this->buttonrevsavepanelback->Click += gcnew System::EventHandler(this, &MyForm::buttonrevsavepanelback_Click);
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
			this->panelrevfindt->Location = System::Drawing::Point(886, 558);
			this->panelrevfindt->Name = L"panelrevfindt";
			this->panelrevfindt->Size = System::Drawing::Size(324, 506);
			this->panelrevfindt->TabIndex = 23;
			this->panelrevfindt->Visible = false;
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
			this->comboBoxfindnumbert->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxfindnumbert_SelectedIndexChanged);
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
			this->buttonrevfindpanelback->Click += gcnew System::EventHandler(this, &MyForm::buttonrevfindpanelback_Click);
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
			this->comboBoxfindsubjectst->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxfindsubjectst_SelectedIndexChanged);
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
			this->comboBoxfindstudentst->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxfindstudentst_SelectedIndexChanged);
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
			// panelrevr
			// 
			this->panelrevr->Controls->Add(this->comboBoxfindnumberr);
			this->panelrevr->Controls->Add(this->label54);
			this->panelrevr->Controls->Add(this->label55);
			this->panelrevr->Controls->Add(this->comboBoxfindsubjectsr);
			this->panelrevr->Controls->Add(this->comboBoxfindstudentsr);
			this->panelrevr->Controls->Add(this->label56);
			this->panelrevr->Controls->Add(this->textBoxfindrevr);
			this->panelrevr->Controls->Add(this->label53);
			this->panelrevr->Controls->Add(this->buttonrevrback);
			this->panelrevr->Location = System::Drawing::Point(13, 15);
			this->panelrevr->Name = L"panelrevr";
			this->panelrevr->Size = System::Drawing::Size(324, 506);
			this->panelrevr->TabIndex = 24;
			this->panelrevr->Visible = false;
			// 
			// comboBoxfindnumberr
			// 
			this->comboBoxfindnumberr->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxfindnumberr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxfindnumberr->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxfindnumberr->FormattingEnabled = true;
			this->comboBoxfindnumberr->Location = System::Drawing::Point(150, 275);
			this->comboBoxfindnumberr->Name = L"comboBoxfindnumberr";
			this->comboBoxfindnumberr->Size = System::Drawing::Size(149, 32);
			this->comboBoxfindnumberr->TabIndex = 57;
			this->comboBoxfindnumberr->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxfindnumberr_SelectedIndexChanged);
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->Location = System::Drawing::Point(54, 269);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(90, 39);
			this->label54->TabIndex = 56;
			this->label54->Text = L"Номер :";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label55
			// 
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(30, 188);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(114, 39);
			this->label55->TabIndex = 52;
			this->label55->Text = L"Студент :";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBoxfindsubjectsr
			// 
			this->comboBoxfindsubjectsr->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxfindsubjectsr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxfindsubjectsr->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxfindsubjectsr->FormattingEnabled = true;
			this->comboBoxfindsubjectsr->Location = System::Drawing::Point(150, 235);
			this->comboBoxfindsubjectsr->Name = L"comboBoxfindsubjectsr";
			this->comboBoxfindsubjectsr->Size = System::Drawing::Size(149, 32);
			this->comboBoxfindsubjectsr->TabIndex = 55;
			this->comboBoxfindsubjectsr->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxfindsubjectsr_SelectedIndexChanged);
			// 
			// comboBoxfindstudentsr
			// 
			this->comboBoxfindstudentsr->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxfindstudentsr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxfindstudentsr->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxfindstudentsr->FormattingEnabled = true;
			this->comboBoxfindstudentsr->Location = System::Drawing::Point(150, 194);
			this->comboBoxfindstudentsr->Name = L"comboBoxfindstudentsr";
			this->comboBoxfindstudentsr->Size = System::Drawing::Size(149, 32);
			this->comboBoxfindstudentsr->TabIndex = 53;
			this->comboBoxfindstudentsr->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxfindstudentsr_SelectedIndexChanged);
			// 
			// label56
			// 
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->Location = System::Drawing::Point(30, 229);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(114, 39);
			this->label56->TabIndex = 54;
			this->label56->Text = L"Предмет :";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxfindrevr
			// 
			this->textBoxfindrevr->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxfindrevr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxfindrevr->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.841584F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxfindrevr->Location = System::Drawing::Point(36, 329);
			this->textBoxfindrevr->Multiline = true;
			this->textBoxfindrevr->Name = L"textBoxfindrevr";
			this->textBoxfindrevr->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxfindrevr->Size = System::Drawing::Size(264, 156);
			this->textBoxfindrevr->TabIndex = 58;
			// 
			// label53
			// 
			this->label53->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.9604F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(3, 114);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(314, 54);
			this->label53->TabIndex = 48;
			this->label53->Text = L"Отзывы";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonrevrback
			// 
			this->buttonrevrback->BackColor = System::Drawing::SystemColors::Control;
			this->buttonrevrback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonrevrback.BackgroundImage")));
			this->buttonrevrback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonrevrback->Location = System::Drawing::Point(280, 0);
			this->buttonrevrback->Name = L"buttonrevrback";
			this->buttonrevrback->Size = System::Drawing::Size(44, 40);
			this->buttonrevrback->TabIndex = 10;
			this->buttonrevrback->UseVisualStyleBackColor = false;
			this->buttonrevrback->Click += gcnew System::EventHandler(this, &MyForm::buttonrevrback_Click);
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
			this->panelshed->Location = System::Drawing::Point(608, 8);
			this->panelshed->Name = L"panelshed";
			this->panelshed->Size = System::Drawing::Size(326, 555);
			this->panelshed->TabIndex = 25;
			this->panelshed->Visible = false;
			// 
			// label76
			// 
			this->label76->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label76->Location = System::Drawing::Point(3, 476);
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
			this->label64->Location = System::Drawing::Point(3, 438);
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
			this->label65->Location = System::Drawing::Point(3, 400);
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
			this->label66->Location = System::Drawing::Point(3, 362);
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
			this->label73->Location = System::Drawing::Point(3, 324);
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
			this->label62->Location = System::Drawing::Point(3, 286);
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
			this->label63->Size = System::Drawing::Size(89, 35);
			this->label63->TabIndex = 70;
			this->label63->Text = L"14:00";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label61
			// 
			this->label61->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.11881F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->Location = System::Drawing::Point(3, 208);
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
			this->label60->Location = System::Drawing::Point(3, 171);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(89, 33);
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
			this->label58->Location = System::Drawing::Point(3, 98);
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
			this->label75->Location = System::Drawing::Point(3, 60);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(89, 32);
			this->label75->TabIndex = 65;
			this->label75->Text = L"9:00";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->textBox78);
			this->panel1->Controls->Add(this->textBox79);
			this->panel1->Controls->Add(this->textBox80);
			this->panel1->Controls->Add(this->textBox81);
			this->panel1->Controls->Add(this->textBox82);
			this->panel1->Controls->Add(this->textBox83);
			this->panel1->Controls->Add(this->textBox84);
			this->panel1->Controls->Add(this->textBox64);
			this->panel1->Controls->Add(this->textBox65);
			this->panel1->Controls->Add(this->textBox66);
			this->panel1->Controls->Add(this->textBox67);
			this->panel1->Controls->Add(this->textBox68);
			this->panel1->Controls->Add(this->textBox69);
			this->panel1->Controls->Add(this->textBox70);
			this->panel1->Controls->Add(this->textBox71);
			this->panel1->Controls->Add(this->textBox72);
			this->panel1->Controls->Add(this->textBox73);
			this->panel1->Controls->Add(this->textBox74);
			this->panel1->Controls->Add(this->textBox75);
			this->panel1->Controls->Add(this->textBox76);
			this->panel1->Controls->Add(this->textBox77);
			this->panel1->Controls->Add(this->textBox43);
			this->panel1->Controls->Add(this->textBox44);
			this->panel1->Controls->Add(this->textBox45);
			this->panel1->Controls->Add(this->textBox46);
			this->panel1->Controls->Add(this->textBox47);
			this->panel1->Controls->Add(this->textBox48);
			this->panel1->Controls->Add(this->textBox49);
			this->panel1->Controls->Add(this->textBox50);
			this->panel1->Controls->Add(this->textBox51);
			this->panel1->Controls->Add(this->textBox52);
			this->panel1->Controls->Add(this->textBox53);
			this->panel1->Controls->Add(this->textBox54);
			this->panel1->Controls->Add(this->textBox55);
			this->panel1->Controls->Add(this->textBox56);
			this->panel1->Controls->Add(this->textBox57);
			this->panel1->Controls->Add(this->textBox58);
			this->panel1->Controls->Add(this->textBox59);
			this->panel1->Controls->Add(this->textBox60);
			this->panel1->Controls->Add(this->textBox61);
			this->panel1->Controls->Add(this->textBox62);
			this->panel1->Controls->Add(this->textBox63);
			this->panel1->Controls->Add(this->textBox22);
			this->panel1->Controls->Add(this->textBox23);
			this->panel1->Controls->Add(this->textBox24);
			this->panel1->Controls->Add(this->textBox25);
			this->panel1->Controls->Add(this->textBox26);
			this->panel1->Controls->Add(this->textBox27);
			this->panel1->Controls->Add(this->textBox28);
			this->panel1->Controls->Add(this->textBox29);
			this->panel1->Controls->Add(this->textBox30);
			this->panel1->Controls->Add(this->textBox31);
			this->panel1->Controls->Add(this->textBox32);
			this->panel1->Controls->Add(this->textBox33);
			this->panel1->Controls->Add(this->textBox34);
			this->panel1->Controls->Add(this->textBox35);
			this->panel1->Controls->Add(this->textBox36);
			this->panel1->Controls->Add(this->textBox37);
			this->panel1->Controls->Add(this->textBox38);
			this->panel1->Controls->Add(this->textBox39);
			this->panel1->Controls->Add(this->textBox40);
			this->panel1->Controls->Add(this->textBox41);
			this->panel1->Controls->Add(this->textBox42);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->textBox18);
			this->panel1->Controls->Add(this->textBox19);
			this->panel1->Controls->Add(this->textBox20);
			this->panel1->Controls->Add(this->textBox21);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox3);
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
			// textBox78
			// 
			this->textBox78->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox78->Location = System::Drawing::Point(1023, 473);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(164, 32);
			this->textBox78->TabIndex = 159;
			// 
			// textBox79
			// 
			this->textBox79->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox79->Location = System::Drawing::Point(853, 473);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(164, 32);
			this->textBox79->TabIndex = 158;
			// 
			// textBox80
			// 
			this->textBox80->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox80->Location = System::Drawing::Point(683, 473);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(164, 32);
			this->textBox80->TabIndex = 157;
			// 
			// textBox81
			// 
			this->textBox81->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox81->Location = System::Drawing::Point(513, 473);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(164, 32);
			this->textBox81->TabIndex = 156;
			// 
			// textBox82
			// 
			this->textBox82->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox82->Location = System::Drawing::Point(343, 473);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(164, 32);
			this->textBox82->TabIndex = 155;
			// 
			// textBox83
			// 
			this->textBox83->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox83->Location = System::Drawing::Point(173, 473);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(164, 32);
			this->textBox83->TabIndex = 154;
			// 
			// textBox84
			// 
			this->textBox84->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox84->Location = System::Drawing::Point(3, 473);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(164, 32);
			this->textBox84->TabIndex = 153;
			// 
			// textBox64
			// 
			this->textBox64->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox64->Location = System::Drawing::Point(1023, 435);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(164, 32);
			this->textBox64->TabIndex = 152;
			// 
			// textBox65
			// 
			this->textBox65->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox65->Location = System::Drawing::Point(853, 435);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(164, 32);
			this->textBox65->TabIndex = 151;
			// 
			// textBox66
			// 
			this->textBox66->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox66->Location = System::Drawing::Point(683, 435);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(164, 32);
			this->textBox66->TabIndex = 150;
			// 
			// textBox67
			// 
			this->textBox67->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox67->Location = System::Drawing::Point(513, 435);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(164, 32);
			this->textBox67->TabIndex = 149;
			// 
			// textBox68
			// 
			this->textBox68->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox68->Location = System::Drawing::Point(343, 435);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(164, 32);
			this->textBox68->TabIndex = 148;
			// 
			// textBox69
			// 
			this->textBox69->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox69->Location = System::Drawing::Point(173, 435);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(164, 32);
			this->textBox69->TabIndex = 147;
			// 
			// textBox70
			// 
			this->textBox70->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox70->Location = System::Drawing::Point(3, 435);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(164, 32);
			this->textBox70->TabIndex = 146;
			// 
			// textBox71
			// 
			this->textBox71->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox71->Location = System::Drawing::Point(1023, 397);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(164, 32);
			this->textBox71->TabIndex = 145;
			// 
			// textBox72
			// 
			this->textBox72->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox72->Location = System::Drawing::Point(853, 397);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(164, 32);
			this->textBox72->TabIndex = 144;
			// 
			// textBox73
			// 
			this->textBox73->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox73->Location = System::Drawing::Point(683, 397);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(164, 32);
			this->textBox73->TabIndex = 143;
			// 
			// textBox74
			// 
			this->textBox74->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox74->Location = System::Drawing::Point(513, 397);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(164, 32);
			this->textBox74->TabIndex = 142;
			// 
			// textBox75
			// 
			this->textBox75->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox75->Location = System::Drawing::Point(343, 397);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(164, 32);
			this->textBox75->TabIndex = 141;
			// 
			// textBox76
			// 
			this->textBox76->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox76->Location = System::Drawing::Point(173, 397);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(164, 32);
			this->textBox76->TabIndex = 140;
			// 
			// textBox77
			// 
			this->textBox77->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox77->Location = System::Drawing::Point(3, 397);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(164, 32);
			this->textBox77->TabIndex = 139;
			// 
			// textBox43
			// 
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox43->Location = System::Drawing::Point(1023, 359);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(164, 32);
			this->textBox43->TabIndex = 138;
			// 
			// textBox44
			// 
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox44->Location = System::Drawing::Point(853, 359);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(164, 32);
			this->textBox44->TabIndex = 137;
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox45->Location = System::Drawing::Point(683, 359);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(164, 32);
			this->textBox45->TabIndex = 136;
			// 
			// textBox46
			// 
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox46->Location = System::Drawing::Point(513, 359);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(164, 32);
			this->textBox46->TabIndex = 135;
			// 
			// textBox47
			// 
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox47->Location = System::Drawing::Point(343, 359);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(164, 32);
			this->textBox47->TabIndex = 134;
			// 
			// textBox48
			// 
			this->textBox48->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox48->Location = System::Drawing::Point(173, 359);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(164, 32);
			this->textBox48->TabIndex = 133;
			// 
			// textBox49
			// 
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox49->Location = System::Drawing::Point(3, 359);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(164, 32);
			this->textBox49->TabIndex = 132;
			// 
			// textBox50
			// 
			this->textBox50->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox50->Location = System::Drawing::Point(1023, 321);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(164, 32);
			this->textBox50->TabIndex = 131;
			// 
			// textBox51
			// 
			this->textBox51->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox51->Location = System::Drawing::Point(853, 321);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(164, 32);
			this->textBox51->TabIndex = 130;
			// 
			// textBox52
			// 
			this->textBox52->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox52->Location = System::Drawing::Point(683, 321);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(164, 32);
			this->textBox52->TabIndex = 129;
			// 
			// textBox53
			// 
			this->textBox53->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox53->Location = System::Drawing::Point(513, 321);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(164, 32);
			this->textBox53->TabIndex = 128;
			// 
			// textBox54
			// 
			this->textBox54->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox54->Location = System::Drawing::Point(343, 321);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(164, 32);
			this->textBox54->TabIndex = 127;
			// 
			// textBox55
			// 
			this->textBox55->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox55->Location = System::Drawing::Point(173, 321);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(164, 32);
			this->textBox55->TabIndex = 126;
			// 
			// textBox56
			// 
			this->textBox56->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox56->Location = System::Drawing::Point(3, 321);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(164, 32);
			this->textBox56->TabIndex = 125;
			// 
			// textBox57
			// 
			this->textBox57->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox57->Location = System::Drawing::Point(1023, 283);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(164, 32);
			this->textBox57->TabIndex = 124;
			// 
			// textBox58
			// 
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox58->Location = System::Drawing::Point(853, 283);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(164, 32);
			this->textBox58->TabIndex = 123;
			// 
			// textBox59
			// 
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox59->Location = System::Drawing::Point(683, 283);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(164, 32);
			this->textBox59->TabIndex = 122;
			// 
			// textBox60
			// 
			this->textBox60->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox60->Location = System::Drawing::Point(513, 283);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(164, 32);
			this->textBox60->TabIndex = 121;
			// 
			// textBox61
			// 
			this->textBox61->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox61->Location = System::Drawing::Point(343, 283);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(164, 32);
			this->textBox61->TabIndex = 120;
			// 
			// textBox62
			// 
			this->textBox62->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox62->Location = System::Drawing::Point(173, 283);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(164, 32);
			this->textBox62->TabIndex = 119;
			// 
			// textBox63
			// 
			this->textBox63->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox63->Location = System::Drawing::Point(3, 283);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(164, 32);
			this->textBox63->TabIndex = 118;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox22->Location = System::Drawing::Point(1023, 245);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(164, 32);
			this->textBox22->TabIndex = 117;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox23->Location = System::Drawing::Point(853, 245);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(164, 32);
			this->textBox23->TabIndex = 116;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox24->Location = System::Drawing::Point(683, 245);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(164, 32);
			this->textBox24->TabIndex = 115;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox25->Location = System::Drawing::Point(513, 245);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(164, 32);
			this->textBox25->TabIndex = 114;
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox26->Location = System::Drawing::Point(343, 245);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(164, 32);
			this->textBox26->TabIndex = 113;
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox27->Location = System::Drawing::Point(173, 245);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(164, 32);
			this->textBox27->TabIndex = 112;
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox28->Location = System::Drawing::Point(3, 245);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(164, 32);
			this->textBox28->TabIndex = 111;
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox29->Location = System::Drawing::Point(1023, 207);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(164, 32);
			this->textBox29->TabIndex = 110;
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox30->Location = System::Drawing::Point(853, 207);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(164, 32);
			this->textBox30->TabIndex = 109;
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox31->Location = System::Drawing::Point(683, 207);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(164, 32);
			this->textBox31->TabIndex = 108;
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox32->Location = System::Drawing::Point(513, 207);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(164, 32);
			this->textBox32->TabIndex = 107;
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox33->Location = System::Drawing::Point(343, 207);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(164, 32);
			this->textBox33->TabIndex = 106;
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox34->Location = System::Drawing::Point(173, 207);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(164, 32);
			this->textBox34->TabIndex = 105;
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox35->Location = System::Drawing::Point(3, 207);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(164, 32);
			this->textBox35->TabIndex = 104;
			// 
			// textBox36
			// 
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox36->Location = System::Drawing::Point(1023, 169);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(164, 32);
			this->textBox36->TabIndex = 103;
			// 
			// textBox37
			// 
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox37->Location = System::Drawing::Point(853, 169);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(164, 32);
			this->textBox37->TabIndex = 102;
			// 
			// textBox38
			// 
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox38->Location = System::Drawing::Point(683, 169);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(164, 32);
			this->textBox38->TabIndex = 101;
			// 
			// textBox39
			// 
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox39->Location = System::Drawing::Point(513, 169);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(164, 32);
			this->textBox39->TabIndex = 100;
			// 
			// textBox40
			// 
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox40->Location = System::Drawing::Point(343, 169);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(164, 32);
			this->textBox40->TabIndex = 99;
			// 
			// textBox41
			// 
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox41->Location = System::Drawing::Point(173, 169);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(164, 32);
			this->textBox41->TabIndex = 98;
			// 
			// textBox42
			// 
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox42->Location = System::Drawing::Point(3, 169);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(164, 32);
			this->textBox42->TabIndex = 97;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(1023, 133);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(164, 32);
			this->textBox15->TabIndex = 96;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(853, 133);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(164, 32);
			this->textBox16->TabIndex = 95;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(683, 133);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(164, 32);
			this->textBox17->TabIndex = 94;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(513, 133);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(164, 32);
			this->textBox18->TabIndex = 93;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox19->Location = System::Drawing::Point(343, 133);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(164, 32);
			this->textBox19->TabIndex = 92;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox20->Location = System::Drawing::Point(173, 133);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(164, 32);
			this->textBox20->TabIndex = 91;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox21->Location = System::Drawing::Point(3, 133);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(164, 32);
			this->textBox21->TabIndex = 90;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(1023, 95);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 32);
			this->textBox4->TabIndex = 89;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(853, 95);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 32);
			this->textBox5->TabIndex = 88;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(683, 95);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 32);
			this->textBox6->TabIndex = 87;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(513, 95);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(164, 32);
			this->textBox7->TabIndex = 86;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(343, 95);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(164, 32);
			this->textBox12->TabIndex = 85;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(173, 95);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(164, 32);
			this->textBox13->TabIndex = 84;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(3, 95);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(164, 32);
			this->textBox14->TabIndex = 83;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(1023, 57);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(164, 32);
			this->textBox10->TabIndex = 82;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(853, 57);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(164, 32);
			this->textBox11->TabIndex = 81;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(683, 57);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(164, 32);
			this->textBox8->TabIndex = 80;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(513, 57);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(164, 32);
			this->textBox9->TabIndex = 79;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.980198F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(343, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 32);
			this->textBox3->TabIndex = 74;
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
			this->buttonshedback->Click += gcnew System::EventHandler(this, &MyForm::buttonshedback_Click);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"C:\\Users\\strel\\Desktop\\Yes App\\справка.chm";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1060);
			this->Controls->Add(this->panelprofs);
			this->Controls->Add(this->panelprofr);
			this->Controls->Add(this->panelrevsave);
			this->Controls->Add(this->panelrevfindt);
			this->Controls->Add(this->panelshed);
			this->Controls->Add(this->panelreg);
			this->Controls->Add(this->panelmenus);
			this->Controls->Add(this->panelmenur);
			this->Controls->Add(this->panelmenut);
			this->Controls->Add(this->panellogin);
			this->Controls->Add(this->panelrevr);
			this->Controls->Add(this->panelrevt);
			this->Controls->Add(this->panelproft);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Yes app";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelmenut->ResumeLayout(false);
			this->panelmenur->ResumeLayout(false);
			this->panelmenus->ResumeLayout(false);
			this->panelreg->ResumeLayout(false);
			this->panelreg->PerformLayout();
			this->panellogin->ResumeLayout(false);
			this->panellogin->PerformLayout();
			this->panelproft->ResumeLayout(false);
			this->panelproft->PerformLayout();
			this->panelprofr->ResumeLayout(false);
			this->panelprofr->PerformLayout();
			this->panelprofs->ResumeLayout(false);
			this->panelprofs->PerformLayout();
			this->panelrevt->ResumeLayout(false);
			this->panelrevsave->ResumeLayout(false);
			this->panelrevsave->PerformLayout();
			this->panelrevfindt->ResumeLayout(false);
			this->panelrevfindt->PerformLayout();
			this->panelrevr->ResumeLayout(false);
			this->panelrevr->PerformLayout();
			this->panelshed->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\Users\\strel\\Desktop\\kursme\\bd.accdb";
		String^ connstr = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = bd.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connstr);

		OleDbDataReader^ dbreader;

		string SystemToStl(String^ s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return string(ptr);
		}

		int id; 
		String^ login;
		String^ pass;
		String^ name;
		String^ name2;
		String^ name3;
		String^ discord;
		//int phone;
		String^ phone;
		String^ vk;
		String^ offline;
		String^ online;
		int money;
		String^ who;
		int hours;
		int count;

	void counter(int count, OleDbConnection^ conn)
	{
		string ID = SystemToStl(id.ToString());
		count += 1;
		string co = SystemToStl(count.ToString());
		string sql3;
		sql3 += "UPDATE [пользователи] SET [входы] = '" + co + "' WHERE [Код] = " + ID + ";";
		String^ comstr3 = gcnew String(sql3.c_str());
		OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
		OleDbDataReader^ dbreader = com3->ExecuteReader();
		dbreader->Close();
	}

	private: System::Void buttonlogin_Click(System::Object^ sender, System::EventArgs^) {


			string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
			//string sql = "SELECT * FROM [пользователи] WHERE [логин] LIKE '";
			sql += SystemToStl(this->textBoxlogin->Text) + "'";
			String^ pass1 = this->textBoxpass->Text;

			String^ comstr = gcnew String(sql.c_str());
			OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			OleDbDataReader^ dbreader = com->ExecuteReader();
			if (dbreader->Read())
			{
				dbreader->Close();
				dbreader = com->ExecuteReader();
				while (dbreader->Read())
				{
					id = safe_cast<int>(dbreader->GetValue(0));
					count = safe_cast<int>(dbreader->GetValue(14));
					who = dbreader->GetString(12);
					counter(count, conn);

					//String^ login1 = dbreader->GetString(3);
					//MessageBox::Show(login1, "Ошибка", MessageBoxButtons::OK);

					//Object^ ss = dbreader->GetValue(0);
					//String^ sss = dynamic_cast<String^>(ss);

					//System::Data::DataSet^ ds = gcnew System::Data::DataSet();
					//OleDbDataAdapter^ adapt = gcnew OleDbDataAdapter();
					//adapt->SelectCommand = com;
					//adapt->Fill(ds, "ds");
					//Object^ ss = ds->Tables["ds"]->Rows["Код"];
					//String^ sss = dynamic_cast<String^>(ss);

					//Object^ ss = dbreader["логин"];
					//String^ sss = dynamic_cast<String^>(ss);
					// 
					//String^ sss = dynamic_cast<String^>(dbreader["Код"]);
					// 
					//String^ sss = dbreader[1];

					//this->textBox1->Text = sss;

				//this->textBox1->Text = dbreader[1];
				//this->textBox1->Text = gcnew String((dbreader[1]).c_str());
				//this->textBox1->Text = Convert::ToString(dbreader[1]);


				//String^ sss = dynamic_cast<String^>(dbreader[1]);
				//String^ sss = dbreader[1];
						if (pass1 == dbreader->GetString(2))
						{
							panellogin->Visible = false;
							panellogin->Location = Point(331, 411);

							//System::String^ s = (safe_cast<int>(dbreader->GetValue(11))).ToString();
							//System::String^ s = money.ToString();
							//MessageBox::Show(phone, "Ошибка", MessageBoxButtons::OK);

							if (SystemToStl(who) == "учитель")
							{
								panelmenut->Visible = true;
								panelmenut->Location = Point(0, 0);
							}
							else if (SystemToStl(who) == "ученик")
							{
								panelmenus->Visible = true;
								panelmenus->Location = Point(0, 0);
							}
							else if (SystemToStl(who) == "родитель")
							{
								panelmenur->Visible = true;
								panelmenur->Location = Point(0, 0);
							}
						}
						else
						{
							MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK);
						}
				}
				dbreader->Close();
				
			}
			else
			{
				///ошибка
				MessageBox::Show("Такого аккаунта не существует", "Ошибка", MessageBoxButtons::OK);
			}

			/* ЧИСТКА ПОЧЕМУ ТО НЕ РАБОТАЕТ
			this->comboBoxsubjects->Text = "";
			this->textBoxrevt->Text = "";
			this->comboBoxstudents->Text = "";

			this->textBoxlogin->Text = "";
			this->textBoxpass->Text = "";

			this->comboBoxfindsubjectst->Text = "";
			this->textBoxfindrevt->Text = "";
			this->comboBoxfindstudentst->Text = "";
			this->comboBoxfindnumbert->Text = "";

			this->comboBoxfindsubjectsr->Text = "";
			this->textBoxfindrevr->Text = "";
			this->comboBoxfindstudentsr->Text = "";
			this->comboBoxfindnumberr->Text = "";
			*/
			
	}
	private: System::Void labelregister_Click(System::Object^ sender, System::EventArgs^ e) {
		panellogin->Visible = false;
		panellogin->Location = Point(331, 411);
		panelreg->Visible = true;
		panelreg->Location = Point(0, 0);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->ClientSize = System::Drawing::Size(324, 555);
		this->Location = Point(400, 250);

		conn->Open();

		panellogin->Location = Point(0, 0);
		panellogin->Visible = true;
		panelreg->Visible = false;
		panelreg->Location = Point(331, 0);

		panelmenut->Visible = false;
		panelmenut->Location = Point(661, 0);
		panelproft->Visible = false;
		panelproft->Location = Point(661, 448);
		panelrevt->Visible = false;
		panelrevt->Location = Point(991, 873);

		panelmenus->Visible = false;
		panelmenus->Location = Point(1321, 0);
		panelprofs->Visible = false;
		panelprofs->Location = Point(1321, 449);

		panelmenur->Visible = false;
		panelmenur->Location = Point(991, 0);
		panelprofr->Visible = false;
		panelprofr->Location = Point(991, 448);
		panelrevr->Visible = false;
		panelrevr->Location = Point(1321, 873);
	}

	private: System::Void buttonreglogin_Click(System::Object^ sender, System::EventArgs^ e) {

		int err = 0;
		if (this->textBoxreglogin->Text != "")
		{
			if (this->textBoxregpass->Text != "")
			{
				if (this->comboBoxregwho->Text != "" && (this->comboBoxregwho->Text == "учитель" || this->comboBoxregwho->Text == "ученик" || this->comboBoxregwho->Text == "родитель"))
				{
						string sql2 = "SELECT `логин` FROM `пользователи` WHERE `логин` LIKE '";
						sql2 += SystemToStl(this->textBoxreglogin->Text) + "'";
						String^ comstr2 = gcnew String(sql2.c_str());
						OleDbCommand^ com2 = gcnew OleDbCommand(comstr2, conn);
						dbreader = com2->ExecuteReader();
						while (dbreader->Read())
						{
							if (dbreader->GetString(0) == this->textBoxreglogin->Text)
							{
								err = 1;
							}
						}
						dbreader->Close();
						if (err == 1)
						{
							///ошибка
							MessageBox::Show("Такой логин уже существует", "Ошибка", MessageBoxButtons::OK);
						}
						else
						{

							string sql3 = "INSERT INTO [пользователи] ([логин], [пароль], [кто]) VALUES ('";
							sql3 += SystemToStl(this->textBoxreglogin->Text) + "', '" + SystemToStl(this->textBoxregpass->Text) + "', '" + SystemToStl(this->comboBoxregwho->Text) + "');";

							//string sql3 = "INSERT INTO [пользователи] ([логин], [пароль], [кто], [входы]) VALUES ('";
							//sql3 += SystemToStl(this->textBoxreglogin->Text) + "', '" + SystemToStl(this->textBoxregpass->Text) + "', '" + SystemToStl(this->comboBoxregwho->Text) + "', 0);";
							
							String^ comstr3 = gcnew String(sql3.c_str());
							OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
							dbreader = com3->ExecuteReader();
							dbreader->Close();

							string sql1 = "SELECT `Код`, `кто` FROM `пользователи` WHERE `логин` LIKE '";
							sql1 += SystemToStl(this->textBoxreglogin->Text) + "'";
							String^ pass = this->textBoxregpass->Text;
							String^ comstr1 = gcnew String(sql1.c_str());
							OleDbCommand^ com1 = gcnew OleDbCommand(comstr1, conn);
							dbreader = com1->ExecuteReader();
							while (dbreader->Read())
							{
								panelreg->Visible = false;
								panelreg->Location = Point(331, 0);
								id = safe_cast<int>(dbreader->GetValue(0));
								who = this->comboBoxregwho->Text;
								if (SystemToStl(who) == "учитель")
								{
									panelmenut->Visible = true;
									panelmenut->Location = Point(0, 0);
								}
								else if (SystemToStl(who) == "ученик")
								{
									panelmenus->Visible = true;
									panelmenus->Location = Point(0, 0);
								}
								else if (SystemToStl(who) == "родитель")
								{
									panelmenur->Visible = true;
									panelmenur->Location = Point(0, 0);
								}
							}
							dbreader->Close();
						}
				}
				else
				{
					///ошибка
					MessageBox::Show("Выберите вариант из списка", "Ошибка", MessageBoxButtons::OK);
				}
			}
			else
			{
				///ошибка
				MessageBox::Show("Введите пароль", "Ошибка", MessageBoxButtons::OK);
			}
		}
		else
		{
			///ошибка
			MessageBox::Show("Введите логин", "Ошибка", MessageBoxButtons::OK);
		}
		/* ЧИСТКА ПОЧЕМУ ТО НЕ РАБОТАЕТ
		this->comboBoxsubjects->Text = "";
		this->textBoxrevt->Text = "";
		this->comboBoxstudents->Text = "";

		this->textBoxreglogin->Text = "";
		this->textBoxregpass->Text = "";
		this->comboBoxregwho->Text = "";

		this->comboBoxfindsubjectst->Text = "";
		this->textBoxfindrevt->Text = "";
		this->comboBoxfindstudentst->Text = "";
		this->comboBoxfindnumbert->Text = "";

		this->comboBoxfindsubjectsr->Text = "";
		this->textBoxfindrevr->Text = "";
		this->comboBoxfindstudentsr->Text = "";
		this->comboBoxfindnumberr->Text = "";
		*/
	}
private: System::Void buttonTchats_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonTprofile_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenut->Visible = false;
	panelmenut->Location = Point(1470, 70);
	panelproft->Visible = true;
	panelproft->Location = Point(0, 0);
	if (count > 0)
	{
		string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
		sql += SystemToStl(this->textBoxlogin->Text) + "'";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		OleDbDataReader^ dbreader = com->ExecuteReader();
		while (dbreader->Read())
		{
			id = safe_cast<int>(dbreader->GetValue(0));
			hours = safe_cast<int>(dbreader->GetValue(13));
			phone = dbreader->GetString(7);
			name = dbreader->GetString(3);
			name2 = dbreader->GetString(4);
			name3 = dbreader->GetString(5);
			discord = dbreader->GetString(6);
			vk = dbreader->GetString(8);
			offline = dbreader->GetString(9);
			online = dbreader->GetString(10);
		}
		dbreader->Close();
		labelprofthours->Text = "Часов в прошлом месяце :  " + hours;
		textBoxproftname->Text = name;
		textBoxproftname2->Text = name2;
		textBoxproftname3->Text = name3;
		textBoxproftphone->Text = phone;
		textBoxproftdiscord->Text = discord;
		textBoxproftvk->Text = vk;
		comboBoxproftoff->Text = offline;

		if (online == "Да")
		{
			this->checkBoxprofton->Checked = true;
		}
		else
		{
			this->checkBoxprofton->Checked = false;
		}
	}
	else
	{
		labelprofthours->Text = "Часов в прошлом месяце :   ";
		textBoxproftname->Text = "";
		textBoxproftname2->Text = "";
		textBoxproftname3->Text = "";
		textBoxproftphone->Text = "";
		textBoxproftdiscord->Text = "";
		textBoxproftvk->Text = "";
		comboBoxproftoff->Text = "";
		this->checkBoxprofton->Checked = false;
	}
	
}

private: System::Void buttonTshed_Click(System::Object^ sender, System::EventArgs^ e){
	panelmenut->Visible = false;
	panelmenut->Location = Point(1470, 70);
	panelshed->Visible = true;
	panelshed->Location = Point(0, 0);
}

private: System::Void buttonTreview_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenut->Visible = false;
	panelmenut->Location = Point(661, 0);
	panelrevt->Visible = true;
	panelrevt->Location = Point(0, 0);

	
}
private: System::Void buttonregback_Click(System::Object^ sender, System::EventArgs^ e) {
	panellogin->Location = Point(0, 0);
	panellogin->Visible = true;
	panelreg->Visible = false;
	panelreg->Location = Point(331, 0);
}
private: System::Void buttonSprofile_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenus->Visible = false;
	panelmenus->Location = Point(1321, 0);
	panelprofs->Visible = true;
	panelprofs->Location = Point(0, 0);

	if (count > 0)
	{
		string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
		sql += SystemToStl(this->textBoxlogin->Text) + "'";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		OleDbDataReader^ dbreader = com->ExecuteReader();
		while (dbreader->Read())
		{
			id = safe_cast<int>(dbreader->GetValue(0));
			name = dbreader->GetString(3);
			name2 = dbreader->GetString(4);
			discord = dbreader->GetString(6);
		}
		dbreader->Close();

		textBoxprofsdiscord->Text = discord;
		textBoxprofsname->Text = name;
		textBoxprofsname2->Text = name2;
	}
	else
	{
		textBoxprofsname->Text = "";
		textBoxprofsname2->Text = "";
		textBoxprofsdiscord->Text = "";
	}
}
private: System::Void buttonSshed_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenus->Visible = false;
	panelmenus->Location = Point(661, 0);
	panelshed->Visible = true;
	panelshed->Location = Point(0, 0);
	panelshed->Size = System::Drawing::Size(326, 555);
	panel1->Size = System::Drawing::Size(232, 534);
	panel1->Visible = true;
}
private: System::Void buttonSchats_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonRprofile_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (count > 0)
	{
		string sql = "SELECT * FROM `пользователи` WHERE `логин` LIKE '";
		sql += SystemToStl(this->textBoxlogin->Text) + "'";
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();
		while (dbreader->Read())
		{
			money = safe_cast<int>(dbreader->GetValue(11));
			id = safe_cast<int>(dbreader->GetValue(0));
			phone = dbreader->GetString(7);
			name = dbreader->GetString(3);
			name2 = dbreader->GetString(4);
		}
		dbreader->Close();


		//String^ mon = money.ToString();
		labelprofrmoney->Text = "Баланс :   " + money;
		textBoxprofrphone->Text = phone;
		textBoxprofrname->Text = name;
		textBoxprofrname2->Text = name2;
	}
	else
	{
		labelprofrmoney->Text = "Баланс :   0";
		textBoxprofrphone->Text = phone;
		textBoxprofrname->Text = name;
		textBoxprofrname2->Text = name2;
	}

	panelmenur->Visible = false;
	panelmenur->Location = Point(991, 0);
	panelprofr->Visible = true;
	panelprofr->Location = Point(0, 0);

	//string mon = SystemToStl(money.ToString());
	//labelprofrmoney->Text += gcnew System::String(mon.c_str());
	//string phon = SystemToStl(phone.ToString());
	//textBoxprofrphone->Text = gcnew System::String(phon.c_str());
	//textBoxprofrphone->Text = phone.ToString();
	//textBoxprofrphone->Text = phone;
	//labelprofrmoney->Text += money;
}
private: System::Void buttonRshed_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenur->Visible = false;
	panelmenur->Location = Point(661, 0);
	panelshed->Visible = true;
	panelshed->Location = Point(0, 0);
	panelshed->Size = System::Drawing::Size(326, 555);




	panel1->Size = System::Drawing::Size(232, 534);
	panel1->Visible = true;
}
private: System::Void buttonRreview_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenur->Visible = false;
	panelmenur->Location = Point(991, 0);
	panelrevr->Visible = true;
	panelrevr->Location = Point(0, 0);

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
		comboBoxfindstudentsr->Items->Insert(ii, student1);
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
		comboBoxfindsubjectsr->Items->Insert(i, subject);
		i++;
	}
	dbreader->Close();
}
private: System::Void buttonRchats_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonmenutback_Click(System::Object^ sender, System::EventArgs^ e) {
	panellogin->Location = Point(0, 0);
	panellogin->Visible = true;
	panelmenut->Visible = false;
	panelmenut->Location = Point(661, 0);
	/*
	this->comboBoxsubjects->Text = "";
	this->textBoxrevt->Text = "";
	this->comboBoxstudents->Text = "";

	this->textBoxreglogin->Text = "";
	this->textBoxregpass->Text = "";
	this->comboBoxregwho->Text = "";

	this->comboBoxfindsubjectst->Text = "";
	this->textBoxfindrevt->Text = "";
	this->comboBoxfindstudentst->Text = "";
	comboBoxfindstudentst->Items->Clear();
	this->comboBoxfindnumbert->Text = "";
	comboBoxfindnumbert->Items->Clear();

	this->comboBoxfindsubjectsr->Text = "";
	this->textBoxfindrevr->Text = "";
	this->comboBoxfindstudentsr->Text = "";
	comboBoxfindstudentsr->Items->Clear();
	this->comboBoxfindnumberr->Text = "";
	comboBoxfindnumberr->Items->Clear();
	*/

}
private: System::Void buttonmenurback_Click(System::Object^ sender, System::EventArgs^ e) {
	panellogin->Location = Point(0, 0);
	panellogin->Visible = true;
	panelmenur->Visible = false;
	panelmenur->Location = Point(991, 0);


}
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	conn->Close();
}
private: System::Void buttonproftback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenut->Visible = true;
	panelmenut->Location = Point(0, 0);
	panelproft->Location = Point(661, 448);
	panelproft->Visible = false;
	/*
	this->comboBoxsubjects->Text = "";
	this->textBoxrevt->Text = "";
	this->comboBoxstudents->Text = "";

	this->textBoxreglogin->Text = "";
	this->textBoxregpass->Text = "";
	this->comboBoxregwho->Text = "";

	this->comboBoxfindsubjectst->Text = "";
	this->textBoxfindrevt->Text = "";
	this->comboBoxfindstudentst->Text = "";
	comboBoxfindstudentst->Items->Clear();
	this->comboBoxfindnumbert->Text = "";
	comboBoxfindnumbert->Items->Clear();

	this->comboBoxfindsubjectsr->Text = "";
	this->textBoxfindrevr->Text = "";
	this->comboBoxfindstudentsr->Text = "";
	comboBoxfindstudentsr->Items->Clear();
	this->comboBoxfindnumberr->Text = "";
	comboBoxfindnumberr->Items->Clear();
	*/

	this->textBoxproftvk->Text = "";
	this->textBoxproftdiscord->Text = "";
	this->textBoxproftphone->Text = "";
	this->textBoxproftname3->Text = "";
	this->textBoxproftname2->Text = "";
	this->textBoxproftname->Text = "";
	this->comboBoxproftoff->Text = "";
	comboBoxproftoff->Items->Clear();
	this->checkBoxprofton->Checked = false;


}
private: System::Void buttonmenusback_Click(System::Object^ sender, System::EventArgs^ e) {
	panellogin->Location = Point(0, 0);
	panellogin->Visible = true;
	panelmenus->Visible = false;
	panelmenus->Location = Point(1321, 0);
	/*
	this->comboBoxsubjects->Text = "";
	this->textBoxrevt->Text = "";
	this->comboBoxstudents->Text = "";

	this->textBoxreglogin->Text = "";
	this->textBoxregpass->Text = "";
	this->comboBoxregwho->Text = "";

	this->comboBoxfindsubjectst->Text = "";
	this->textBoxfindrevt->Text = "";
	this->comboBoxfindstudentst->Text = "";
	comboBoxfindstudentst->Items->Clear();
	this->comboBoxfindnumbert->Text = "";
	comboBoxfindnumbert->Items->Clear();

	this->comboBoxfindsubjectsr->Text = "";
	this->textBoxfindrevr->Text = "";
	this->comboBoxfindstudentsr->Text = "";
	comboBoxfindstudentsr->Items->Clear();
	this->comboBoxfindnumberr->Text = "";
	comboBoxfindnumberr->Items->Clear();
	*/

}
private: System::Void buttonproftsave_Click(System::Object^ sender, System::EventArgs^ e) {

	counter(count, conn);
	
	string ID = SystemToStl(id.ToString());
	string nam = SystemToStl(this->textBoxproftname->Text);
	string nam2 = SystemToStl(this->textBoxproftname2->Text);
	string nam3 = SystemToStl(this->textBoxproftname3->Text);
	string phon = SystemToStl(this->textBoxproftphone->Text);
	string VK = SystemToStl(this->textBoxproftvk->Text);
	string disc = SystemToStl(this->textBoxproftdiscord->Text);
	string of = SystemToStl(this->comboBoxproftoff->Text);
	string on;
	if (this->checkBoxprofton->Checked == true)
	{
		on = "Да";
	}
	else
	{
		on = "Нет";
	}

		string sql3;
		sql3 += "UPDATE [пользователи] SET [имя] = '" + nam + "' , [фамилия] = '" + nam2 + "' , [отчество] = '" + nam3 +
			"' , [телефон] = '" + phon + "' , [дискорд] = '" + disc + "' , [вк] = '" + VK + "' , [онлайн] = '" + on + 
			"' , [оффлайн] = '" + of + "' WHERE [Код] = " + ID + ";";
		String^ comstr3 = gcnew String(sql3.c_str());
		OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
		dbreader = com3->ExecuteReader();
		dbreader->Close();


}
private: System::Void buttonprofrsave_Click(System::Object^ sender, System::EventArgs^ e) {

	counter(count, conn);

	string ID = SystemToStl(id.ToString());
	string nam = SystemToStl(this->textBoxprofrname->Text);
	string nam2 = SystemToStl(this->textBoxprofrname2->Text);
	string phon = SystemToStl(this->textBoxprofrphone->Text);

	string sql3;
	sql3 += "UPDATE [пользователи] SET [имя] = '" + nam + "' , [фамилия] = '" + nam2 + "' , [телефон] = '" + phon + "' WHERE [Код] = " + ID + ";";
	String^ comstr3 = gcnew String(sql3.c_str());
	OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
	dbreader = com3->ExecuteReader();
	dbreader->Close();

}
private: System::Void buttonprofrback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenur->Visible = true;
	panelmenur->Location = Point(0, 0);
	panelprofr->Location = Point(991, 448);
	panelprofr->Visible = false;


	this->textBoxprofrphone->Text = "";
	this->textBoxprofrname2->Text = "";
	this->textBoxprofrname->Text = "";
}
private: System::Void buttonprofsback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenus->Visible = true;
	panelmenus->Location = Point(0, 0);
	panelprofs->Location = Point(1321, 449);
	panelprofs->Visible = false;

	this->textBoxprofsdiscord->Text = "";
	this->textBoxprofsname2->Text = "";
	this->textBoxprofsname->Text = "";
}
private: System::Void buttonprofssave_Click(System::Object^ sender, System::EventArgs^ e) {

	counter(count, conn);

	string ID = SystemToStl(id.ToString());
	string mon = SystemToStl(money.ToString());
	string nam = SystemToStl(this->textBoxprofsname->Text);
	string nam2 = SystemToStl(this->textBoxprofsname2->Text);
	string disc = SystemToStl(this->textBoxprofsdiscord->Text);

	string sql3;
	sql3 += "UPDATE [пользователи] SET [имя] = '" + nam + "' , [фамилия] = '" + nam2 + "' , [дискорд] = '" + disc + "' WHERE [Код] = " + ID + ";";
	String^ comstr3 = gcnew String(sql3.c_str());
	OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
	dbreader = com3->ExecuteReader();
	dbreader->Close();
}
private: System::Void buttonrevtback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenut->Visible = true;
	panelmenut->Location = Point(0, 0);
	panelrevt->Location = Point(991, 873);
	panelrevt->Visible = false;

}
private: System::Void buttonrevrback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelmenur->Visible = true;
	panelmenur->Location = Point(0, 0);
	panelrevr->Location = Point(1321, 873);
	panelrevr->Visible = false;

	this->comboBoxfindsubjectsr->Text = "";
	comboBoxfindsubjectsr->Items->Clear();
	this->textBoxfindrevr->Text = "";
	this->comboBoxfindstudentsr->Text = "";
	comboBoxfindstudentsr->Items->Clear();
	this->comboBoxfindnumberr->Text = "";
	comboBoxfindnumberr->Items->Clear();
}

private: System::Void buttonrevsavepanelback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelrevt->Visible = true;
	panelrevt->Location = Point(0, 0);
	panelrevsave->Location = Point(331, 826);
	panelrevsave->Visible = false;
	

	this->textBoxrevt->Text = "";
	this->comboBoxstudents->Text = "";
	comboBoxstudents->Items->Clear();
	this->comboBoxsubjects->Text = "";
	comboBoxsubjects->Items->Clear();
}
private: System::Void buttonrevsavepanel_Click(System::Object^ sender, System::EventArgs^ e) {
	panelrevsave->Visible = true;
	panelrevsave->Location = Point(0, 0);
	panelrevt->Location = Point(991, 873);
	panelrevt->Visible = false;

	string sql = "SELECT * FROM `пользователи` WHERE `кто` = 'ученик';";
	String^ comstr = gcnew String(sql.c_str());
	OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
	dbreader = com->ExecuteReader();
	String^ student; int i = 0;
	while (dbreader->Read())
	{
		student = dbreader->GetString(3) + " " + dbreader->GetString(4);
		comboBoxstudents->Items->Insert(i, student);
		i++;
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
private: System::Void buttonfindrevpanel_Click(System::Object^ sender, System::EventArgs^ e) {
	panelrevfindt->Visible = true;
	panelrevfindt->Location = Point(0, 0);
	panelrevt->Location = Point(991, 873);
	panelrevt->Visible = false;

	string sql = "SELECT * FROM `пользователи` WHERE `кто` = 'ученик';";
	String^ comstr = gcnew String(sql.c_str());
	OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
	dbreader = com->ExecuteReader();
	String^ student; int i = 0;
	while (dbreader->Read())
	{
		student = dbreader->GetString(3) + " " + dbreader->GetString(4);
		comboBoxfindstudentst->Items->Insert(i, student);
		i++;
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
private: System::Void buttonrevfindpanelback_Click(System::Object^ sender, System::EventArgs^ e) {
	panelrevt->Visible = true;
	panelrevt->Location = Point(0, 0);
	panelrevfindt->Location = Point(0, 564);
	panelrevfindt->Visible = false;


	this->textBoxfindrevt->Text = "";
	this->comboBoxfindstudentst->Text = "";
	comboBoxfindstudentst->Items->Clear();
	this->comboBoxfindsubjectst->Text = "";
	comboBoxfindsubjectst->Items->Clear();
	this->comboBoxfindnumbert->Text = "";
	comboBoxfindnumbert->Items->Clear();

}
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

private: System::Void buttonrevsave_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string sentence = SystemToStl(this->comboBoxstudents->Text);
	// Разделение предложения на слова
	std::vector<std::string> words = SplitSentenceIntoWords(sentence);
	string nam[2]; string nam2; string nam1; int i = 0;
	for (const auto& word : words) {
		nam[i++] = word;
	}
	/*
	for (const auto& word : words) {
		nam2 = word;
	}
	for (const auto& word : words) {
		nam1 = word;
		break;
	}
	*/
	///
	string sql = "SELECT `Код` FROM `пользователи` WHERE `имя` LIKE '";
	sql += nam[0] + "' AND `фамилия` LIKE '" + nam[1] + "'";
	String^ comstr = gcnew String(sql.c_str());
	OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
	dbreader = com->ExecuteReader();
	int id2;
	while (dbreader->Read())
	{
		id2 = safe_cast<int>(dbreader->GetValue(0));
	}
	dbreader->Close();
	string ID2 = SystemToStl(id2.ToString());
	string ID = SystemToStl(id.ToString());
	///
		
	string sql3 = "INSERT INTO [отзывы] ([ученик], [предмет], [учитель], [отзыв]) VALUES ('";
	sql3 += ID2 + "', '" + SystemToStl(this->comboBoxsubjects->Text) + "', '" + ID + "', '" + SystemToStl(this->textBoxrevt->Text) + "');";
	String^ comstr3 = gcnew String(sql3.c_str());
	OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
	dbreader = com3->ExecuteReader();
	dbreader->Close();
}
	   String^ numbert;  String^ studentt; String^ subjectt; int x = 0; int z = 0;
private: System::Void comboBoxfindstudentst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//x += 1;
	if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
	{
		findt();
	}
}
private: System::Void comboBoxfindsubjectst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//x += 1;
	if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
	{
		findt();
	}
}
	   
void findt()
{
	int number[10];
	if (z == 3)
	{
		string ID = SystemToStl(id.ToString());
		studentt = comboBoxfindstudentst->Text;
		subjectt = comboBoxfindsubjectst->Text;
		//numbert = comboBoxfindnumbert->Text;
		//int two = Int32::Parse(comboBoxfindnumbert->Text);
		//int numbert = two - 1;
		//int selectednum = number[numbert];
		string selectedrev = SystemToStl(comboBoxfindnumbert->Text);

		std::string sentence = SystemToStl(studentt);
		// Разделение предложения на слова
		std::vector<std::string> words = SplitSentenceIntoWords(sentence);
		string nam[10]; string nam2; string nam1; int i = 0;
		for (const auto& word : words) {
			nam[i++] = word;
		}
		///
		string sql = "SELECT `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
		sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
			+ "' AND `пользователи`.`кто` LIKE 'ученик"
			+ "' AND `отзывы`.`предмет` LIKE '" + SystemToStl(subjectt)
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

		//String^ v = selectednum.ToString();
		//MessageBox::Show(v, "Ошибка", MessageBoxButtons::OK);
	}
	else
	{
		comboBoxfindnumbert->Items->Clear();
		string ID = SystemToStl(id.ToString());
		studentt = comboBoxfindstudentst->Text;
		subjectt = comboBoxfindsubjectst->Text;
		std::string sentence = SystemToStl(studentt);
		// Разделение предложения на слова
		std::vector<std::string> words = SplitSentenceIntoWords(sentence);
		string nam[10]; string nam2; string nam1; int i = 0;
		for (const auto& word : words) {
			nam[i++] = word;
		}
		///
		//string sql = "SELECT `отзывы`.`Код`, `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `отзывы`.`ученик` = `пользователи`.`Код`";
		
		string sql = "SELECT `отзывы`.`Код`, `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
		sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
					+ "' AND `пользователи`.`кто` LIKE 'ученик"
					+ "' AND `отзывы`.`предмет` LIKE '" + SystemToStl(subjectt)
					+ "' AND `отзывы`.`учитель` LIKE '" + ID + "';";
		
		String^ comstr = gcnew String(sql.c_str());
		OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
		dbreader = com->ExecuteReader();

		i = 0; string rev[10];
		while (dbreader->Read())
		{
			//number[i] = safe_cast<int>(dbreader->GetValue(0));
			//comboBoxfindnumbert->Items->Insert(i, dbreader->GetValue(0));
			number[i] = safe_cast<int>(dbreader->GetValue(0));
			comboBoxfindnumbert->Items->Insert(i, dbreader->GetValue(0));
			rev[i] = SystemToStl(dbreader->GetString(1));
			i++;
		}
		dbreader->Close();

		textBoxfindrevt->Text = gcnew String(rev[0].c_str());
	}
}
private: System::Void comboBoxfindnumbert_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	z = 3;
	if (comboBoxfindstudentst->Text != "" && comboBoxfindsubjectst->Text != "")
	{
		findt();
	}
}




	   String^ numberr;  String^ studentr; String^ subjectr; int a = 0; int b = 0;


	   void findr()
	   {
		   int number[10];
		   if (b == 3)
		   {
			   string ID = SystemToStl(id.ToString());
			   studentr = comboBoxfindstudentsr->Text;
			   subjectr = comboBoxfindsubjectsr->Text;
			   //numbert = comboBoxfindnumbert->Text;
			   //int two = Int32::Parse(comboBoxfindnumbert->Text);
			   //int numbert = two - 1;
			   //int selectednum = number[numbert];
			   string selectedrev = SystemToStl(comboBoxfindnumberr->Text);

			   std::string sentence = SystemToStl(studentr);
			   // Разделение предложения на слова
			   std::vector<std::string> words = SplitSentenceIntoWords(sentence);
			   string nam[10]; string nam2; string nam1; int i = 0;
			   for (const auto& word : words) {
				   nam[i++] = word;
			   }
			   ///
			   string sql = "SELECT `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
			   sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
				   + "' AND `пользователи`.`кто` LIKE 'ученик"
				   + "' AND `отзывы`.`предмет` LIKE '" + SystemToStl(subjectr)
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

			   textBoxfindrevr->Text = gcnew String(rev.c_str());
			   b = 0;

			   //String^ v = selectednum.ToString();
			   //MessageBox::Show(v, "Ошибка", MessageBoxButtons::OK);
		   }
		   else
		   {
			   comboBoxfindnumberr->Items->Clear();
			   string ID = SystemToStl(id.ToString());
			   studentr = comboBoxfindstudentsr->Text;
			   subjectr = comboBoxfindsubjectsr->Text;
			   std::string sentence = SystemToStl(studentr);
			   // Разделение предложения на слова
			   std::vector<std::string> words = SplitSentenceIntoWords(sentence);
			   string nam[10]; string nam2; string nam1; int i = 0;
			   for (const auto& word : words) {
				   nam[i++] = word;
			   }
			   ///
			   //string sql = "SELECT `отзывы`.`Код`, `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `отзывы`.`ученик` = `пользователи`.`Код`";

			   string sql = "SELECT `отзывы`.`Код`, `отзывы`.`отзыв` FROM `отзывы` INNER JOIN `пользователи` ON `пользователи`.`Код` = `отзывы`.`ученик` WHERE `пользователи`.`имя` LIKE '";
			   sql += nam[0] + "' AND `пользователи`.`фамилия` LIKE '" + nam[1]
				   + "' AND `пользователи`.`кто` LIKE 'ученик"
				   + "' AND `отзывы`.`предмет` LIKE '" + SystemToStl(subjectr) + "';";

			   String^ comstr = gcnew String(sql.c_str());
			   OleDbCommand^ com = gcnew OleDbCommand(comstr, conn);
			   dbreader = com->ExecuteReader();

			   i = 0; string rev[10];
			   while (dbreader->Read())
			   {
				   //number[i] = safe_cast<int>(dbreader->GetValue(0));
				   //comboBoxfindnumbert->Items->Insert(i, dbreader->GetValue(0));
				   number[i] = safe_cast<int>(dbreader->GetValue(0));
				   comboBoxfindnumberr->Items->Insert(i, dbreader->GetValue(0));
				   rev[i] = SystemToStl(dbreader->GetString(1));
				   i++;
			   }
			   dbreader->Close();

			   textBoxfindrevr->Text = gcnew String(rev[0].c_str());
		   }
	   }
private: System::Void comboBoxfindstudentsr_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxfindstudentsr->Text != "" && comboBoxfindsubjectsr->Text != "")
	{
		findr();
	}
}
private: System::Void comboBoxfindsubjectsr_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxfindstudentsr->Text != "" && comboBoxfindsubjectsr->Text != "")
	{
		findr();
	}
}
private: System::Void comboBoxfindnumberr_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	b = 3;
	if (comboBoxfindstudentsr->Text != "" && comboBoxfindsubjectsr->Text != "")
	{
		findr();
	}
}
private: System::Void buttonshedback_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SystemToStl(who) == "учитель")
	{
		panelmenut->Visible = true;
		panelmenut->Location = Point(0, 0);
	}
	else if (SystemToStl(who) == "ученик")
	{
		panelmenus->Visible = true;
		panelmenus->Location = Point(0, 0);
	}
	else
	{
		panelmenur->Visible = true;
		panelmenur->Location = Point(0, 0);
	}
	panelshed->Visible = false;
	panelshed->Location = Point(1305, 1); 
}
private: System::Void buttonThelp_Click(System::Object^ sender, System::EventArgs^ e) {
	Help::ShowHelp(this, "справка.chm", "tmain.htm");
}
private: System::Void buttonShelp_Click(System::Object^ sender, System::EventArgs^ e) {
	Help::ShowHelp(this, "справка.chm", "smain.htm");
}
private: System::Void buttonRhelp_Click(System::Object^ sender, System::EventArgs^ e) {
	Help::ShowHelp(this, "справка.chm", "rmain.htm");
}

};
}
