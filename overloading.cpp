#include <iostream>
using namespace std;
class area
{
	public:
	static int getarea(int a)
	 {
	 	return a*a;
	 }
	 static int getarea(int a,int b)
	 {
	 	return a*b;
	 }
	 static double getarea(double a)
	 {
	 	return a*a*3.14;
	 }
};
int main()
{
	area a1;
	cout<<"area of square is :"<<a1.getarea(4)<<endl;
	cout<<"area of rectangle is :"<<a1.getarea(5 ,6)<<endl;
	cout<<"area of cirlce is :"<<a1.getarea(3.0)<<endl;
}
