#include<iostream>
#include<math.h>
using namespace std;

class calc 
{
	float a,b;
	
	public:
		void enter()
		{
			cout<<"\nEnter First Number :";
			cin>>a;
			cout<<"Enter Second Number :";
			cin>>b;
		}
		
		float add()
		{
			return a+b;
		}
		
		float sub()
		{
			return a-b;
		}
		
		float mul()
		{
			return a*b;
		}	
		
		float div()
		{
			if(b==0)
			{
				cout<<"Division by zero not possible!!"<<endl;
				return INFINITY;
			}
			else
			{
				return a/b;
			}
		}
};

int main()
{
	int choice;
	calc c;
	
	cout<< "Enter 1 for Addition"<<
	       "\nEnter 2 for Subtraction"<<
	       "\nEnter 3 for Multiplication"<<
	       "\nEnter 4 for Division"<<
	       "\nEnter 0 to "<<endl;
	
	cout<<"\nEnter Your choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1 :
		c.enter();
		cout<<"Result : "<<c.add() << endl;
		break;
		
		case 2 :
		c.enter();
		cout<<"Result :"<<c.sub()<<endl;
		break;
		
		case 3 :
		c.enter();
		cout<<"\nResult :"<<c.mul()<<endl;
		break;
		
		case 4 :	
		c.enter();
		cout<<"\nResult :"<<c.div()<<endl;
		break;
		
	}
}
