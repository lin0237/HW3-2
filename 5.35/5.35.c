#include<stdio.h>

unsigned long long int fibonacci(unsigned int n)
{
	 if (n == 0)
	 {
        return 0;
     } 
	 else if (n == 1) 
	 {
        return 1;
     } 
	 else 
	 {
        unsigned long long int a = 0, b = 1, result = 0;
        for (unsigned int i = 2; i <= n; i++) 
		{
            result = a + b;
            a = b;
            b = result;
        }
        return result;
     }
}

int main() 
{
    unsigned int n;
    printf("Enter the position of Fibonacci number to find: ");
    scanf("%u", &n);
    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    return 0;
}
