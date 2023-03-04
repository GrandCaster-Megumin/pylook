#include<stdio.h>
#include<stdlib.h>
#include<string>
void Merge(int array1[], int array2[], int array3[]) {
	int i=0, j=0, k=0;
	while (i < 5 && j < 6) {
		if (array1[i] < array2[j]) {
			array3[k] = array1[i];
			i++;
			k++;
		}
		else {
			array3[k] = array2[j];
			j++;
			k++;
		}
	}
	while (j < 6) {
			array3[k] = array2[j];
			j++;
			k++;
		}
		
		while (i< 5) {
			array3[k] = array1[i];
			i++;
			k++;
		}
}
int main() {
	
	int array1[] = { 1,6,23,789,1234 };
	int array2[] = { 2,5,35,67,1000,23567 };
	int array3[50];
	Merge( array1, array2, array3);
	for (int i = 0; i < 11; i++)
	{
		printf("%d,", array3[i]);
	}


	return 0;
}
