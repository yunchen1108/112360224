#include <stdio.h>

void stringReverse(const char str[]);

int main() {
	char inputString[100];

	printf("Enter a string: ");
	fgets(inputString, sizeof(inputString), stdin);

	printf("String in reverse: ");
	stringReverse(inputString);

	return 0;
}

void stringReverse(const char str[]) {
	// Base case: If the current character is the null character, stop recursion
	if (str[0] == '\0') {
		return;
	}

	// Recursive case: Call the function with the next character
	stringReverse(str + 1);

	// Print the current character
	putchar(str[0]);
}
