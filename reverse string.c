#include<stdio.h>
main()
{
	char str[20];
	int i,j;
	printf("\n enter the string ");
gets(str);
int l=strlen(str);
for(i=l-1;i>=0;i--)
{
	
	printf("%c",str[i]);
	
}
}
