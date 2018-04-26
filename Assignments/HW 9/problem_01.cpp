/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/* Assignment 08   */
/*******************/

#include <iostream>
#include<cmath>
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
		
		Vector(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
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
		
		void printVector()
		{
			cout << "(" << x << "," << y << "," << z << ")" << " Length: " << getLength() << endl;
		}
		
		double getLength()
		{
			return (double) pow(pow(x,2)+pow(y,2)+pow(z,2),0.5);
		}
		
		Vector operator+(const Vector& vTwo)
		{
			Vector sum = Vector((this->x + vTwo.x),(this->y + vTwo.y),(this->z + vTwo.z));
			return sum;
		}
		
		bool operator==(Vector& vTwo)
		{
			if(abs(getLength() - vTwo.getLength()) < 0.000000000001)
			{
				return true;
				
			}
			else
			{
				return false;
				
			}
		}
};

int main()
{
	cout << "Create two vectors and print them" << endl;
	Vector one = Vector(1,2,3);
	Vector two = Vector(1,2,3);
	one.printVector();
	two.printVector();
	
	cout << "\nCompare vector one and vector two." << endl;
	if(one == two)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	cout <<"\nAdd the two vectors" << endl;
	Vector three = one + two;
	three.printVector();
	
	cout << "\nCompare vector one and the sum." << endl;
	if(one == three)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	return 0;
}
