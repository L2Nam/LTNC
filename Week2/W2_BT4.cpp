#include <iostream>
using namespace std;

int main() {
    int total, totalLegs;
    cin >> total >> totalLegs;
    
    if (totalLegs < 2 * total || totalLegs > 4 * total || totalLegs % 2 == 1) {
    	cout << "invalid";
	}
	else {
		int chicken, dog;
		dog = (totalLegs - 2 * total) / 2;
		chicken = total - dog;
		cout << "chicken = " << chicken <<", dog = " << dog;
	}
	
	return 0;
}
