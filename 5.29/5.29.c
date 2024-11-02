#include<stdio.h>

int gcd(int a, int b)
{
	while(b != 0)
	{
		int temp = b;
		b= a % b;
		a= temp;
	} 
	return a;
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int main()
{
	int n1,n2;
	printf("Enter two integers: ");
	scanf("%d %d", &n1,&n2);
	printf("The LCM of %d and %d is %d\n",n1,n2,lcm(n1,n2));
	return 0;
}
