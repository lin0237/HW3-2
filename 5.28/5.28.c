#include<stdio.h>
#include<ctype.h>

char change_case(char ch)
{
	return isupper(ch) ? tolower(ch) : toupper(ch);
}
 
int main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf(" %c", &ch);
	printf("��J��: %c , ��X��: %c\n", ch, change_case(ch));
	
	return 0;
}
