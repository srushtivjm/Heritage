#include<iostream>
using namespace std;

class Mother
{
	public :
	void display()
	{
		cout<<"Happy birthday."<<endl;
	}
};
class Daughter :public Mother
{
	public :
	void display()
	{
		cout<<"Thank you mom."<<endl;
	}
};
main()
{
	Daughter d1;
	d1.display();
	
}
