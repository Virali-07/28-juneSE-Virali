#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
		void setPerson(int a, string n){
			name = n;
			age = a;
		}
		void displayPerson(){
			cout<<"Name:  "<<name<<endl;
			cout<<"Age:    "<<age<<endl;
		}
		
	
};
class Student: Person{
	private:
		float percentage;
	public:
		void setStudent(string n, int a, float p){
			percentage = p;
			setPerson(a,n);
		}
		void displayStudent(){
			cout<<"\nStudent details are: \n";
			displayPerson();
			cout<<"Prcentage is: "<<percentage<<endl;
		}
};
class  Teacher: Person{
	private:
		float salary;
	public:
		void setTeacher(string n, int a, float s){
			salary = s;
			setPerson(a,n);
		}
		void displayTeacher(){
			cout<<"\nTeachers details are: \n";
			displayPerson();
			cout<<"Salary:  "<<salary<<endl;
		}
};


int main(){
	Student s;
	s.setStudent("Veera", 12,80);
	s.displayStudent();
	Teacher t;
	t.setTeacher("Heena", 15, 9000.98);
	t.displayTeacher();
}
