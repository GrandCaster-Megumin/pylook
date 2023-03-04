#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a,b,c,d;
	scanf("%c %c %c %c",&a,&b,&c,&d);
	if(a==d&&b==c)
	{
	printf("%c %c %c %c是迴文數",a,b,c,d);
}
else
{
		printf("%c %c %c %c不是迴文數",a,b,c,d);
}
	system("pause");
	return 0;
}
