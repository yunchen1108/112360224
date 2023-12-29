#include <stdio.h>

// Nonrecursive function to calculate the nth Fibonacci number
unsigned long long int fibonacci(unsigned int n) {
	unsigned long long int a = 0, b = 1, temp;

	if (n == 0) {
		return a;
	}
	else if (n == 1) {
		return b;
	}

	for (unsigned int i = 2; i <= n; ++i) {
		temp = a + b;
		a = b;
		b = temp;
	}

	return b;
}

int main() {
	unsigned int n;

	// Get user input for n
	printf("Enter the value of n for the nth Fibonacci number: ");
	scanf("%u", &n);

	// Call the fibonacci function to calculate the nth Fibonacci number
	unsigned long long int result = fibonacci(n);

	// Display the result
	printf("The %uth Fibonacci number is: %llu\n", n, result);

	return 0;
}
