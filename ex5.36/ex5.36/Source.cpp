#include <stdio.h>

void hanoi(int n, char source, char target, char temp) {
	if (n == 1) {
		printf("%c ¡÷ %c (Move one disk from %c to %c)\n", source, target, source, target);
	}
	else {
		hanoi(n - 1, source, temp, target);
		printf("%c ¡÷ %c (Move one disk from %c to %c)\n", source, target, source, target);
		hanoi(n - 1, temp, target, source);
	}
}

int main() {
	int numberOfDisks;

	// Get user input for the number of disks
	printf("Enter the number of disks: ");
	scanf("%d", &numberOfDisks);

	// Assuming disks are initially on peg 1, and pegs are labeled as 1, 2, 3
	char sourcePeg = '1';
	char targetPeg = '3';
	char tempPeg = '2';

	printf("Towers of Hanoi solution:\n");
	hanoi(numberOfDisks, sourcePeg, targetPeg, tempPeg);

	return 0;
}
