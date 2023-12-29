#include <stdio.h>
#define SIZE 15

int binarySearch(const int array[], int low, int high, int key);

int main() {
	int a[SIZE] = { 0, 2, 4, 7, 9, 11, 23, 45, 56, 67, 78, 89, 90, 94, 99 };
	int searchKey, result;

	printf("Enter an integer search key: ");
	scanf("%d", &searchKey);

	// Perform binary search
	result = binarySearch(a, 0, SIZE - 1, searchKey);

	// Display the result
	if (result != -1) {
		printf("Key %d found at index %d\n", searchKey, result);
	}
	else {
		printf("Key %d not found\n", searchKey);
	}

	return 0;
}

// Recursive binary search function
int binarySearch(const int array[], int low, int high, int key) {
	if (low <= high) {
		int mid = (low + high) / 2;

		// If the key is present at the middle
		if (key == array[mid]) {
			return mid;
		}

		// If the key is smaller than the middle element, search the left subarray
		else if (key < array[mid]) {
			return binarySearch(array, low, mid - 1, key);
		}

		// If the key is larger than the middle element, search the right subarray
		else {
			return binarySearch(array, mid + 1, high, key);
		}
	}

	// If the key is not present in the array
	return -1;
}
