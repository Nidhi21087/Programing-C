#include <stdio.h>

int main() {
	int a,b;
	// correct input prompt
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	//relation operators with exact format
	printf("%d < %d: %s\n", a, b, (a < b) ? "True" : "False");
	printf("%d <= %d: %s\n", a, b, (a <= b) ? "True" : "False");
	printf("%d > %d: %s\n", a, b, (a > b) ? "True" : "False");
	printf("%d >= %d: %s\n", a, b, (a >= b) ? "True" : "False");
	printf("%d == %d: %s\n", a, b, (a == b) ? "True" : "False");
	printf("%d != %d: %s\n", a, b, (a != b) ? "True" : "False");
	return 0;
}
