#include<iostream>
using namespace std;
class Deteils
{
	public :
		int id;
		char name[100];
		void b_info()
		{
			cout<<"Enter Id=";
			cin>>id;
			cout<<"Enter name=";
			cin>>name;
		}
};
class Otherdeteils
{
	public :
		char company[100];
		int selery;
		char add[100];
		void o_info()
		{
			cout<<"Enter company name=";
			cin>>company;
			cout<<"Enter selery=";
			cin>>selery;
			cout<<"Enter address=";
			cin>>add;
		}
};
class Alldeteils :public Deteils,public Otherdeteils
{
	public :
		char edu[100];
		void setdata()
		{
			cout<<"Enter educational deteils=";
			cin>>edu;
			cout<<endl;
		 } 
	void getdata()
	{
		cout<<"Id ="<<id<<endl;
		cout<<"Name ="<<name<<endl;
		cout<<"Company name ="<<company<<endl;
		cout<<"Selery ="<<selery<<endl;
		cout<<"Address ="<<add<<endl;
		cout<<"Educational deteils ="<<edu<<endl;
		cout<<endl;
	}
};

main()
{
	Alldeteils a1;
	a1.b_info();
	a1.o_info();
	a1.setdata();
	a1.getdata();
}
