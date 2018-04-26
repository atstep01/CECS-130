/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 10         */
/*******************/

#include <iostream>
using namespace std;

class Room
{
	private:
		double length;
		double width;
		double height;
	public:
		
	Room( double myLength, double myWidth, double myHeight) 
	{
		length = myLength;
		width = myWidth;
		height = myHeight;
		cout << "New Room Created" << endl;
	} 
	
	double getLength()
	{
		return length;
	}
	double getWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}
	
	void setLength( double l)
	{
		length = l;
	}
	void setWidth( double w)
	{
		width = w;
	}
	void setHeight( double h) 
	{
		height = h;
	}       
	
	void printRoomDim()
	{
		cout << "The dimensions of the room are (" << length << "," << width << "," << height << ")" << endl;
	}
	void printVolume()
	{
		cout << "The volume of the room is " << length * width * height << endl;
	}
	
	
	void setRoomDim( double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
	}  
	
	
	double floorArea()
	{
		return length * width;
	}
	double surfaceArea()
	{
		return ((2 * length * width) * (2 * length * height) * (2 * width * height));
	}
	double volume()
	{
		return length * width * height;
	}
             
};  
int main()
{
	
	cout << "Make a play room" << endl;
	Room playRoom = Room(10,5,8);
	
	playRoom.printRoomDim();
	
	cout << "My room changes dimesions" << endl;
	
	playRoom.setLength(20);
	playRoom.setWidth(10);
	playRoom.setHeight(12);
	
	cout << "Checking the changes" << endl;
	cout << "Length = " << playRoom.getLength() << endl;
	cout << "Width  = " << playRoom.getWidth() << endl;
	cout << "Height = " << playRoom.getHeight() << endl;
	
	cout << "Checking the dimensions again" << endl;
	
	playRoom.printRoomDim();
    
    
	
	cout << "Floor Area " << endl;
	cout << "Floor Area of Play Room = " <<playRoom.floorArea() << endl;
    
    
	
	cout << "Surface Area " << endl;
	cout << "Surface area of Play Room = "<< playRoom.surfaceArea() << endl;
	
	cout << "Volume " << endl;
	cout << "Volume of LPlay Room = " <<playRoom.floorArea() << endl;
    
	return 0;    
}
