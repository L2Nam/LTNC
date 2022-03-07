void sort(float array[], int size, bool isAscending) {
	int x;
	if (isAscending == true) {
		for (int i = 0; i < size - 1; i ++) {
			for (int j = i + 1; j < size; j ++) {
				if (array[i] > array[j]) {
					x = array[i];
					array[i] = array[j];
					array[j] = x;
				}
			}
		}
    }
	else {
		for (int i = 0; i < size - 1; i ++) {
			for (int j = i + 1; j < size; j ++) {
				if (array[i] < array[j]) {
					x = array[i];
					array[i] = array[j];
					array[j] = x;
				}
			}
		}
	}
}
