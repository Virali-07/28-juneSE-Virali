#include<iostream>
using namespace std;

class cricketer
{
	int trun;
	char bestp[20];

	int avg_run;
	void calcavg()
	{
		avg_run=trun/20;
	}
public :
	void readdata ();
	void displaydata();
};
void cricketer::readdata ()
{
	cout<<"Enter Total runs : ";
	cin>> trun;
	cout<<"Enter Best Performers Name : ";
	cin>>bestp;
	
	calcavg();
}
void cricketer::displaydata()
{
	cout<<"\n\n----------Display Data----------\n\n"<<endl;
	cout<<"total run - "<<trun<<"\nBest Performers Name - "<<bestp<<"\nAverage Run - "<<avg_run;
}
int main()
{
	cricketer obj;
	obj.readdata();
	obj.displaydata();
	
	return 0;
}
