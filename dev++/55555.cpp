#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char argv[999];
	int  a, b = 0 , i = 0, sum = 0;
	while(fgets(argv,999,stdin)){
  // scanf("%s", argv);
  	printf("%s",argv);
	while (argv[i] != '\0') {
		if (argv[i] >= '0'&&argv[i] <= '9') {
			a = argv[i] - '0';
			b = b * 10 + a;
		}
		else
		{
			sum = sum + b;
			b = 0;
		}
		i++;
	}
		sum = sum + b;
		i=0;
}
	printf("%d", sum);
	return 0;
}
