#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char x[100],y[5];
	int a,i=0,j=0;
	fgets(x,100,stdin);
	a = strlen(x);
	x[a-1] = '\0';
	while (x[i] != '\n') {
		if (x[i] == '|') {
			y[j] = '\0';
			if (strcmp(y, ".-")==0) {
				printf("A");
			}
			if (strcmp(y, "-...") == 0) {
				printf("B");
			}
			if (strcmp(y, "-.-.") == 0) {
				printf("C");
			}
			if (strcmp(y, "-..") == 0) {
				printf("D");
			}
			if (strcmp(y, ".") == 0) {
				printf("E");
			}
			if (strcmp(y, "..-.") == 0) {
				printf("F");
			}
			if (strcmp(y, "--.") == 0) {
				printf("G");
			}
			if (strcmp(y, "....") == 0) {
				printf("H");
			}
			if (strcmp(y, "..") == 0) {
				printf("I");
			}
			if (strcmp(y, ".---") == 0) {
				printf("J");
			}
			if (strcmp(y, "-.-") == 0) {
				printf("K");
			}
			if (strcmp(y, ".-..") == 0) {
				printf("L");
			}
			if (strcmp(y, "--") == 0) {
				printf("M");
			}
			if (strcmp(y, "-.") == 0) {
				printf("N");
			}
			if (strcmp(y, "---") == 0) {
				printf("O");
			}
			if (strcmp(y, ".--.") == 0) {
				printf("P");
			}
			if (strcmp(y, "--.-") == 0) {
				printf("Q");
			}
			if (strcmp(y, ".-.") == 0) {
				printf("R");
			}
			if (strcmp(y, "...") == 0) {
				printf("S");
			}
			if (strcmp(y, "-") == 0) {
				printf("T");
			}
			if (strcmp(y, "..-") == 0) {
				printf("U");
			}
			if (strcmp(y, "...-") == 0) {
				printf("V");
			}
			if (strcmp(y, ".--") == 0) {
				printf("W");
			}
			if (strcmp(y, "-..-") == 0) {
				printf("X");
			}
			if (strcmp(y, "-.--") == 0) {
				printf("Y");
			}
			if (strcmp(y, "--..") == 0) {
				printf("Z");
			}

		//	printf("%s\n", y);
			j = 0;
			i++;
		}


		y[j] = x[i];
		j++;
		i++;

	}
	y[j] = '\0';
	if (strcmp(y, ".-") == 0) {
		printf("A");
	}
	if (strcmp(y, "-...") == 0) {
		printf("B");
	}
	if (strcmp(y, "-.-.") == 0) {
		printf("C");
	}
	if (strcmp(y, "-..") == 0) {
		printf("D");
	}
	if (strcmp(y, ".") == 0) {
		printf("E");
	}
	if (strcmp(y, "..-.") == 0) {
		printf("F");
	}
	if (strcmp(y, "--.") == 0) {
		printf("G");
	}
	if (strcmp(y, "....") == 0) {
		printf("H");
	}
	if (strcmp(y, "..") == 0) {
		printf("I");
	}
	if (strcmp(y, ".---") == 0) {
		printf("J");
	}
	if (strcmp(y, "-.-") == 0) {
		printf("K");
	}
	if (strcmp(y, ".-..") == 0) {
		printf("L");
	}
	if (strcmp(y, "--") == 0) {
		printf("M");
	}
	if (strcmp(y, "-.") == 0) {
		printf("N");
	}
	if (strcmp(y, "---") == 0) {
		printf("O");
	}
	if (strcmp(y, ".--.") == 0) {
		printf("P");
	}
	if (strcmp(y, "--.-") == 0) {
		printf("Q");
	}
	if (strcmp(y, ".-.") == 0) {
		printf("R");
	}
	if (strcmp(y, "...") == 0) {
		printf("S");
	}
	if (strcmp(y, "-") == 0) {
		printf("T");
	}
	if (strcmp(y, "..-") == 0) {
		printf("U");
	}
	if (strcmp(y, "...-") == 0) {
		printf("V");
	}
	if (strcmp(y, ".--") == 0) {
		printf("W");
	}
	if (strcmp(y, "-..-") == 0) {
		printf("X");
	}
	if (strcmp(y, "-.--") == 0) {
		printf("Y");
	}
	if (strcmp(y, "--..") == 0) {
		printf("Z");
	}
	
	j = 0;
	a = strlen(x);
//	printf("%d", a);
	return 0;
}
