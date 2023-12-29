#include <stdio.h>

int recursiveMaximum(const int array[], int start, int end);

int main() {
	int size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int array[size];

	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	int max = recursiveMaximum(array, 0, size - 1);

	printf("The maximum element in the array is: %d\n", max);

	return 0;
}

int recursiveMaximum(const int array[], int start, int end) {
	// Base case: If the array has only one element, return that element
	if (start == end) {
		return array[start];
	}

	// Recursive case: Find the maximum in the rest of the array
	int mid = (start + end) / 2;
	int leftMax = recursiveMaximum(array, start, mid);
	int rightMax = recursiveMaximum(array, mid + 1, end);

	// Return the maximum of the left and right subarrays
	return (leftMax > rightMax) ? leftMax : rightMax;
}
