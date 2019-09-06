#include <iostream>

using namespace std;

int main()
{
  int a, b, c, h, triangleArea, trianglePerimeter, 
      length, width, rectangleArea, rectanglePerimeter;

  cout << "Enter the values of a, b, c, and h of your triangle (c is the base of the triangle, h is the height): ";
  cin >> a >> b >> c >> h;
  cout << "Enter the length and width of the rectangle: ";
  cin >> length >> width;

  _asm
  {
    mov eax, a;            //eax = a
    imul c;                //eax = ac
    idiv 2;                //eax = ac/2
    mov triangleArea, eax; //triangleArea = eax = ac/2

    mov eax, a;                 //eax = a
    add eax, b;                 //eax = a+b;
    add eax, c;                 //eax = a+b+c
    mov trianglePerimeter, eax; //trianglePerimeter = eax = a+b+c

    mov eax, length;        //eax = length
    imul width;             //eax = length*width
    mov rectangleArea, eax; //rectangleArea = eax = lenght*width

    mov eax, length;             //eax = length
    add eax, width;              //eax = length+width
    imul 2;                      //eax = (length+width)*2
    mov rectanglePerimeter, eax; //rectanglePerimeter = eax = (length+width)*2
  }

  cout << "Triangle\n\tArea\t" << triangleArea << "\n\tPerimeter\t" << trianglePerimeter
       << "\nRectangle\n\tArea\t" << rectangleArea << "\nPerimeter\t" << rectanglePerimeter;

  return 0;
}