#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cout << "Input number a: ";
	cin >> a;

	cout << "Input number b: ";
	cin >> b;

	cout << "Input number c: ";
	cin >> c;

	cout << "Input number d: ";
	cin >> d;


	int max = 0;

	if (a > b && a > c && a > d) {
		max = a;
	}else if(b > a && b > c && b > d) {
		max = b;
	}else if (c > a && c > b && c > d) {
		max = c;
	}
	else {
		max = d;
	}

	cout << max;

	


	return 0;
}

