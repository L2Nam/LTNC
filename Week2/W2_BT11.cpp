#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double a[n], sum = 0, sum1 = 0;
	for (int i = 1; i <= n; i ++) cin >> a[i];
	for (int i = 1; i <= n; i ++) sum1 += a[i];
	sum1 /= n;
	for (int i = 1; i <= n; i ++) {
		sum += (a[i] - sum1) * (a[i] - sum1);
	}
	cout << setprecision(2) << fixed << sum / n;
	
	return 0;
}
