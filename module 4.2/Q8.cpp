#include<iostream>
using namespace std;

double add(double n1, double n2);
double subtract(double n1, double n2);
double multiply(double n1, double n2);
double divide(double n1, double n2);


int main()
{

  double num1, num2;

  cout << "\nEnter two Numbers :: ";
  cin >> num1 >> num2;

  // addition of two number
  cout << "\nAddition = "<< add(num1, num2) << endl;

  // subtraction of two number
  cout <<"\nSubtraction = "<< subtract(num1, num2) << endl;

  // multiplication of two number
  cout << "\nMultiplication = "<< multiply(num1, num2) << endl;

  // division of two number
  cout << "\nDivision = "<< divide(num1, num2) << endl;

  return 0;
}

// function to add two numbers
double add(double n1, double n2) 
{
    return n1+n2;
}

// function to subtract two numbers
double subtract(double n1, double n2) 
{
    return n1-n2;
}

// function to multiply two numbers
double multiply(double n1, double n2) 
{
    return n1*n2;
}

// function to divide two numbers
double divide(double n1, double n2) 
{
    return n1/n2;
}
