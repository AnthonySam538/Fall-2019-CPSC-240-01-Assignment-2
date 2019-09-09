#include <iostream>

using namespace std;

int main()
{
	int a, b, c, h, triangleArea, trianglePerimeter, l, w, rectangleArea, rectanglePerimeter, two = 2;

	cout << "Enter the values of a, b, c, and h of your triangle (c is the base of the triangle, h is the height): ";
	cin >> a >> b >> c >> h;
	cout << "Enter the length and width of the rectangle: ";
	cin >> l >> w;

	_asm
	{
		mov eax, c;            //eax = c
		imul h;                //eax = ch
		idiv two;              //eax = ch/2
		mov triangleArea, eax; //triangleArea = eax = ch/2

		mov eax, a;                 //eax = a
		add eax, b;                 //eax = a+b
		add eax, c;                 //eax = a+b+c
		mov trianglePerimeter, eax; //trianglePerimeter = eax = a+b+c

		mov eax, l;        //eax = length
		imul w;             //eax = length*width
		mov rectangleArea, eax; //rectangleArea = eax = length*width

		mov eax, l;             //eax = length
		add eax, w;              //eax = length+width
		imul two;                    //eax = (length+width)*2
		mov rectanglePerimeter, eax; //rectanglePerimeter = eax = (length+width)*2
	}

	cout << "\nTriangle\n\tArea............" << triangleArea << "\n\tPerimeter......." << trianglePerimeter
		 << "\nRectangle\n\tArea............" << rectangleArea << "\n\tPerimeter......." << rectanglePerimeter;

	return 0;
}
