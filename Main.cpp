#include<iostream>
#include<conio.h>
#include<fstream>
#include<chrono>
#include<string>
#include<thread>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cerrno>
#include<cstring>
using namespace std;

void menu();
void pascode();
void cpascode();
void login();
void admin_login();
void admin_menu();
void vaccine_info();
void book_slot();
void update_vaccine_info();
void patient_detail();
int main();
string id;


//class one{
//    public:
//    virtual void show() = 0;
//    virtual void get() = 0;
//};
//
//class info : public one{
//    public:
//    string name, timec;
//    int num, age;
//    void get(){
//        system("cls");
//        cin.sync();
//        cout<<"Enter the patient's name:\n";
//        getline(cin, name);
//        cout<<"Enter the appointment time:\n";
//        getline(cin, timec);
//        cout<<"Enter age:\n";
//        cin>>age;
//        cout<<"Enter appointment no.\n";
//        cin>>num;
//    }
//    void show()
//    {
//        cout<<"\nName ="<<name;
//        cout<<"\nAge ="<<age;
//        cout<<"\nNo ="<<num;
//        cout<<"\nTime ="<<time;
//    }
//};
//class rana:public info{
//    public:
//    info a1;
//    void get()
//    {
//        system("cls");
//        ofstream out("rana.txt", ios::app|ios::binary);
//        a1.get();
//        out.write((char*)&a1,sizeof(a1));
//        out.close();
//        cout<<"Your entry has been saved";
//        getch();
//        menu();
//    }
//    void show()
//    {
//    	ifstream in("rana.txt");
//    	if(in == NULL)
//    	{
//    		cout<<"\n\nNo Data In The File ";
//    		cout<<"\n\n\t\tPress Any Key To Continue : ";
//    		getch();
//    		menu();
//		}
//		else
//		{
//			while(!in.eof())
//			{
//				in.read((char*)&a1,sizeof(a1));
//				a1.show();
//			}
//			in.close();
//			cout<<"Press Enter To Continue =";
//			getch();
//			menu();
//		}
//	}
//};
//class waqar:public info
//{
//	public:
//    info a1;
//    void get()
//    {
//        system("cls");
//        ofstream out("waqar.txt", ios::app|ios::binary);
//        a1.get();
//        out.write((char*)&a1,sizeof(a1));
//        out.close();
//        cout<<"Your entry has been saved";
//        getch();
//        menu();
//    }
//    void show()
//    {
//    	ifstream in("waqar.txt");
//    	if(in == NULL)
//    	{
//    		cout<<"No Data In The File ";
//    		cout<<"\nPress Any Key To Continue : ";
//    		getch();
//    		menu();
//		}
//		else
//		{
//			while(!in.eof())
//			{
//				in.read((char*)&a1,sizeof(a1));
//				a1.show();
//			}
//			in.close();
//			cout<<"Press Enter To Continue =";
//			getch();
//			menu();
//		}
//	}
//};


//class Ahmad:public info
//{
//	public:
//    info a1;
//    void get()
//    {
//        system("cls");
//        ofstream out("Ahmed.txt", ios::app|ios::binary);
//        a1.get();
//        out.write((char*)&a1,sizeof(a1));
//        out.close();
//        cout<<"Your entry has been saved";
//        getch();
//        menu();
//    }
//    void show()
//    {
//    	ifstream in("Ahmed.txt");
//    	if(in == NULL)
//    	{
//    		cout<<"No Data In The File ";
//    		cout<<"\nPress Any Key To Continue : ";
//    		getch();
//    		menu();
//		}
//		else
//		{
//			while(!in.eof())
//			{
//				in.read((char*)&a1,sizeof(a1));
//				a1.show();
//			}
//			in.close();
//			cout<<"Press Enter To Continue =";
//			getch();
//			menu();
//		}
//	}
//};


//class staff :public one
//{
//	public:
//	
//	string all, name, age, sal, pos;
//	void get()
//	{
//		ofstream out("staff.txt",ios::app);
//		{
//			system("cls");
//			cin.sync();
//			cout<<"\nEnter Name = ";
//			getline(cin,name);
//			cout<<"\nEnter Age = ";
//			getline(cin,age);
//			cout<<"\nEnter Salary = ";
//			getline(cin,sal);
//			cout<<"\nEnter Working Position = ";
//			getline(cin,pos);
//		}
//		out<<"\nName = "<<name<<"\nAge = "<<age<<"\nSalary = "<<sal<<"\nWorking Position = "<<pos;
//		out.close();
//		cout<<"\nYour Information has been saved :\n\t\t\tPress Any Key To Continue ";
//		getch();
//		menu();
//	}
//	void show()
//	{
//		ifstream in("staff.txt");
//		if(!in)
//		{
//			cout<<"File Open Error";
//		}
//		while(!in.eof())
//		{
//			getline(in,all);
//			cout<<all<<"\n";
//		}
//		in.close();
//		cout<<"\n\n\t\tPress Any Key To Continue : ";
//		getch();
//		menu();
//	}
//};



//class information

//class information{
//    public:
//    void drinfo()
//    {
//        system("cls");
//        system("color F3");
//        cout<<"\n===============================================================\n";
//        cout<<"\n\n\t\t(Three Doctor Available) \n\n \t\t[Information Ans timing given below]\n";
//        cout<<"--------------------------------------------------------------------------\n";
//        cout<<"\t\tDr. Available: \n";
//        cout<<"\t\tDr. Rana(skin specialist)\n\n";
//        cout<<"\t\t\t [[Timing]]: \n\n";
//        cout<<"\tMonday to Friday\t\t 9AM to 5PM\n";
//        cout<<"\tSaturday         \t\t 9AM to 1PM\n";
//        cout<<"\tSunday           \t\t Off\n";
//        cout<<"\n--------------------------------------------------------------\n";
//        cout<<"\t\t Dr. Waqar(child specialist)\n\n";
//        cout<<"\t\t\t [[Timing]]: \n\n";
//        cout<<"\tMonday to Friday\t\t 2PM to 10PM\n";
//        cout<<"\tSaturday         \t\t 8AM to 1PM\n";
//        cout<<"\tSunday           \t\t12PM to 9PM \n";
//        cout<<"\n--------------------------------------------------------------\n";
//        cout<<"\t\tDr. Ahmed(DVM)\n\n";
//        cout<<"\t\t\t [[Timing]]: \n\n";
//        cout<<"\tMonday to Friday\t\t 8AM to 5PM\n";
//        cout<<"\tSaturday         \t\t 10AM to 1PM\n";
//        cout<<"\tSunday           \t\t Off\n";
//        cout<<"\n--------------------------------------------------------------\n";
//        cout<<"\n Press any key to continue: ";
//        getch();
//        menu();
//    }
//
//};

//void call_dr(){
//    system("cls");
//    int choice;
//    cout<<"\n\n\n\t\t Press 1 for dr. rana \n\n\n\t\tpress 2 for Dr Waqae \n\n\t\t press 3 for Dr. Ahmad ";
//    cin>>choice;
//
//    one *ptr;
//    rana s3;
//    waqar s4;
//    Ahmad s5;
//    if(choice == 1){
//        ptr=&s3;
//        ptr->get();
//    }
//    if(choice==2){
//        ptr=&s4;
//        ptr->get();
//    }
//    if(choice==3){
//        ptr=&s5;
//        ptr->get();
//    }
//    else{
//        cout<<"Sorry Invalid choice:";
//    }
//};

//void pinfoshow(){
//    system("cls");
//    int choice;
//    cout<<"\n\n\n\t\t Press 1 for dr. rana \n\n\n\t\tpress 2 for Dr Waqae \n\n\t\t press 3 for Dr. Ahmad ";
//    cout<<"please enter your choice: ";
//    cin>>choice;
//
//    one *ptr;
//    rana s3;
//    waqar s4;
//    Ahmad s5;
//    if(choice == 1){
//        ptr=&s3;
//        ptr->show();
//    }
//    if(choice==2){
//        ptr=&s4;
//        ptr->show();
//    }
//    if(choice==3){
//        ptr=&s5;
//        ptr->show();
//    }
//    else{
//        cout<<"Sorry Invalid choice:";
//        getch();
//        menu();
//    }
//};


class Vaccine{
	int number = 0;
public:
	virtual void booking()=0;
	virtual int availability()=0;
	virtual void add(int num)=0;
	virtual void set(int num)=0;
};

class covishield : public Vaccine{
	int number=0;
public:
	int availability(){
		return number;
	}
	void set(int num){
		number = num;
	}
	void booking(){
		number--;
	}
	void add(int num){
		number += num;
	}
};

class covaxin : public Vaccine{
	int number=0;
public:
	int availability(){
		return number;
	}
	void set(int num){
		number = num;
	}
	void booking(){
		number--;
	}
	void add(int num){
		number += num;
	}
};


void display()
{
	system("cls");
	ifstream op(id);
	cout<<"\n";
	while(!op.eof())
	{
		string line;
		getline(op,line);
		cout<<"\n\t\t"<<line<<"\n";
	}
	op.close();
	cout<<"\n\n\t\tPress any key to return to menu: ";
	getch();
	menu();
}


void menu(){


    	system("cls");
        system("color FC");
        cout<<"\n";
        cout<<"\n";

        cout<<"\t\t\t\t         | +++++++++++ MAIN MENU ++++++++  |  \n";
        cout<<"\t\t\t\t         |           City Hospital         |  \n";
        cout<<"\t\t\t\t         | ==============================  |  \n";
        cout<<"\t\t\t\t         | +++++Vaccine Registration+++++  |  \n";

        cout<<"\n--------------------------------------------------------------------------------------------------------------\n";
        cout<<"\t\t    Please Select Any Option            \n";

        cout<<"\n\n\t1-\t\t Press 1 for Vaccine Information \n\n";
        cout<<"\t2- \t\t Press 2 for Vaccine Booking \n\n";
        cout<<"\t3- \t\t Press 3 to Change Password \n\n";
        cout<<"\t4- \t\t Press 4 to Display Profile Details \n\n";
        cout<<"\t5- \t\t Press 5 to Logout       \n\n";

        cout<<"\n==============================================================================================================\n";
        int l=id.length();
        
        cout<<" \t \t WELCOME "<<id.substr(0,l-4)<<'\n';
        cout<<"\n\n\t\t Please Enter your Choice: ";
        string a;
        cin>>a;
        
        
        this_thread::sleep_for(chrono::seconds(1));
        //Vaccine v;
        
        
        if(a=="1"){
            vaccine_info();
        }
        else if(a=="2"){
            book_slot();
        }
        else if(a=="3"){
            cpascode();
        }
        else if(a == "4")
        {
        	display();
		}
        else if(a=="5"){
            login();
        }
        else{
            cout<<"\n\n\t\tSorry Invalid Choice ";
            this_thread::sleep_for(chrono::seconds(1));
            menu();
        }
        
//        information a1;
//        one *ptr;
//        staff a2;
//        string a;
//        cin>>a;
//        if(a=="1"){
//            a1.drinfo();
//        }
//        string a;
//        cin>>a;
        
        
        this_thread::sleep_for(chrono::seconds(1));
//        information a1;
//        one *ptr;
//        staff a2;
//        string a;
//        cin>>a;
//        if(a=="1"){
//            a1.drinfo();
//        }

//        else if(a=="2"){
//            call_dr();
//        }
//        else if(a=="3"){
//            ptr=&a2;
//            ptr->get();
//        }
//        else if(a=="4"){
//            pinfoshow();
//        }
//        else if(a=="5"){
//            ptr=&a2;
//            ptr->show();
//        }
//        else if(a=="6"){
//            cpascode();
//        }
//        else if(a == "7")
//        {
//        	display();
//		}
//        else if(a=="8"){
//            login();
//        }
//        else{
//            cout<<"\n\n\t\tSorry Invalid Choice ";
//            this_thread::sleep_for(chrono::seconds(1));
//            menu();
//        }

}

void admin_menu()
{
	system("cls");
    system("color FC");
    cout<<"\n\n";

    cout<<"\t\t\t\t         | ++++++++++ ADMIN MENU ++++++++  |  \n";
    cout<<"\t\t\t\t         |           City Hospital         |  \n";
    cout<<"\t\t\t\t         | ==============================  |  \n";
    cout<<"\t\t\t\t         | +++++Vaccine Registration+++++  |  \n";

    cout<<"\n--------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t\t    Please Select Any Option            \n";

    cout<<"\n\n\t1-\t\t Press 1 for Vaccine Information \n\n";
    cout<<"\t2- \t\t Press 2 for Updating vaccine Information \n\n";
    cout<<"\t3- \t\t Press 3 to see Patient's Details \n\n";
    cout<<"\t5- \t\t Press 4 to Logout       \n\n";

    cout<<"\n==============================================================================================================\n";
    
    cout<<" \t \t WELCOME "<<'\n';
    cout<<"\t\t    Please Select Any Option : ";
    string a;
    cin>>a;
    this_thread::sleep_for(chrono::seconds(1));
    if(a=="1"){
        vaccine_info();
    }
    else if(a=="2"){
        update_vaccine_info();
    }
    else if(a=="3"){
        patient_detail();
    }
    else if(a == "4")
    {
    	login();
	}
    else{
        cout<<"\n\n\t\tSorry Invalid Choice ";
        this_thread::sleep_for(chrono::seconds(1));
        menu();
    }
}

void vaccine_info()
{
	system("cls");
	Vaccine *vac;
	covishield covi;
	covaxin cova;
	vac = &covi;
	ifstream in("covishield.txt");
	string num;
	getline(in, num);
	int curr_num = stoi(num);
	vac->set(curr_num);
	cout<<"\n\n\t\t"<<"Covishield Doses Available : "<<vac->availability();
	in.close();
	vac = &cova;
	ifstream in1("covaxin.txt");
	getline(in1, num);
	curr_num = stoi(num);
	vac->set(curr_num);
	cout<<"\n\n\t\t"<<"Covaxin Doses Available : "<<vac->availability();
	this_thread::sleep_for(chrono::seconds(1));
	in1.close();
	admin_menu();
}

void book_slot()
{
	system("cls");
	
	Vaccine *vac_covi, *vac_cova;
	covishield covi;
	covaxin cova;
	vac_covi = &covi;
	vac_cova = &cova;	
	ifstream in("covishield.txt");
	string num;
	getline(in, num);
	
	
	ifstream inn("covaxin.txt");
	string num2;
	getline(inn, num2);
	
	int covi_num = stoi(num);
	vac_covi->set(covi_num);
	
	int cova_num = stoi(num2);
	vac_cova->set(cova_num);
	int input,slot_input;
	int flag=0;
	
	if(covi_num && cova_num){
		
		cout<<"\n\n\t\t"<<"        Press 1 to book Covishield"<<endl;
		cout<<"\n\n\t\t"<<"         Press 2 to book Covaxin"<<endl<<endl;
		cout<<"\n\n\t\t";
		cin>>input;
		if(input==1 || input==2){
			cout<<"\n\n\t\t"<<"Chhose a  slot";
			cout<<"\n\n\t\t"<<"Press 1 for 9am - 10am";
			cout<<"\n\n\t\t"<<"Press 2 for 10am - 11am";
			cout<<"\n\n\t\t"<<"Press 3 for 11am - 12pm";
			cout<<"\n\n\t\t"<<"Press 4 for 12pm - 1pm"<<endl;
			
			cout<<"\n\n\t\t";
			
			cin>>slot_input;
			
			if(slot_input==1){
				cout<<"\n\n\t\t"<<"Your slot is booked for 9am - 10am";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag = 1;
				
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
					
				}
			}
			if(slot_input==2){
				cout<<"\n\n\t\t"<<"Your slot is booked for 10am - 11am";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}
			if(slot_input==3){
				cout<<"\n\n\t\t"<<"Your slot is booked for 11am - 12pm";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}
			if(slot_input==4){
				cout<<"\n\n\t\t"<<"Your slot is booked for 12pm - 1pm";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}	
		}
	
	}
	
	if(flag==1){
		vac_covi->booking();
		ofstream out("covishield.txt");
		out<<to_string(vac_covi->availability());
		out.close();
	}
	else if(flag==2){
		vac_cova->booking();
		ofstream out("covishield.txt");
		out<<to_string(vac_cova->availability());
		out.close();
	}
	int temp;
	cout<<endl<<"Press any key"<<endl;
	cin>>temp;
	
	system("cls");
	
	Vaccine *vac_covi, *vac_cova;
	covishield covi;
	covaxin cova;
	vac_covi = &covi;
	vac_cova = &cova;	
	ifstream in("covishield.txt");
	string num;
	getline(in, num);
	
	
	ifstream inn("covaxin.txt");
	string num2;
	getline(inn, num2);
	
	int covi_num = stoi(num);
	vac_covi->set(covi_num);
	
	int cova_num = stoi(num2);
	vac_cova->set(cova_num);
	int input,slot_input;
	int flag=0;
	
	if(covi_num && cova_num){
		
		cout<<"\n\n\t\t"<<"        Press 1 to book Covishield"<<endl;
		cout<<"\n\n\t\t"<<"         Press 2 to book Covaxin"<<endl<<endl;
		cout<<"\n\n\t\t";
		cin>>input;
		if(input==1 || input==2){
			cout<<"\n\n\t\t"<<"Chhose a  slot";
			cout<<"\n\n\t\t"<<"Press 1 for 9am - 10am";
			cout<<"\n\n\t\t"<<"Press 2 for 10am - 11am";
			cout<<"\n\n\t\t"<<"Press 3 for 11am - 12pm";
			cout<<"\n\n\t\t"<<"Press 4 for 12pm - 1pm"<<endl;
			
			cout<<"\n\n\t\t";
			
			cin>>slot_input;
			
			if(slot_input==1){
				cout<<"\n\n\t\t"<<"Your slot is booked for 9am - 10am";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag = 1;
				
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
					
				}
			}
			if(slot_input==2){
				cout<<"\n\n\t\t"<<"Your slot is booked for 10am - 11am";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}
			if(slot_input==3){
				cout<<"\n\n\t\t"<<"Your slot is booked for 11am - 12pm";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}
			if(slot_input==4){
				cout<<"\n\n\t\t"<<"Your slot is booked for 12pm - 1pm";
				if(input==1){
					cout<<"\n\n\t\t"<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}	
		}
	
	}
	
	if(flag==1){
		vac_covi->booking();
		ofstream out("covishield.txt");
		out<<to_string(vac_covi->availability());
		out.close();
	}
	else if(flag==2){
		vac_cova->booking();
		ofstream out("covishield.txt");
		out<<to_string(vac_cova->availability());
		out.close();
	}
	int temp;
	cout<<endl<<"Press any key"<<endl;
	cin>>temp;
	
}

void update_vaccine_info()
{
	system("cls");
	Vaccine *vac;
	cout<<"\n\n\t\tWhich Vaccine Doses would you like to update ?\n";
	cout<<"\n\t\t1. Covishield\n\t\t2. Covaxin\n\n\t\t";
	string a;
	cin>>a;
	if(a == "1"){
		
		Vaccine *vac;
		covishield covi;
		vac = &covi;
		
		ifstream in("covishield.txt");
		string num;
		getline(in, num);
		int curr_num = stoi(num);
		vac->set(curr_num);
		
		cout<<"\n\n\t\t"<<"Covishield Doses Currently Available : "<<vac->availability();
		cout<<"\n\t\t How many more Covishield doses you want to add ? : ";
		int addv;cin>>ws;cin>>addv;
		vac->add(addv);
		ofstream out("covishield.txt");
		out<<to_string(vac->availability());
		out.close();
		
		cout<<"\n\n\t\t"<<"Covishield Doses Currently Available : "<<vac->availability();
		
	}
	else if(a == "2"){
		
		Vaccine *vac;
		covaxin cova;
		vac = &cova;
		
		ifstream in("covaxin.txt");
		string num;
		getline(in, num);
		int curr_num = stoi(num);
		vac->set(curr_num);
		
		cout<<"\n\n\t\t"<<"Covaxin Doses Currently Available : "<<vac->availability();
		cout<<"\n\t\t How many more Covaxin doses you want to add ? : ";
		int addv;;cin>>ws;cin>>addv;
		vac->add(addv);
		ofstream out("covaxin.txt");
		out<<to_string(vac->availability());
		out.close();
		cout<<"\n\n\t\t"<<"Covaxin Doses Currently Available : "<<vac->availability();
		
	}
	else{
		cout<<"Wrong choice";
	}
	this_thread::sleep_for(chrono::seconds(1));
	admin_menu();
}

void patient_detail()
{
	
}

void reg()
{
	string a,b,c,z,d,sex,age;
	system("cls");
	cout<<"\n\t\t Enter Name: ";
	cin>>ws;
	getline(cin,a);
	cout<<"\n\t\t Enter UserId: ";
	cin>>ws;
	getline(cin,b);
	// Checking if UserId already exists
	ifstream cp(b+".txt");
	if(cp)
	{
		cout<<"\n\t\t UserId Already Exists\n";
		this_thread::sleep_for(chrono::seconds(1));
		login();
	}
	cp.close();
	cout<<"\n\t\t Enter Password: ";
	cin>>ws;
	getline(cin,c);
	cout<<"\n\t\t Confirm Password: ";
	cin>>ws;
	getline(cin,z);
	while(c!=z)
	{
		cout<<"\n\t\t Password don't match.\n";
		cout<<"\n\t\t Confirm Password : ";
		cin>>ws;
		getline(cin,z);
	}
	cout<<"\n\t\t Enter Age: ";
	cin>>ws;
	getline(cin,age);
	cout<<"\n\t\t Enter Sex: M /F : ";
	cin>>ws;
	getline(cin,sex);
	while(sex.length()!=1 || (sex[0]!='M' && sex[0]!='F'))
	{
		cout<<"\n\t\t Enter Sex: M/F : ";
		cin>>ws;
		getline(cin,sex);
	}
	cout<<"\n\t\t Enter Email: ";
	cin>>ws;
	getline(cin,d);
	
	ofstream op(b+".txt",ios::app);
	op<<"UserId = "<<b<<"\nPassword = "<<c<<"\nName = "<<a<<"\nAge = "<<age<<"\nSex = "<<sex<<"\nEmail = "<<d;
	op.close();
	cout<<"\n\n\t\tYour Information has been saved \n\n\tPress Any Key To Continue \t";
	getch();
	login();
}
void pascode(){

    system("cls");
    string b;

    system("color FC");
    
    cout<<"\n\t\t Enter UserId: ";
	cin>>ws;
	getline(cin,id);
	id += ".txt";
    ifstream in(id);
    if(in)
	{
        cout<<"\n\t\t Enter Password: ";
		cin>>ws;
		getline(cin,b);
        string pass = "", line;
        getline(in,line);
        getline(in,line);
        for(int i = 0; i < line.length(); i++)
        {
        	if((i+1) < line.length() && line[i] == '=' && line[i+1] == ' ')
        	{
        		i += 2;
        		while(i < line.length())
        		{
        			pass += line[i];
        			++i;
				}
			}
		}
        if(b == pass){
            menu();
        }
        else{

            cout<<"\n\n\t\t Incorrect Password";
            this_thread::sleep_for(chrono::seconds(1));
        }
        
    }
    else
    {		
		cout<<"\n\t\t UserId does not exist";
        this_thread::sleep_for(chrono::seconds(1));
	}
    in.close();
    login();
}

void admin_login()
{
	system("cls");
	string admin_id, admin_pass;
	cout<<"\n\n\tEnter Admin id : ";
	cin>>ws;
	getline(cin, admin_id);
	cout<<"\n\n\tEnter Password : ";
	cin>>ws;
	getline(cin, admin_pass);
	ifstream in("admin.txt");
	if(in)
	{
		int flag=1;
		string a_id, a_pass;
		while(1)
		{
			getline(in, a_id);
			if(a_id == "end")
			{
				break;
			}
			getline(in, a_pass);
			if(a_id==admin_id && a_pass==admin_pass)
			{
				//////    call admin menu function here ////////
//				cout<<"\n\tLogged in success\n";
//				this_thread::sleep_for(chrono::seconds(1));
				admin_menu();
				flag=0;
				break;
			}
		}
		if(flag)
		{
			cout<<"\n\n\tAdmin id or password wrong\n\n";
			this_thread::sleep_for(chrono::seconds(1));
		}
	}
	in.close();
	login();
}

void cpascode(){
	
    system("cls");
    ifstream op(id);
    ofstream cp("temporary.txt",ios::app);
    if(!op)
    {
    	cout<<"\n\n\n\n\n\t\t\t Error Opening File ";
    	this_thread::sleep_for(chrono::seconds(1));
    	menu();
	}
	
    cout<<"\n\n\n\n\n\t\t\t Enter the new password : ";
    cin>>ws;
    string s;
    getline(cin,s);
    string check = "Password = ";
    string z;
    cout<<"\n\t\t\t Confirm new password: ";
	cin>>ws;
	getline(cin,z);
	while(s != z)
	{
		cout<<"\n\t\t\t Password Don't Match.\n";
		cout<<"\n\t\t\t Confirm Password : ";
		cin>>ws;
		getline(cin,z);
	}
		
	string line;
	getline(op,line);
	cp<<line;
	getline(op,line);
	line = "\nPassword = " + s;
	cp<<line;
	while(!op.eof())
	{
		getline(op,line);
		cp<<"\n"<<line;
	}
	op.close();
	cp.close();
	
	const char* p = id.c_str();
	int c = remove(p);
	
	ifstream pp("temporary.txt");
	ofstream fp(id);	
	getline(pp,line);
	fp<<line;
	while(!pp.eof())
	{
		getline(pp,line);
		fp<<"\n"<<line;
	}
	pp.close();
	fp.close();
	c = remove("temporary.txt");
	
    cout<<"\n\n\t\t\t Your Password has been saved ";
    cout<<"\n\n\t\t\t Press any key to return ";
    getch();
    menu();
    
}
void login()
{
	system("cls");
	system("color E9");
	cout<<"\n\n\t1-\t\t New User? Press 1 to register";
	cout<<"\n\n\t2-\t\t Press 2 to login";
	cout<<"\n\n\t3-\t\t Press 3 for Admin Login\n\n";
	cout<<"\t\t Enter Key: ";
	string a;
	cin>>a;
	if(a == "1")
		reg();
	else if(a == "2")
		pascode();
	else if(a == "3")
		admin_login();
	else
	{
		cout<<"\n\t\t\t Invalid Choice";
		this_thread::sleep_for(chrono::seconds(1));
		login();
	}
}

int main(){
    login();
    system("pause");
}
