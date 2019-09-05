#include <iostream>

using namespace std;

int main()
{
	// declare necessary variables
	short drinks, sandwiches, drinkCost = 2, sandwichCost = 4, total;

	// ask how many drinks and sandwiches the user wants
	cout << "How many drinks? ";
	cin >> drinks;
	cout << "How many sandwiches? ";
	cin >> sandwiches;

	//perform calculations in assembly language
	_asm
	{
		mov ax, drinks;     //ax = drinks (amount of drinks)
		imul drinkCost;     //ax *= drinkCost (cost for drinks)
		mov bx, ax;         //bx = ax (cost for drinks moved to the bx register)
		mov ax, sandwiches; //ax = sandwiches (amount of sandwiches)
		imul sandwichCost;  //ax *= sandwichCost (cost for sandwiches)
		add ax, bx;         //ax += bx (add cost for drinks and cost for sandwiches)
		mov total, ax;      //total = ax (move contents of ax register to total)
	}

	//display the result
	cout << "Your total bill: $" << total << endl;

	return 0;
}