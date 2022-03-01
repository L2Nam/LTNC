#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double a[n];
	for (int i = 1; i <= n; i ++) cin >> a[i];
	for (int i = n; i > 0; i --) cout << setprecision(2) << fixed << a[i] << " ";
	
	return 0;
}
