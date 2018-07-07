#include<stdio.h>
int main()
{
	char s;
	scanf("%s",&s);
	if((s>='a' && s<='z')||(s>='A' && s<='Z'))
	{
		printf("It is an alphabet");
	}
	else
	{
		printf("It is an not an alphabet");
	}
	return 0;
}
