#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = - n; i <= n; i ++) {
	    for (int j = - n; j <= n; j ++){
	    	if (i <= 0) {
		        if (j >= - (n + i) && j <= (n + i)) { 
		            cout<<"* ";
		        } else {
		            cout<<". ";
		        }
		    }
		    else {
		    	if (j >= - (n - i) && j <= (n - i)) { 
		            cout<<"* ";
		        } else {
		            cout<<". ";
		        }
			}
	    }
	    cout << endl;
	}
	
	return 0;
}
