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

#define space cout<<"\n\n\t\t";


void menu();
void pascode();
void cpascode();
void login();
void admin_login();
void admin_menu();
void vaccine_info(int);
void book_slot();
void update_vaccine_info();
void patient_detail();
int main();
string id;


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
            vaccine_info(2);
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
    
    int l = id.length();
    string op = id.substr(0,l-4);
    cout<<" \t \t WELCOME "<<op<<"\n\n";
    cout<<"\t\t    Please Select Any Option : ";
    string a;
    cin>>a;
    this_thread::sleep_for(chrono::seconds(1));
    if(a=="1"){
        vaccine_info(1);
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

void vaccine_info(int ch)
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
	if(ch == 1)
		admin_menu();
	else
		menu();
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
		
		space cout<<"1 . Covishield"<<endl;
		space cout<<"2 . Covaxin"<<endl<<endl;
		space ;
		cin>>input;
		if(input==1 || input==2){
			space cout<<"Chhose a  slot";
			space cout<<"1. 9am - 10am";
			space cout<<"2. 10am - 11am";
			space cout<<"3. 11am - 12pm";
			space cout<<"4. 12pm - 1pm"<<endl;
			
			cout<<"\n\n\t\t";
			
			cin>>slot_input;
			
			if(slot_input==1){
				space cout<<"Your slot is booked for 9am - 10am";
				if(input==1){
					space cout<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag = 1;
				
				}
				else if(input==2){
					space cout<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
					
				}
			}
			if(slot_input==2){
				space cout<<"Your slot is booked for 10am - 11am";
				if(input==1){
					space cout<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					space cout<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}
			if(slot_input==3){
				space cout<<"Your slot is booked for 11am - 12pm";
				if(input==1){
					space cout<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					space cout<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}
			if(slot_input==4){
				space cout<<"Your slot is booked for 12pm - 1pm";
				if(input==1){
					space cout<<"Your vaccine covishield is booked";
//					vac_covi->booking();
					flag=1;
				}
				else if(input==2){
					space cout<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
					flag=2;
				}
			}	
		}
		else{
			cout<<" Worng choice";
		}
	
	}
	
	else if(!covi_num && cova_num){
		space cout<<"Sorry.....Covishield is unavailable for now";
		space cout<<"Press 1 to book covaxin";
		space
		cin>>input;
		
		if(input==1){
				cout<<"\n\n\t\t"<<"Chhose a  slot";
			cout<<"\n\n\t\t"<<"1. 9am - 10am";
			cout<<"\n\n\t\t"<<"2. 10am - 11am";
			cout<<"\n\n\t\t"<<"3. 11am - 12pm";
			cout<<"\n\n\t\t"<<"4. 12pm - 1pm"<<endl;
			
			cout<<"\n\n\t\t";
			cin>>slot_input;
			if(slot_input==1){
				cout<<"\n\n\t\t"<<"Your slot is booked for 9am - 10am";
				cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
				flag=2;
			}
			if(slot_input==2){
				cout<<"\n\n\t\t"<<"Your slot is booked for 9am - 10am";
				cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
				flag=2;
			}
			if(slot_input==3){
				cout<<"\n\n\t\t"<<"Your slot is booked for 9am - 10am";
				cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
				flag=2;
			}
			if(slot_input==4){
				cout<<"\n\n\t\t"<<"Your slot is booked for 9am - 10am";
				cout<<"\n\n\t\t"<<"Your vaccine covaxin is booked";
//					vac_cova->booking();
				flag=2;
			}
			
		}
	}
		
	else if(covi_num && !cova_num){
		cout<<"\n\n\t\t"<<"Sorry.....covaxin is unavailable for now";
		cout<<"\n\n\t\t"<<"Press 1 to book covishield";
		space
		cin>>input;
		
		if(input==1){
				cout<<"\n\n\t\t"<<"Chhose a  slot";
			space cout<<"1. 9am - 10am";
			space cout<<"2. 10am - 11am";
			space cout<<"3. 11am - 12pm";
			space cout<<"4. 12pm - 1pm"<<endl;
			
			cout<<"\n\n\t\t";
			cin>>slot_input;
			if(slot_input==1){
				space cout<<"Your slot is booked for 9am - 10am";
				space cout<<"Your vaccine covishield is booked";
//					vac_cova->booking();
				flag=1;
			}
			if(slot_input==2){
				space cout<<"Your slot is booked for 9am - 10am";
				space cout<<"Your vaccine covishield is booked";
//					vac_cova->booking();
				flag=1;
			}
			if(slot_input==3){
				space cout<<"Your slot is booked for 9am - 10am";
				space cout<<"Your vaccine covishield is booked";
//					vac_cova->booking();
				flag=1;
			}
			if(slot_input==4){
				space cout<<"Your slot is booked for 9am - 10am";
				space cout<<"Your vaccine covishield is booked";
//					vac_cova->booking();
				flag=1;
			}
			
		}
	}
	else{
		space cout<<"Sorry.....No Vaccine available at moment";
	}
	
	if(flag==1){
		vac_covi->booking();
		ofstream out("covishield.txt");
		out<<to_string(vac_covi->availability());
		out.close();
		ifstream inn("covi_det.txt");
		ofstream of("temp.txt");
		ifstream user(id);
		string data;
		while(!user.eof()){
			getline(user, data);
			of<<data<<"\n";
		}
		while(!inn.eof()){
			getline(inn, data);
			of<<data<<"\n";
		}
		of.close();
		inn.close();
		user.close();
		ofstream buf("covi_det.txt");
		ifstream nxt("temp.txt");
		buf<<"\n";
		while(!nxt.eof()){
			getline(nxt, data);
			buf<<data<<"\n";
		}
		buf.close();
		nxt.close();
		int c = remove("temp.txt");
	}
	else if(flag==2){
		vac_cova->booking();
		ofstream out("covaxin.txt");
		out<<to_string(vac_cova->availability());
		out.close();
		ifstream inn("cova_det.txt");
		ofstream of("temp.txt");
		ifstream user(id);
		string data;
		while(!user.eof()){
			getline(user, data);
			of<<data<<"\n";
		}
		while(!inn.eof()){
			getline(inn, data);
			of<<data<<"\n";
		}
		of.close();
		inn.close();
		user.close();
		ofstream buf("cova_det.txt");
		ifstream nxt("temp.txt");
		buf<<"\n";
		while(!nxt.eof()){
			getline(nxt, data);
			buf<<data<<"\n";
		}
		buf.close();
		nxt.close();
		int c = remove("temp.txt");
	}
	int temp;
	space cout<<"Press any key for menu"<<endl;
	space 
	cin>>temp;
	this_thread::sleep_for(chrono::seconds(1));
	menu();	

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
	system("cls");
	space cout<<"\t1- \tPress 1 to display Patient Details of Covishield\n";
	space cout<<"\t2- \tPress 2 to display Patient Details of Covaxin\n";
	cout<<"\n\n\t\t\tEnter Choice: ";
	cin.sync();
	string s;
	getline(cin,s);
	if(s == "1")
	{
		system("cls");
		ifstream op("covi_det.txt");
		if(!op)
		{
			space cout<<"Unable to display Patient Details of Covishield";
			this_thread::sleep_for(chrono::seconds(1));
			admin_menu();
		}
		while(!op.eof())
		{
			string line;
			getline(op,line);
			cout<<"\n\t\t"<<line;
		}
		op.close();
	}
	else if(s == "2")
	{
		system("cls");
		ifstream op("cova_det.txt");
		if(!op)
		{
			space cout<<"Unable to display Patient Details of Covaxin";
			this_thread::sleep_for(chrono::seconds(1));
			admin_menu();
		}
		while(!op.eof())
		{
			string line;
			getline(op,line);
			cout<<"\n\t\t"<<line;
		}
		op.close();
	}
	else
	{
		space cout<<"Invalid Choice";
		this_thread::sleep_for(chrono::seconds(1));
		admin_menu();
	}
	space cout<<"Press any key to return: ";
	getch();
	admin_menu();
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
	string op;
	getline(cin,op);
	id = op;
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
				id = admin_id;
				id += ".txt";
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
