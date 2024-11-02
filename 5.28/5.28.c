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
	printf("輸入為: %c , 輸出為: %c\n", ch, change_case(ch));
	
	return 0;
}
