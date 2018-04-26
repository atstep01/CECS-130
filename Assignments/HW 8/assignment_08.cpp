/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/* Assignment 08   */
/*******************/

#include <iostream>
using namespace std;

class Vector
{
	private:
		int x;
		int y;
		int z;
	public:
		
		Vector()
		{
			x, y, z = 0;
			cout << "New Vector Created." << endl;;
		}
		
		int getX()
		{
			return x;
		}
		
		int getY()
		{
			return y;
		}
		
		int getZ()
		{
			return z;
		}
		
		int setX(int i)
		{
			x = i;
		}
		
		int setY(int i)
		{
			y = i;
		}
		
		int setZ(int i)
		{
			z = i;
		}
		
		void add(Vector v)
		{
			x += v.getX();
			y += v.getY();
			z += v.getZ();
		}
		
		void printVector()
		{
			cout << "(" << x << "," << y << "," << z << ")" << endl;
		}
};

int main()
{
	cout << "Create a vector" << endl;
	Vector one = Vector();
	
	cout << "Initializes instances to zero" << endl;
	one.printVector();
	
	cout <<"Change the vectors instances" << endl;
	one.setX(5);
	one.setY(6);
	one.setZ(8);
	one.printVector();
	
	cout << "Create a second vector and change its instances" << endl;
	Vector two = Vector();
	two.setX(8);
	two.setY(9);
	two.setZ(10);
	two.printVector();
	
	cout << "Add the second vector to the first and print the first vector" << endl;
	one.add(two);
	one.printVector();
	
	return 0;
}
