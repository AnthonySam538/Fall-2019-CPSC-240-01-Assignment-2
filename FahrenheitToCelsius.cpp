#include <iostream>

using namespace std;

int main()
{
  short fahrenheit, celsius;

  cout << "Enter temperature in Fahrenheit: ";
  cin >> fahrenheit;

  _asm
  {
    mov eax, fahrenheit; //eax = fahrenheit
    sub eax, 32;         //eax = fahrenheit-32
    imul 5;              //eax = 5(fahrenheit-32)
    idiv 9;              //eax = 5(fahrenheit-32)/9
    mov celsius, eax;    //celsius = eax = 5(fahrenheit-32)/9
  }

  cout << fahrenheit << ' ' << (char)167 << "F is " << celsius << ' ' << (char)167 << 'C'; //how's º or ⁰?

  return 0;
}