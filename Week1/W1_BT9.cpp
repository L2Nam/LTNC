#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b + c || b >= a + c || c >= a + b) {
		cout << "invalid";
		return 1;
	}
	else {
		double p = 0.5 * (a + b + c);
		double dienTichTamGiac = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << setprecision(2) << fixed << dienTichTamGiac;
	}
	return 0;
}
