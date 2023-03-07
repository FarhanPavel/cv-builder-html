#include <iostream>
#include<conio.h>
#include<string>
#include <fstream>
#include<windows.h>
using namespace std;
class Word
{
public:
    string name,father_name,mother_name,address1,address2,mob_num,sex;
    string married_status,nationality,dob;
    string group,board;
    int  passyear;
    string result;

    int sz, line_count = 0, degree_count;
    char line[2000];
    ///print part;
    void input()
    {
    ofstream inputter ("cv.html",ios::app);
    inputter<<"<style type=text/css>@media print {#printbtn {display :  none;}}</style><input id =printbtn type=button value=Print this page onclick=window.print();>";

    }
    ///main Body
    void input2()
    {
        ofstream inputter ("cv.html",ios::app);
        inputter<<"<h1 style=color:blue align=center >Curriculum Vitae<h1>"<<endl;
        inputter<<"<table border=1 align =center width=1000 height=100 cellspacing=0 cellpadding=6>";
        cout<<"\n";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t Enter Your Name \t: ";
        getline(cin>>ws,name);
        cout <<"\t\t\t\t Enter Father's Name\t: ";
        getline(cin >> ws, father_name);
        cout<<"\t\t\t\t Enter Mother's Name\t: ";
        getline(cin >> ws, mother_name);
        cout<<"\t\t\t\t Enter Personal Address\t: ";
        getline(cin >> ws, address1);
        cout<<"\t\t\t\t Enter Present Address\t: ";
        getline(cin >> ws, address2);
        cout<<"\t\t\t\t Enter Mobile Number\t: ";
        getline(cin >> ws, mob_num);
        cout<<"\t\t\t\t Enter Date Of Birth\t: ";
        getline(cin >> ws, dob);
        cout<<"\t\t\t\t Enter Sex\t\t: ";
        getline(cin >> ws, sex);
        cout<<"\t\t\t\t Enter Married Status\t: ";
        getline(cin >> ws, married_status);
        cout<<"\t\t\t\t Enter Nationality\t: ";
        getline(cin >> ws, nationality);
        cout<<"\n";

        inputter<<"<tr><td><font size=5>Name</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<name<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Father's Name</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<father_name<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Mother's Name</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<mother_name<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Present Address</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<address1<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Permanent Address</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<address2<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Mobile Number</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<mob_num<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Date of Birth</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<dob<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Sex</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<sex<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Nationality</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<nationality<<"</td></tr>";
        inputter<<"<tr><td><font size=5>Married Status</font></td>";
        inputter<<"<td colspan=3><font size=5>"<<married_status<<"</td></tr>";
        cout<< "\t\t\t       Info Added Successfully....\n"<< endl;
        system("cls");

    }
    ///Educational part
    void input3()
    {
    ofstream inputter ("cv.html",ios::app);
    inputter<<"<table border=1 align =center width=1000 height=100 cellspacing=0 cellpadding=6>";
    inputter<<"<tr><td colspan=4><font size=5>Educational Qualification</font></td></tr>";
    inputter<<"<tr><td><font size=5>Degree</font></td>";
    inputter<<"<td><font size=5>Board/University</font></td>";
    inputter<<"<td><font size=5>GPA/CGPA</font></td>";
    inputter<<"<td><font size=5>Pass.Year</font></td></tr>";
    cout<<"\n";
    cout << "\n\n\n\n\n";
    cout << "\t\t\t   How Many Degrees Do you Have(Currently): ";
    cin >> degree_count;
    cout << "\n\n";
    for (int i = 0; i < degree_count; i++)
    {

        cout <<"\t\t\t\t Enter Degree Name\t\t: ";
        getline(cin >> ws, name);
        cout<<"\t\t\t\t Enter "<<name<<" "<<"Group\t\t: ";
        getline(cin >> ws, group);
        cout<<"\t\t\t\t Enter "<<name<<" "<<"Board/University\t: ";
        getline(cin >> ws, board);
        cout<<"\t\t\t\t Enter "<<name<<" "<<"Pass Year\t\t: ";
        cin>>passyear;
        cout<<"\t\t\t\t Enter "<<name<<" "<<"GPA/CGPA\t\t: ";
        getline(cin >> ws, result);
        cout<<"\n";
    inputter<<"<tr><td><font size=5>"<<name<<"</font></td>";
    inputter<<"<td><font size=5>"<<board<<"</font></td>";
    inputter<<"<td><font size=5>"<<result<<"</font></td>";
    inputter<<"<td><font size=5>"<<passyear<<"</font></td></tr>";
    cout<< "\t\t\t  "<<name<<"  Qualification Added Successfully....\n"<< endl;
    }

    }


};

int main()
{
    char start_page_operation;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,6);
   cout<<endl;
   cout<<"\t\t\t       "<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   cout<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~";
   cout<<""<<endl;//project name
   cout<<"\t\t\t       ~\t"<<" \t    CV BUILDER"<<"\t       \t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t"<<"\t\t\t\t\t    ~"<<"\n";
   cout<<"\t\t\t       ~\t"<<"\t\t\t\t\t    ~"<<"\n";
   cout<<"\t\t\t       ~\t"<<"   \t   Developed By\t    \t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;
     cout<<"\t\t\t       ~\t"<<"   \t    ->  Pavel\t    \t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;
      cout<<"\t\t\t       ~\t"<<"   \t    ->  Konok\t    \t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;
      cout<<"\t\t\t       ~\t"<<"   \t    ->  Basak\t    \t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;

  cout<<"\t\t\t       ~\t     "<<"Jahangirnagar University\t\t    ~"<<endl<<"\t\t\t       ~\t   \t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t"<<"   \t      IIT-12\t\t    \t    ~"<<endl<<"\t\t\t       ~\t   \t\t\t\t\t    ~"<<endl;

   cout<<"\t\t\t       ~\t     \t\t\t\t\t    ~"<<endl<<"\t\t\t       ~\t     \t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       "<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   cout << "\t\t\t       \t\t   \t\t\t\t      Press ENTER To Continue"<<ends;

   while (cin.get() != '\n')
   {
       cin.get();
   }
   cout << endl<< endl<< endl<< endl<< endl;
     system("cls");
   ///Start Page
    Word obj1;
    obj1.input();
    obj1.input2();
    obj1.input3();
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t   See you Soon In Another Project";
    cout<<"\n\n";
    cout<<"\t\t\t\t\t\t(#_#)"<<endl;
    getch();




    return 0;
}
