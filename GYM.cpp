#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;
struct date{
	int date;
	int month;
	int year;
	
}d[2];
int dt,m,y,td;
int height;
int weight;
class gym{
	public:
	string name;
	int id;
	string m_type;
    string s_time;
	string e_time;
	static int a_mship;
	
	gym(){
	}
	gym(string n,int i,string mt){
		name=n;
		id=i;
		m_type=mt;
	}
	void display(){
		cout<<"Name:"<<name;
		cout<<"\nId:"<<id;
		cout<<"\nMembership typ:"<<m_type;
		cout<<"\nStarting time(dd/mm/yy):"<<d[0].date;
		cout<<"/"<<d[0].month;
		cout<<"/"<<d[0].year;
	    cout<<"\nEnding time(dd/mm/yy):"<<d[1].date;
	    cout<<"/"<<d[1].month;
	    cout<<"/"<<d[1].year;
		cout<<"\nActive membership:"<<a_mship;
		if(dt==0 && m==0){
			cout<<"\nDuration: "<<td<<" years";
		}
		else if(y==0){
		cout<<"\nDuration: "<<dt;
		cout<<"/"<<m;
		cout<<"/"<<d[1].year;
	}
	   else if(dt!=0 && m==0){
			cout<<"\nDuration: "<<m<<" month and"<<td<<" years";
		}
		else{
		cout<<"\nDuration: "<<dt;
		cout<<"/"<<m;
		cout<<"/"<<y;
	}}
	static void BMI(){
		cout<<"Person's BMI:"<<weight/pow(height,2);
	}
	void checkin(){
		string name1;
		int id1;
		cout<<"\nEnter name:";
		cin>>name1;
		cout<<"Enter id:";
		cin>>id1;
		if(name1==name && id1==id){
			cout<<"\n***********You have successfully checked in************!";
		}
		else{
		    cout<<"\nSorry you are not the member of gym";
		}
	}
	void checkout(){
	    cout<<"\nYou have successfully checked out.";
	}
};

int gym::a_mship=0;
int main(){
	int c,dy,id,v;
	gym g;
	string name,m_type;
	
	cout<<" -------------------------------\n";
	cout<<"|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|   *****WELCOME TO GYM*****    |\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n";
	cout<<" -------------------------------\n";
	do{
	cout<<"\nEnter your information to get registered!";
	cout<<"\nEnter name:";
	cin>>name;
	g.name=name;
	cout<<"Enter id:";
	cin>>id;
	g.id=id;
	cout<<"Enter membership type:";
	cin>>m_type;g.m_type=m_type;
	cout<<"Enter height:";
	cin>>height;
	cout<<"Enter weight:";
	cin>>weight;
	cout<<"Enter starting date (dd/mm/yy):";
	cin>>d[0].date;
	cin>>d[0].month;
	cin>>d[0].year;
	fflush(stdin);
	cout<<"Enter ending date (dd/mm/yy):";
	cin>>d[1].date;
	cin>>d[1].month;
	cin>>d[1].year;
	g.a_mship++;
	gym g1(name,id,m_type);
	dt =abs(d[0].date-d[1].date);
	m= abs(d[0].month-d[1].month);
	y=abs(d[0].year-d[1].year);
	td=dt+m+y;
	do{
     cout<<"\nEnter\n1-To check in\n2-To display information\n3-To check BMI\n4-To check out";
     cin>>c;
     if(c==3){
	cout<<"*********************BMI*********************\n";
	g.BMI();}
    if(c==2){
	cout<<"\nINFORMATIONN DISPLAYING\n";
	g.display();}
	if(c==1){
	g.checkin();}
	if(c==4){
	g.checkout();}
	cout<<"\nDo you want to see the information again?\nEnter 1 to yes and 0 to No:";
	cin>>v;}while(v==1);
	cout<<"\nDo you want to register again?\nEnter 1 to register again and 0 to terminate:";
	cin>>dy;}while(dy==1);
	
}
