#include <iostream>

using namespace std;

// Class Used to represent a room, its attributes, and methods
class Room
{
	// Private Variables for Length, Width, Height
private:
	double length; 
	double width;
	double height;
public:
	//Constructor with 3 distinct parameters using initialization list
	Room( double myLength, double myWidth, double myHeight) : length(myLength), width(myWidth), height(myHeight)
	{
		cout << "New Room Created" << endl;
	} 
	//Set the Length, Width, Height
	void setLength( double);
	void setWidth( double );
	void setHeight( double ); 
	
	//Get the Length, Width, Height
	double getLength();
	double getWidth();
	double getHeight(); 
	       
	//Show all 3 dimensions for a room
	void printRoomDim();  
	
	//Set all 3 dimensions for a room
	void setRoomDim( double, double, double);  
	
	//Calculate Area, Surface Area
	double floorArea();
	double surfaceArea();
             
};      

//Set the Length
void Room::setLength( double myLength)
{
	length = myLength;
}

//Set the Width
void Room::setWidth( double myWidth)
{
	width = myWidth;
}

//Set the Height
void Room::setHeight( double myHeight)
{
	height = myHeight;
}
     
//Get the Length
double Room::getLength()
{
	return length;
}

//Get the Width
double Room::getWidth()
{
	return width;
}

//Get the Height
double Room::getHeight()
{
	return height;
}

//Calculate the floorArea
double Room::floorArea()
{
	return length*width;
}


//Calculate the Surface Area
double Room::surfaceArea()
{
	return 2*floorArea()+ 2*height*width+ 2*height*length;
}

//Show all three room dimensions
void Room::printRoomDim()
{
	cout << "The room dimensions are: " << endl;
	cout << "Length = "<< getLength() << endl;
	cout << "Width  = " << getWidth() << endl;
	cout << "Height = " << getHeight() << endl;
}

//Set all three room dimensions
void Room::setRoomDim( double len, double wid, double hght)
{
	setLength( len);
	setWidth(wid);
	setHeight(hght);
}

//Main 
int main()
{
	//Create a living room
	cout << "Make a living room" << endl;
	Room livingRoom = Room(20,10,8);
	//Show dimensions
	livingRoom.printRoomDim();
	
	cout << "My room changes dimesions" << endl;
	//Individually change the dimensions
	livingRoom.setLength(11.4);
	livingRoom.setWidth(34.2);
	livingRoom.setHeight(12.1);
	//Individually print the values
	cout << "Checking the changes" << endl;
	cout << "Length = " << livingRoom.getLength() << endl;
	cout << "Width  = " << livingRoom.getWidth() << endl;
	cout << "Height = " << livingRoom.getHeight() << endl;
	
	cout << "Checking the dimensions again" << endl;
	//Print the values all at once
	livingRoom.printRoomDim();
    
    
	//Print the area
	cout << "Floor Area " << endl;
	cout << "Floor Area of Living Room = " <<livingRoom.floorArea() << endl;
    
    
	//Print the surface area
	cout << "Surface Area " << endl;
	cout << "Surface area of Living Room = "<< livingRoom.surfaceArea() << endl;
    
	return 0;
}
