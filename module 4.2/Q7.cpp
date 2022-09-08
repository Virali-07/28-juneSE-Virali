#include<iostream>
using namespace std;
 
class Student
{
    protected:
        int roll;
};
 
class Test:virtual public Student
{
    protected:
        int marks1,marks2;
        Test(int m1,int m2): marks1(m1),marks2(m2) {}   
        void show()
        {
            cout<<"The marks are "<<marks1<<" & "<<marks2<<endl;
        }
};
 

 
class Result:public Test
{
    public:
    Result(int r,int m1,int m2) : Test(m1,m2)
    {
        roll = r;   
    }
    void show()
    {
        cout<<"Roll Number : "<<roll<<endl;
        Test::show();
        
        cout<<"Total Marks : "<<marks1+marks2<<endl;
    }
};
 
int main()
{   
    Result *r = new Result(4,90,95);
    r->show();
    return 0;   
}
