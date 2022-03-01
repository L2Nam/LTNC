#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
	float c;
	cin >> c;
    cout << setprecision(2) << fixed << 1.8 * c + 32;
	return 0;
}
