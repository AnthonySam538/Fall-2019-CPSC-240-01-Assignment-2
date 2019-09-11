#include <iostream>

using namespace std;

int main()
{
	short fahrenheit, celsius, five = 5, nine = 9;

	//get fahrenheit
	cout << "Enter temperature in Fahrenheit: ";
	cin >> fahrenheit;

	//perform calculations in assembly
	_asm
	{
		mov ax, fahrenheit; //ax = fahrenheit
		sub ax, 32;         //ax = fahrenheit-32
		imul five;          //ax = 5(fahrenheit-32)
		idiv nine;          //ax = 5(fahrenheit-32)/9
		mov celsius, ax;    //celsius = ax = 5(fahrenheit-32)/9
	}

	//display result
	cout << fahrenheit << ' ' << (char)167 << "F is " << celsius << ' ' << (char)167 << 'C';

	return 0;
}
