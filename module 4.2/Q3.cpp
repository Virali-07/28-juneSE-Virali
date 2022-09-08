#include<iostream>
using namespace std;
  
class line
{
   public:
              inline float mul(float x,float y)
              {
                            return(x*y);
              }
              inline float cube(float x)
              {
                            return(x*x*x);
              }
};
 
int main()
{
              line obj;
              float val1,val2;
              
              cout<<"Enter value 1: ";
              cin>>val1;
              
              cout<<"\nEnter value 2: ";
			  cin>>val2;
              
              cout<<"\n\nMultiplication value is: "<<obj.mul(val1,val2)<<endl;
              
              cout<<"\nCube value for number 1 is: "<<obj.cube(val1)<<endl<<"\n\nCube value for number 2 is: "<<obj.cube(val2)<<endl;
              
}
