#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>=48&&a<=57)
	{
	printf("%c �O�Ʀr",a);
}
else if(a>=97&&a<=122)
	{
	printf("%c �O�p�^��",a);
	} 
else if(a>=65&&a<=90)
	{
	printf("%c �O�j�^��",a);
	} 
else
{
	printf("%c��L�r���Ÿ�",a);
}
	system("pause");
	return 0;
}
