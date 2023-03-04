#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>=48&&a<=57)
	{
	printf("%c 是數字",a);
}
else if(a>=97&&a<=122)
	{
	printf("%c 是小英文",a);
	} 
else if(a>=65&&a<=90)
	{
	printf("%c 是大英文",a);
	} 
else
{
	printf("%c其他字元符號",a);
}
	system("pause");
	return 0;
}
