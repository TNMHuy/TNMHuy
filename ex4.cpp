#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Point3D
{
	private: double x,y,z;
	public:
	 Point3D(double x,double y,double z)
	{
		this->x=x;
		this->y=y;
		this->z=z;
	}
		 double distanceFromCenter()
	{
		return distanceFrom(0,0,0);
	}
		 double distanceFrom(Point3D other)
	{
		return sqrt (pow(x-other.x,2)+
		pow(y-other.y,2)+
		pow(z-other.z,2));
	}
		 double distanceFrom(double xVal,double yVal, double zVal)
	{
		if (xVal > 0)
		{
			x = xVal;
		}
		if (yVal>0)
		{
			y = yVal;
		}
		if (zVal>0)
		{
			z = zVal;
		}
	}
	 void details()
	{
		cout<< " x = " << x << " y = " << y << " z = " << z <<endl;
 	}
 };
 	int main()
 	{
 		Point3D point1 (1,5,3);
 		Point3D point2 (2,6,4);
 		cout << "point1:";
 		point1.details();
 		cout << "point2:";
 		point2.details();
 		cout << "The distance between point1 and center is : " << point1.distanceFromCenter() << endl;
 		cout << "The distance between point1 and point2 is: " << point1.distanceFrom(point2);
 	}

	
	
		
	

