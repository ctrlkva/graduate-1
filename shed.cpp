#include "shed.h"

#include <fstream>

namespace kursme {

    extern int id;
    extern string login;
    extern string pass;
    extern string name;
    extern string name2;
    extern string name3;
    extern string discord;
    extern string phone;
    extern string vk;
    extern string offline;
    extern string online;
    extern int money;
    extern string who;
    extern int hours;
    extern int count;

    extern string SystemToStl(String^ s);

    System::Void shed::shed_Load(System::Object^ sender, System::EventArgs^ e) {
        conn->Open();
        this->Location = Point(1585, 490);

        // чтение из файла
        string ID = SystemToStl(id.ToString());
        std::string line;
        std::ifstream in("schedule" + ID + ".txt");
        if (in.is_open())
        {
            int i = 1;
            while (std::getline(in, line))
            {
                String^ line2 = gcnew String(line.c_str());
                this->panel1->Controls["textbox" + i.ToString()]->Text = line2;            ///////////работает
                i++;
            }
        }
        in.close();
    }

    template < class T, class U >
    Boolean isinst(U u) {
        return dynamic_cast<T>(u) != nullptr;
    }

    System::Void shed::buttonshedback_Click(System::Object^ sender, System::EventArgs^ e) {
        

        // запись в файл
        string ID = SystemToStl(id.ToString());
        //std::string line;
        string str = ""; //String^ name;
        std::ofstream out("schedule"+ID+".txt");
        if (out.is_open())
        {

            //str = SystemToStl(textBox1->Text);
            //out << str << std::endl;
            
            for each(Control^ c in panel1->Controls)
            {
                if (isinst< TextBox^ >(c))
                {
                    str = SystemToStl(c->Text);
                    out << str << std::endl;
                    //str = "";
                }
            }
            
            /*
            for each (Control ^ c in this->panel1->Controls) {
                TextBox^ tb = dynamic_cast<TextBox^>(c);                               ///////////не работает
                if (tb != nullptr)
                    str = SystemToStl(c->Text);
                    out << str << std::endl;
            }
            */
            /*
            for (int i = 1; i < 85; i++)
            {
                //name = "textBox" + i.ToString();
                //str = SystemToStl(panel1->Controls[name]->Text);

                //this->Controls[panelshed]->Visible = true;
                //str = SystemToStl(((this->panelshed->Controls[panel1])->Controls[name])->Text);                      ///////////не работает
                str = SystemToStl(this->panel1->Controls["textBox" + i.ToString()]->Text);
                out << str << std::endl;
                str = "";
            }
            */
            //out << str << std::endl;
        }
        out.close();
        // запись в бд
        /* 
        string ID = SystemToStl(id.ToString());
        "CREATE TABLE " + ID + "(col1 datatype, PRIMARY KEY(хотя бы одна колонка));"

        string sql3 = "INSERT INTO [отзывы] ([ученик], [предмет], [учитель], [отзыв]) VALUES ('";
        sql3 += ID2 + "', '" + SystemToStl(this->comboBoxsubjects->Text) + "', '" + ID + "', '" + SystemToStl(this->textBoxrevt->Text) + "');";
        String^ comstr3 = gcnew String(sql3.c_str());
        OleDbCommand^ com3 = gcnew OleDbCommand(comstr3, conn);
        dbreader = com3->ExecuteReader();
        dbreader->Close();
        */
        parent->Show();
        this->Close();
        conn->Close();
    }
    System::Void shed::shed_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
        conn->Close();
        //this->Close();
        //parent->Close();
    }
}
