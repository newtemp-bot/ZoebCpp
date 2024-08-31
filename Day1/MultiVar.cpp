#include <iostream>
using namespace std;
int main()
{
	/*
		All C++ variables must be identified with unique names.
		These unique names are called identifiers.
		Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
		Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
		Names can contain letters, digits and underscores
		Names must begin with a letter or an underscore (_)
		Names are case-sensitive (myVar and myvar are different variables)
		Names cannot contain whitespaces or special characters like !, #, %, etc.
		Reserved words (like C++ keywords, such as int) cannot be used as names
	*/
	int a=10,b=10;
	int c=a+b;
	int x, y, z;
	x = y = z = 50;
	cout << x + y + z<<endl;
	cout<<"Your A and B sum is = "<<c<<endl;
	const int minutesPerHour = 60;
	const float PI = 3.14;
	cout<<"MinutesPerHour = "<<minutesPerHour<<endl;
	cout<<"PI = "<<PI<<endl;
}
