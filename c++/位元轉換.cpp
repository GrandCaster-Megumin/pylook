#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	double a,sim=0;
	int b,aa,c=0, sum = 0;
	char x[20];
	cin >> a;
	aa = 1;
	getchar();
	fgets(x, 20, stdin);
	//cout << x;
	b=atoi(x);
	//cout <<endl<< b;
	int i = 0,j;
	while (x[i]!='\0'&& x[i]!='.') {
		i++;
}
	j = i ;
	if (x[i] != '\0') {
		i++;
	}
	else {
		x[i] = '\n';
	}
	int ii = 0;
	while (x[i] != '\n') {
		sum =sum*10+ (x[i] - '0');
		ii++;
		i++;
	}
	//cout << sum<<endl;
	while (ii > 0) {
		sim = sim + (double)(sum % 10) / pow(a, ii);
		ii = ii - 1;
	}
	
	while (b > 0) {
		c = c + (b % 10) * aa;
		b = b / 10;
		aa = aa * a;
	}
	//cout <<endl<< c;¤Q
	//cout << sim << endl;­Ó
	cout << (double)c + sim;
	return 0;
}

