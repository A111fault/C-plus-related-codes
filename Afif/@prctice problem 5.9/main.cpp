#include <iostream>

using namespace std;

int main()
{
   int number, reversed = 0, x;

	cout << "Enter an integer: ";
	cin >> number;

	while (number != 0)
	{
		x = number % 10;
		reversed = reversed * 10 + x;
		number /= 10;
	}

	while (reversed != 0)
	{
		cout << reversed % 10 << endl;
		reversed /= 10;
	}

    return 0;
}
