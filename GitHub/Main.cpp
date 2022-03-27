#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cout << "Input number a: ";
	cin >> a;

	cout << "Input number b: ";
	cin >> b;

	cout << "Input number c: ";
	cin >> c;

	int max = c;

	if (a > b && a > c) {
		max = a;
	}else if(b > a && b > c) {
		max = b;
	}

	else {
		max = c;
	}

	cout << max;

	


	return 0;
}

