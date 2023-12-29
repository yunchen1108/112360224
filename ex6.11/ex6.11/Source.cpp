#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int size);

int main() {
	int data[] = { 34, 56, 12, 89, 43, 23, 9, 24, 76, 43 };
	int size = sizeof(data) / sizeof(data[0]);

	printf("Original array:\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}

	printf("\n");

	// Perform bubble sort
	bubbleSort(data, size);

	printf("Sorted array:\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}

// Modified bubble sort
void bubbleSort(int array[], int size) {
	for (int pass = 1; pass < size; pass++) {
		// Modified loop for fewer comparisons on each pass
		for (int i = 0; i < size - pass; i++) {
			if (array[i] > array[i + 1]) {
				// Swap elements if they are in the wrong order
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}

		// Check if any swaps were made
		bool swapsMade = false;
		for (int i = 0; i < size - pass; i++) {
			if (array[i] > array[i + 1]) {
				swapsMade = true;
				break; // If a swap is found, no need to check further
			}
		}

		// If no swaps were made, the array is already sorted
		if (!swapsMade) {
			break;
		}
	}
}
