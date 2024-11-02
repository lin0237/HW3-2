#include<stdio.h>

int power(int base,int exponent)
{
	if(exponent == 1)
	{
		return base;
	}
	else
	{
		return base*power(base, exponent - 1);
	}
}

int main()
{
	int base ;
	int exponent ;
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the exponent: ");
	scanf("%d",&exponent);
	printf("%d^%d = %d\n", base,exponent,power(base, exponent));
	return 0;
}

