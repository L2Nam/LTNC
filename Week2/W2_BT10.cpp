#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double a[n], b[n], Product = 0;
	for (int i = 1; i <= n; i ++) cin >> a[i];
	for (int i = 1; i <= n; i ++) cin >> b[i];
	for (int i = 1; i <= n; i ++) {
		Product += a[i] * b[i];
	}
	cout << setprecision(2) << fixed << Product;
	
	return 0;
}
