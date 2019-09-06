#include <iostream>

using namespace std;

int main()
{
  int num, result; // ten = 10;

  cout << "Enter a 3-digit number: ";
  cin >> num;

  _asm
  {
    mov eax, num;
    idiv 10;
    mov ebx, edx;
    idiv 10;
    add ebx, edx;
    idiv 10;
    add ebx, edx;
  }

  cout << "The sum of the digits in " << num << is << result;

  return 0;
}