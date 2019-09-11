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
		//calculate the cost of drinks
		mov ax, drinks;     //ax = drinks (amount of drinks)
		imul drinkCost;     //ax *= drinkCost (cost for drinks)
		mov total, ax;      //total = ax (move cost of drinks to total)

		//calculate the cost of sandwiches
		mov ax, sandwiches; //ax = sandwiches (amount of sandwiches)
		imul sandwichCost;  //ax *= sandwichCost (cost for sandwiches)
		add total, ax;      //total += ax (add cost of sandwiches onto total)
	}

	//display the result
	cout << "Your total bill: $" << total << endl;

	return 0;
}