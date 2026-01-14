#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	float values[100], sum = 0, mean, variance = 0, deviation;

	//input number of values
	printf("Enter the number of values: ");
	scanf("%d", &n);
	
	//input
	printf("Enter values : ");
	for (i = 0; i < n; i++) {
		scanf("%f", &values[i]);
		sum += values[i];
	}
	//calculate mean
	mean = sum / n;

	//calculate variance
	for (i = 0; i < n; i++){
		variance += pow(values[i] - mean, 2);
	}
	variance /= n;

	//calculate deviation
	deviation = sqrt(variance);

	//output
	printf("Mean = %.2f\n", mean);
	printf("Variance = %.2f\n", variance);
	printf("Deviation = %.2f\n", deviation);

	return 0;



}