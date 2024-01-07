#include <stdio.h>

// card structure definition 
struct card {
	const char *face; // define pointer face 
	const char *suit; // define pointer suit
};

int main(void)
{
	struct card aCard; // define one struct card variable 

	// place strings into aCard
	aCard.face = "Ace";
	aCard.suit = "Spades";

	struct card *cardPtr = &aCard; // assign address of aCard to cardPtr

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);
}