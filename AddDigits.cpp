#include <iostream>

using namespace std;

int main()
{
	int num, result, ten = 10, one = 1;

	cout << "Enter a 3-digit number: ";
	cin >> num;

	_asm
	{
		mov eax, num;    //eax = num
		cdq;             //edx:eax = num
		idiv ten;        //eax = num/10 & edx = num%10
		mov ebx, edx;    //ebx = ones digit
		cdq;             //edx:eax = num/10
		idiv ten;        //eax = num/100 & edx = num/10%10
		add ebx, edx;    //ebx = ones digit + tens digit
		cdq;             //edx:eax = num
		idiv ten;        //eax = num/1000 & edx = num/10/10%10
		add ebx, edx;    //ebx = ones digit + tens digit + hundreds digit
		mov result, ebx; //store in result
	}

	cout << "The sum of the digits in " << num << " is " << result;

	return 0;
}
