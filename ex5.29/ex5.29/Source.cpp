#include <stdio.h>

// Function to find the greatest common divisor (GCD) using Euclidean algorithm
int findGCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// Function to find the least common multiple (LCM) using GCD
int findLCM(int num1, int num2) {
	// LCM = (|num1 * num2|) / GCD(num1, num2)
	return (num1 * num2) / findGCD(num1, num2);
}

int main() {
	int num1, num2;

	// Get user input
	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("Enter the second integer: ");
	scanf("%d", &num2);

	// Call the function to find the least common multiple (LCM)
	int lcm = findLCM(num1, num2);

	// Display the result
	printf("Least Common Multiple (LCM) of %d and %d is: %d\n", num1, num2, lcm);

	return 0;
}
