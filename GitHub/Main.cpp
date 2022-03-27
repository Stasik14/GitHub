#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	cout << "Input number a: ";
	cin >> a;

	cout << "Input number b: ";
	cin >> b;

	int max = 0;

	if (a > b) 
	{
		max = a;
	}
	
	else 
	{
		max = b;
	}

	cout << max;
	
	return 0;
}

