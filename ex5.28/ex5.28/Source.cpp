#include <stdio.h>
#include <ctype.h>
char changeCase(char alphabet) {
	// Check if the character is uppercase
	if (isupper(alphabet)) {
		// Convert uppercase to lowercase
		return tolower(alphabet);
	}
	else if (islower(alphabet)) {
		// Convert lowercase to uppercase
		return toupper(alphabet);
	}
	else {
		// If not an alphabet character, return the same character
		return alphabet;
	}
}

int main() {
	char input;

	// Get user input
	printf("Enter an alphabet character: ");
	scanf("%c", &input);

	// Call the function to change the case
	char result = changeCase(input);

	// Display the result
	printf("Changed case: %c\n", result);

	return 0;
}
