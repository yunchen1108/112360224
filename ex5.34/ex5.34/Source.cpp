#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exponent) {
	// Base case: if exponent is 1, return the base
	if (exponent == 1) {
		return base;
	}
	else {
		// Recursive step: base^exponent = base * base^(exponent-1)
		return base * power(base, exponent - 1);
	}
}

int main() {
	int base, exponent;

	// Get user input
	printf("Enter the base: ");
	scanf("%d", &base);

	printf("Enter the exponent (greater than or equal to 1): ");
	scanf("%d", &exponent);

	// Validate that exponent is greater than or equal to 1
	if (exponent < 1) {
		printf("Exponent must be greater than or equal to 1.\n");
		return 1; // Exit program with an error code
	}

	// Call the recursive function to calculate power
	int result = power(base, exponent);

	// Display the result
	printf("%d raised to the power %d is: %d\n", base, exponent, result);

	return 0;
}
