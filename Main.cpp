#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void menu();
void pascode();
void cpascode();

class one{
    public:
    virtual void show() = 0;
    virtual void get() = 0;
};

class info : public one{
    public:
    string name, timec;
    int num, age;
    void get(){
        system("cls");
        cin.sync();
        cout<<"Enter the patient's name:\n";
        getline(cin, name);
        cout<<"Enter the appointment time:\n";
        getline(cin, timec);
        cout<<"Enter age:\n";
        cin>>age;
        cout<<"Enter appointment no.\n";
        cin>>num;
    }
    void show()
    {
        cout<<"\nName ="<<name;
        cout<<"\nAge ="<<age;
        cout<<"\nNo ="<<num;
        cout<<"\nTime ="<<time;
    }
};
class rana:public info{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("rana.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(a1));
        out.close();
        cout<<"Your entry has been saved";
        getch();
        menu();
    }
    void show()
    {
    	ifstream in("rana.txt");
    	if(in == NULL)
    	{
    		cout<<"\n\nNo Data In The File ";
    		cout<<"\n\n\t\tPress Any Key To Continue : ";
    		getch();
    		menu();
		}
		else
		{
			while(!in.eof())
			{
				in.read((char*)&a1,sizeof(a1));
				a1.show();
			}
			in.close();
			cout<<"Press Enter To Continue =";
			getch();
			menu();
		}
	}
};
class waqar:public info
{
	public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("waqar.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(a1));
        out.close();
        cout<<"Your entry has been saved";
        getch();
        menu();
    }
    void show()
    {
    	ifstream in("waqar.txt");
    	if(in == NULL)
    	{
    		cout<<"No Data In The File ";
    		cout<<"\nPress Any Key To Continue : ";
    		getch();
    		menu();
		}
		else
		{
			while(!in.eof())
			{
				in.read((char*)&a1,sizeof(a1));
				a1.show();
			}
			in.close();
			cout<<"Press Enter To Continue =";
			getch();
			menu();
		}
	}
};
class ahmed:public info
{
	public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Ahmed.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(a1));
        out.close();
        cout<<"Your entry has been saved";
        getch();
        menu();
    }
    void show()
    {
    	ifstream in("Ahmed.txt");
    	if(in == NULL)
    	{
    		cout<<"No Data In The File ";
    		cout<<"\nPress Any Key To Continue : ";
    		getch();
    		menu();
		}
		else
		{
			while(!in.eof())
			{
				in.read((char*)&a1,sizeof(a1));
				a1.show();
			}
			in.close();
			cout<<"Press Enter To Continue =";
			getch();
			menu();
		}
	}
};
class staf:public one
{
	public:
	
	string all, name, age, sal, pos;
	void get()
	{
		ofstream out("staff.txt",ios::app);
		{
			system("cls");
			cin.sync();
			cout<<"\nEnter Name = ";
			getline(cin,name);
			cout<<"\nEnter Age = ";
			getline(cin,age);
			cout<<"\nEnter Salary = ";
			getline(cin,sal);
			cout<<"\nEnter Working Position = ";
			getline(cin,pos);
		}
		out<<"\nName = "<<name<<"\nAge = "<<age<<"\nSalary = "<<sal<<"\nWorking Position = "<<pos;
		out.close();
		cout<<"\nYour Information has been saved :\n\t\t\tPress Any Key To Continue ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("staff.txt");
		if(!in)
		{
			cout<<"File Open Error";
		}
		while(!in.eof())
		{
			getline(in,all);
			cout<<all<<"\n";
		}
		in.close();
		cout<<"\n\n\t\tPress Any Key To Continue : ";
		getch();
		menu();
	}
};
