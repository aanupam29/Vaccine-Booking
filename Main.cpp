#include<bits/stdc++.h>
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
};