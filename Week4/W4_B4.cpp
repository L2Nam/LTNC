long long int factorial(int n) {
	long long int p = 1;
	for (int i = 2; i <= n; i ++) p *= i;
	return p;
}

