#include <iostream>

using namespace std;

int main()
{
	int a, b, c, h, triangleArea, trianglePerimeter, l, w, rectangleArea, rectanglePerimeter, two = 2;

	//get values
	cout << "Enter the values of a, b, c, and h of your triangle (c is the base of the triangle, h is the height): ";
	cin >> a >> b >> c >> h;
	cout << "Enter the length and width of the rectangle: ";
	cin >> l >> w;

	//perform calculations in assembly
	_asm
	{
		//triangleArea
		mov eax, c;            //eax = c
		imul h;                //eax = ch
		idiv two;              //eax = ch/2
		mov triangleArea, eax; //triangleArea = eax = ch/2

		//trianglePerimeter
		mov eax, a;                 //eax = a
		add eax, b;                 //eax = a+b
		add eax, c;                 //eax = a+b+c
		mov trianglePerimeter, eax; //trianglePerimeter = eax = a+b+c

		//rectangleArea
		mov eax, l;        //eax = length
		imul w;             //eax = length*width
		mov rectangleArea, eax; //rectangleArea = eax = length*width

		//rectanglePerimeter
		mov eax, l;             //eax = length
		add eax, w;              //eax = length+width
		imul two;                    //eax = (length+width)*2
		mov rectanglePerimeter, eax; //rectanglePerimeter = eax = (length+width)*2
	}

	//display results
	cout << "\nTriangle\n\tArea............" << triangleArea << "\n\tPerimeter......." << trianglePerimeter
		 << "\nRectangle\n\tArea............" << rectangleArea << "\n\tPerimeter......." << rectanglePerimeter;

	return 0;
}
