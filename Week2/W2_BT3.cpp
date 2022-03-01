#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    for (int i = lowerBound; i <= upperBound; i ++) {
        int test = sqrt(i);
        if (test * test == i) cout << i << " ";
    }
	return 0;
}
