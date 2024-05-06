#include "tmenu.h"

namespace kursme {
	extern int idx;
	extern string loginx;
	extern string passx;
	extern string namex;
	extern string name2x;
	extern string name3x;
	extern string discordx;
	extern string phonex;
	extern string vkx;
	extern string offlinex;
	extern string onlinex;
	extern int moneyx;
	extern string whox;
	extern int hoursx;
	extern int countx;

	extern int idy;
	extern string loginy;
	extern string passy;
	extern string namey;
	extern string name2y;
	extern string name3y;
	extern string discordy;
	extern string phoney;
	extern string vky;
	extern string offliney;
	extern string onliney;
	extern int moneyy;
	extern string whoy;
	extern int hoursy;
	extern int county;

	extern string logged;

	extern string SystemToStl(String^ s);

	/*
	string SystemToStl(String^ s)
	{
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		return string(ptr);
	}*/

	
	System::Void tmenu::buttonTprofile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		tprofile^ f;
		f = gcnew tprofile(this);
		f->Show();
		this->Hide();

	}
	
	

	 int id;
	 string login;
	 string pass;
	 string name;
	 string name2;
	 string name3;
	 string discord;
	 string phone;
	 string vk;
	 string offline;
	 string online;
	 int money;
	 string who;
	 int hours;
	 int count;


		System::Void tmenu::buttonThelp_Click(System::Object^ sender, System::EventArgs^ e) {
	
			if ((who) == "учитель")
			{
				Help::ShowHelp(this, "справка.chm", "tmain.htm");
			}
			else if ((who) == "ученик")
			{
				Help::ShowHelp(this, "справка.chm", "smain.htm");
			}
			else if ((who) == "родитель")
			{
				Help::ShowHelp(this, "справка.chm", "rmain.htm");
			}
		}
	   System::Void tmenu::buttonmenutback_Click(System::Object^ sender, System::EventArgs^ e)
	   {
		   parent->Show();
		   this->Close();
		   conn->Close();
	   }

	   System::Void tmenu::buttonTreview_Click(System::Object^ sender, System::EventArgs^ e)
	   {
		   
		   if ((who) == "учитель")
		   {
			   trevmenu^ f;
			   f = gcnew trevmenu(this);
			   f->Show();
			   //conn->Close();
		   }
		   else if ((who) == "родитель")
		   {
			   rrev^ f;
			   f = gcnew rrev(this);
			   f->Show();
			   //conn->Close();
		   }
		   this->Hide();
	   }
	   System::Void tmenu::tmenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		   conn->Close();
		   //this->Close();
		   //parent->Close();
	   }

System::Void tmenu::tmenu_Load(System::Object^ sender, System::EventArgs^ e) {
	conn->Open();
	this->Location = Point(1585, 490);
	if (logged != "no")
	{
		id = idx;
		login = loginx;
		pass = passx;
		name = namex;
		name2 = name2x;
		name3 = name3x;
		discord = discordx;
		phone = phonex;
		vk = vkx;
		offline = offlinex;
		online = onlinex;
		money = moneyx;
		who = whox;
		hours = hoursx;
		count = countx;
	}
	else
	{
		id = idy;
		login = (loginy);
		pass = (passy);
		name = (namey);
		name2 = (name2y);
		name3 = (name3y);
		discord = (discordy);
		phone = (phoney);
		vk = (vky);
		offline = (offliney);
		online = (onliney);
		money = (moneyy);
		who = (whoy);
		hours = hoursy;
		count = county;
	}
	if ((who) == "ученик")
	{
		buttonTreview->Visible = false;
		buttonExit->Location = Point(58, 315);
		buttonTchats->Location = Point(58, 315);
	}
}
System::Void tmenu::buttonTreview_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) {
	
	if ((who) == "учитель")
	{
		Help::ShowHelp(this, "справка.chm", "treview.htm");
	}
	else if ((who) == "родитель")
	{
		Help::ShowHelp(this, "справка.chm", "rreview.htm");
	}
}
	System::Void tmenu::buttonTshed_Click(System::Object^ sender, System::EventArgs^ e) {
		shed^ f;
		f = gcnew shed(this);
		f->Show();
		this->Hide();
		//conn->Close();
	}
	System::Void tmenu::buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		conn->Close();
		this->Close();
		parent->Close();
	}

}

