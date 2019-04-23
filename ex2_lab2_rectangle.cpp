#include <iostream>
#include <conio.h>
using namespace std;
class rectangle
{
	private: static double width,height;
	public:
		rectangle(double x,double y);
		double perimeter();
		double area();
};
  main()
{
	rectangle rec1(5,6);
	rectangle rec2(7,8);
	cout<<"Area of rectangle 1 is: "<<rec1.area();
	cout<<"\nPerimeter of rectangle 1 is: "<<rec1.perimeter();
	cout<<"\nArea of rectangle 2 is: "<<rec2.area();
	cout<<"\nPerimeter of rectangle 2 is: "<<rec2.perimeter();
getch();
}
	double rectangle::height;
	double rectangle::width;
	double rectangle::perimeter()
	 {
	 	return width+height;
	 }
	double rectangle::area()
	 {
	 	return width*height;
	 }
	rectangle::rectangle(double x,double y)
	{
		width = x;
		height = y;
	}
