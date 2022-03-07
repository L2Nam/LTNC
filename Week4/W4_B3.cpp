void printArrow(int n, bool left){
	if (left == false) {
		for (int i = - n + 1; i < n; i ++) {
			for (int j = 0; j < 2 * (n - 1 - abs(i)); j ++) cout << " ";
			for (int j = 0; j < abs(i) + 1; j ++) cout << "*";
			cout << endl;
		}
    }
    else {
    	for (int i = - n + 1; i < n; i ++) {
			for (int j = 0; j < abs(i); j ++) cout << " ";
			for (int j = 0; j < abs(i) + 1; j ++) cout << "*";
			cout << endl;
		}
	}
}
