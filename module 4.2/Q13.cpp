#include<iostream>
using namespace std;
 
class a;
 
class b
{
    int number;
    public:
    b(int x)
    {
        number=x;
    }
    void friend max(a a1,b b1);
};
 
class a
{
    int number;
    public:
    a(int x)
    {
        number=x;
    }
    void friend max(a a1,b b1);
};
 
void max(a a1,b b1)
{
    if(a1.number>b1.number)
    {
        cout<<"\n Max Number in class A i.e. "<<a1.number;
    }
    else if(a1.number<b1.number)
    {
        cout<<"\n Max Number in class B i.e. "<<b1.number;
    }
    else
    {
        cout<<"\n Number in both classes are equal";
    }
}
 
int main()
{
    int num;
 
    cout<<"\n\n Enter number for class A - ";
    cin>>num;
    a a1(num);
 
    cout<<"\n Enter number for class B - ";
    cin>>num;
    b b1(num);
 
    max(a1,b1);
    cout<<"\n";
 
    return 0;
}
