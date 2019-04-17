#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class Student
{
	private: string name;
			 long ID;
			 double mathMark, engMark, physMark, chemMark;
	public: Student(string name, long ID)
	{
		this->name = name;
		this->ID = ID;
	}
			 void setMathMark(double mar)
	{
		if (mar > 0 && mar < 100)
		mathMark = mar;
	}
			 void setEngMark(double mar)
	{
		if (mar > 0 && mar < 100)
		engMark = mar;
	}
			 void setPhysMark (double mar)
	{
		if (mar > 0 && mar < 100)
		physMark = mar;
	}
		 void setChemMark (double mar)
	{
		if (mar > 0 && mar < 100)
		chemMark = mar;
	}
	public: double getAverage()
	{
		 double result ;
		 result = (mathMark+engMark+physMark+chemMark)/4;
		 return result;
	}
	public: void displayDetails()
	{
		cout << "Name: " << name << endl;
		cout << "ID: " << ID << endl;
		cout << "Average: "  << getAverage();
	}
};
	int main ()
	{
		Student std ("Huy",123123123);
		std.setMathMark(8.5);
		std.setEngMark(9);
		std.setPhysMark(9.5);
		std.setChemMark(8);
		std.displayDetails();
	}


