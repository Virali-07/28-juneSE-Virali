#include<iostream>
using namespace std;


class Bank
{

public:
char name[20];
char account_type[20];
int account_number;
int balance;

void initialize()
{
cout<<"\nEnter Account Holders Name:";
gets(name);
cout<<"\nEnter Account type:";
gets(account_type);
cout<<"\nEnter account number:";
cin>>account_number;
cout<<"\nEnter balance to deposit:";
cin>>balance;
}


void deposit()
{
int bal;
cout<<"\nEnter the amout to deposit:";
cin>>bal;
balance+=bal;
cout<<"\nAmount deposited successfuly!!\nYour New Balance:"<<balance;
}

//check() function to withdraw amount and check remaining balance

void check()
{
int bal;
cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
cin>>bal;
if(bal<=balance)
{
balance-=bal;
cout<<"\nRemaining Balance:"<<balance;
}
else
{
exit(0);
}
}

//cout<<"----------user information----------";

void display()
{
cout<<"\nName :";
puts(name);
cout<<"\nBalance :"<<balance;
}
};

int main()
{
int i;


//An array of objects of Bank class can be created to handle 10 customers and their data
//as Bank bk[10];

Bank bk;
bk.initialize();
bk.name;
cout<<"\n1. Your Information"<<endl<<"\n2. Deposit"<<endl<<"\n3. Withdraw"<<endl;
cout<<"\nEnter your choice\n";
cin>>i;

//if(i==1)
//{
bk.display();
//}
//else if(i==2)
//{
bk.deposit();
//}
//else if(i==3)
//{
bk.check();
//}

}

