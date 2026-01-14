#include <stdio.h>

int main() {
	int n, sum = 0, digit;

	// Prompt user to enter a 5-digit number
	//printf("Enter a five-digit number: ");
	scanf("%d" , &n); //Read the number form the user

	// Check if the number is exactly 5 digits
	if (n >= 10000 && n <= 99999) {
		// Extract each digit and add to sum
		while (n > 0) {
			digit = n % 10;
			sum += digit;
			n /= 10;
		}
			printf("%d\n" , sum);
	} else {
		//If number is not 5 digits, print invalid message
		printf("Invalid input\n");
		}
		return 0;
}