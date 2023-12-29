#include <stdio.h>

int main() {
	// Input variables
	double totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tolls;

	// Get user input
	printf("Enter total miles driven per day: ");
	scanf("%lf", &totalMiles);

	printf("Enter cost per gallon of gasoline: $");
	scanf("%lf", &costPerGallon);

	printf("Enter average miles per gallon: ");
	scanf("%lf", &avgMilesPerGallon);

	printf("Enter parking fees per day: $");
	scanf("%lf", &parkingFees);

	printf("Enter tolls per day: $");
	scanf("%lf", &tolls);

	// Calculate daily driving cost
	double costPerDay = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tolls;

	// Display the result
	printf("Your daily driving cost is: $%.2lf\n", costPerDay);

	return 0;
}
