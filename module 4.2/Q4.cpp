#include <iostream>
using namespace std;

class Addition
{
private:
    float c;

public:
    Addition(float a, float b);
};

Addition::Addition(float a, float b)
{
    c = a + b;
    cout << "\nAddition:- "<<a<<" + "<<b<<" = "<< c << endl;
}

class Subtraction
{
private:
    float c;

public:
    Subtraction(float a, float b);
};

Subtraction::Subtraction(float a, float b)
{
    c = a - b;
   cout << "Subtraction:- "<<a<<" - "<<b<<" = "<< c << endl;
}

class Multiplication
{
private:
    float c;

public:
    Multiplication(float a, float b);
};

Multiplication::Multiplication(float a, float b)
{
    c = a * b;
   cout << "Multiplication:- "<<a<<" X "<<b<<" = "<< c << endl;
}

class Division
{
private:
    float c;

public:
    Division(float a, float b);
};

Division::Division(float a, float b)
{
    c = a / b;
   cout << "Division:- "<<a<<" / "<<b<<" = "<< c << endl;
}

int main()
{
    
    float x, y;
    cout << "Enter 2 numbers:-\n";
    cin >> x >> y;

    Addition add(x, y);
    cout<<endl;
    Subtraction sub(x, y);
    cout<<endl;
    Multiplication mult(x, y);
    cout<<endl;
    Division div(x, y);

   
}


