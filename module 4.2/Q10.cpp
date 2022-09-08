#include <iostream>
#include <string.h>
using namespace std;
 
class AddString {
 
public:
    // Classes object of string
    char s1[25], s2[25];
 

    AddString(char str1[], char str2[])
    {
        // Initialize the string to class object
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
 
    // Overload Operator+ to concat the string
    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
 

int main()
{
    // Declaring two strings
    char str1[] = "Tops";
    char str2[] = " Technologies";
 
    
    AddString a1(str1, str2);
 
   
    +a1;
    return 0;
}
