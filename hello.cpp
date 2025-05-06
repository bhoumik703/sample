#include <stdio.h>

int main()
{ 
	int a, b, s ;

	printf("Enter the number:");
	scanf("%d" , &a);

	printf("Enter the number:");
	scanf("%d" , &b);

        s= a+b;

	printf("The sum of %d and %d and %d is: %d |\n", a, b, s);

	return 0;
}
