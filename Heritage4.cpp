#include<iostream>
using namespace std;
class A
{
	public :
		int id;
		char name[10];
		char role[15];
		int salary;
		char experience[100];
		char comp_name[100];
		char add[100];
		char email[100];
		char contact[10];
		
		void set()
		{
			cout<<"Enter Id =";
			cin>>id;
			cout<<"Enter name =";
			cin>>name;
			cout<<"Enter role =";
			cin>>role;
		}
};
class B :public A
{
	public :
	void satdata()
	{
		cout<<"Enter salary =";
		cin>>salary;
		cout<<"Enter eaperience =";
		cin>>experience;
	}
};
class C : public B
{
	public :
	void get()
	{
		cout<<"Name ="<<name<<endl;
		cout<<"Role ="<<role<<endl;
		cout<<"Salary ="<<salary<<endl;
	}
	void print()
	{
		cout<<"Enter company name =";
		cin>>comp_name;
		cout<<"Enter address =";
		cin>>add;
	}
};
class D :public C
{
	public :
		void set_Data()
		{
			cout<<"Enter email =";
			cin>>email;
			cout<<"Enter contact number =";
			cin>>contact;
			cout<<endl;
		}
		void getdata()
		{
			cout<<"Id ="<<id<<endl;
			get ();
			cout<<"Experience ="<<experience<<endl;
			cout<<"Company name ="<<comp_name<<endl;
			cout<<"Address ="<<add<<endl;
			cout<<"Email ="<<email<<endl;
			cout<<"Contact numbre ="<<contact<<endl;
		}
};
main()
{
	D d1;
	d1.set();
	d1.satdata();
	d1.print();
	d1.set_Data();
	d1.getdata();
}

