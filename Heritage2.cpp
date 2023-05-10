#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
	public :
		char name[100];
		int age;
		void set_value(int age ,char name[])
		{
		   this->age=age;
		   strcpy(this->name,name);
		}
};
class Zebra :public Animal
{
	public :
	
		void z_info()
		{
			cout<<"Name of animal="<<name<<endl;
			cout<<"Age of Animal="<<age<<endl;
			cout<<"Most of Zebra`s can be seen in Africa."<<endl;
			
		}
};
class Dolphin :public Animal
{
	public :
	
	void d_info()
	{
		cout<<"Name of animal="<<name<<endl;
		cout<<"Age of animal="<<age <<endl;
		cout<<"Maximmum number of Dolphins can be seen in Atlantic Ocean."<<endl;
	}
};
main()
{
	Zebra z1;
	Dolphin d1;
	
	
   
    z1.set_value(45,"Mahi"); 
	 cout<<endl;
    d1.set_value(50,"Maya");
    cout<<endl;
    
    z1.z_info();
    cout<<endl;
    d1.d_info();
    
}
