#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time (NULL));
	int a,b,c,f,i,x,win=0,lose=0,sum=0;
	double k;
	scanf("%d",&x);
	k=x;
	while(x>0){
	
	a=rand()%6+1;
	b=rand()%6+1;
    c=a+b;
    switch(c){
    	case 7:
    	case 11:
		win++;
		sum++;
//		printf("Ĺ\n"); 
		break;
		case 2:
		case 3:
		case 12:
		lose++;	
		sum++;
//		printf("��\n");
		break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
	    f=0;
	while(f==0){
	a=rand()%6+1;
	b=rand()%6+1;
    if(a+b==c){
    	f=1;
    	win++;
    	sum++;
 //		printf("Ĺ\n");
	}
    if(a+b==7){
    	lose++;
    	sum++;
    	f=1;
   //	printf("��\n");
	}	
//	printf("��%d%d\n",c,a+b);
	sum++;
    }

    break;
	}
   x--; 
}
	printf("Ĺ�F%d��\n",win);
//	printf("%d\n",lose);
	printf("����%.2lf��",(double)sum/k);
//	printf("%d",sum);
	return 0;
}
//	printf("%d",a);	printf("%d",c);
//	printf("%d\n",win);
//	printf("%d\n",lose);	printf("%d",c);
