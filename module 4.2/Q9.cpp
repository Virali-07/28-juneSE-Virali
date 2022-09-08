#include<iostream>
using namespace std;

class Matrix
{
        int a[1][1];
    public:
        void accept();
        void display();
        void operator +(Matrix x);
};
void Matrix::accept()
{
        cout<<"\n Enter Matrix Element (1 X 1) : \n";
        for(int i=0; i<=1; i++)
        {
                for(int j=0; j<=1; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<=1; i++)
        {
                cout<<" ";
                for(int j=0; j<=1; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[1][1];
        for(int i=0; i<=1; i++)
        {
                for(int j=0; j<=1; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<=1; i++)
        {
                cout<<" ";
                for(int j=0; j<=1; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        Matrix m,n;
        m.accept();       
        n.accept();      
        cout<<"\n First Matrix : \n\n";
        m.display();   
        cout<<"\n Second Matrix : \n\n";
        n.display(); 
        m+n;        
        return 0;
}
