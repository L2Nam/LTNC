#include <iostream>

using namespace std;

bool check(int a[], int b[], int n);

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i ++) cin >> a[i];
	for (int i = 0; i < n; i ++) cin >> b[i];
	if (check(a, b, n)) cout << "Yes";
	else cout << "No";
	return 0;
}

bool check(int a[], int b[], int n){
	for (int i = 0; i < n; i ++) {
		if (a[i] != b[i]) return false;
	}
	return true;
};