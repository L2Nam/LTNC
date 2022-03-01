#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x, count = 1;
	long double sum = 1, oldsum = 0, n = 1.0;
	
	cin >> x;
    while (sum - oldsum > 0.001) {
    	oldsum = sum;
    	n = n * x / count;
    	sum += n;
    	count ++;
	}
	cout << setprecision(4) << fixed << sum;
	
	return 0;
}
