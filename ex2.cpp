#include <iostream>
#include <conio.h>
using namespace std;
class Cube
{
	private: double edge;
	public:
		Cube(double x)
		{
			edge = x;
		}
		Volume()
		{
			return edge*edge*edge;
		}
		
};
int main()
{
	Cube cub1(3);
	Cube cub2(6);
	cout<<"the volume of cube1 is:"<<cub1.Volume();
	cout<<"\nthe volume of cube2 is:"<<cub2.Volume();
	
}
