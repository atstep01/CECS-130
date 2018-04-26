#include <iostream>
#include <string>

using namespace std;

class myStrings
{
	
	// cout is an Object of class ostream that represents the standard output stream oriented to narrow characters (of type char). 
	// It corresponds to the C stream stdout.
	// ostream has the operator << defined so that we can print string sto output device.
	// << expects a string but I want to apply it directly to my new class called myStrings
	// I must override the definition of << and I have to make it a friend of my class so that it can access my insideString
	
    friend ostream& operator<<(ostream& , const myStrings& );      // This overrides the << definition in ostream 
   
    private:
        string insideString;
    public:
        myStrings();								// Zero parameter constructor
        myStrings(string);							// A constructor with a parameter
		myStrings operator+( const myStrings&);		// Define a new operator to be able to add two strings (This is not an overriding)
};

myStrings::myStrings()
{
    insideString = "";		//this constructor makes my insideString empty
}

myStrings::myStrings( string newString )
{
    insideString = newString;
}

myStrings myStrings::operator+( const myStrings& rhs)
{
	
	// get the insideString then append the insideString or rhs
	// use this longer string to create a new instance of myStrings 
	
	myStrings newStrings(this->insideString.append(rhs.insideString));   
    return newStrings;
}


ostream& operator<<( ostream& ostr, const myStrings& z)
{
    return ostr << z.insideString;
}

int main()
{
    myStrings fName("Ibrahim");
    myStrings lName("Imam");
    cout << fName << endl;                     // Notice the new definition of << makes it extracy the insideString and pipe it to console
	cout << lName << endl;
    myStrings fullName = fName + myStrings(" ") + lName;     // myStrings unserstands +
    
    cout << fullName << endl;
    
    return 0;
}
