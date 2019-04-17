#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
	private:
	       double length,width;
	public:
	  Rectangle(double l, double w)
	  {
	  	length = l;
	  	width = w;
	  }
	  double area()
	  {
	  	return length*width;
	  }
	 
};

main()
 {
 	Rectangle rec(6,5);
	 cout<<"the area of rectangle is:"<<rec.area();
 
	
}
