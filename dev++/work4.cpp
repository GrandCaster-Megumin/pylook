#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a,b;
	char c;
	scanf("%lf %c %lf",&a,&c,&b);
	switch(c)
	{
		case '+':
			printf("%lf",a+b);
			break;
		case'-':
		printf("%lf",a-b);
			break;
		case'*':
		printf("%lf",a*b);
			break;	
		case'/':
		printf("%lf",a/b);
			break;
		case'%':
		printf("%d",(int)a%(int)b);
			break;
		case'^':
		printf("%lf",pow(a,b));
			break;	
	}

	system("pause");
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h> 
//int main()
//{
//	double a,b;
//	char c;
//	scanf("%lf %c %lf",&a,&c,&b);
//	if(c==43)
//	{
//		printf("%.0lf",a+b);
//	}
//		if(c==42)
//	{
//		printf("%.0lf",a*b);
//	}
//		if(c==45)
//	{
//		printf("%.0lf",a-b);
//	}
//		if(c==47)
//	{
//		printf("%.02f",a/b);
//	}
//		if(c==37)
//	{
//		printf("%d",(int)a%(int)b);
//	}
//			if(c==94)
//	{
//		printf("%.0lf",pow(a,b));
//	}
//	system("pause");	
//	return 0;
//5}
