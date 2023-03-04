#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	int a,b,sum=0,f,i,j,k,x[6],y[5];
	for(i=0;i<6;i++){
		x[i]=rand()%8+1;
	}
	for(i=0;i<6;i++){	
		for(j=i+1;j<6;j++){
			while(x[j]==x[i]){
			x[j]=rand()%8+1;
			i=0;	
			}	
		    }
		}
//		for(i=0;i<6;i++){
//		printf("%d",x[i]);
//		}
		
		for(i=0;i<5;i++){
			scanf("%d",&y[i]);
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(x[i]==y[j]){
				sum=sum+1;
				}
			}
		}
		switch(sum){
			case 5:
			printf("頭獎");	
			break;
			case 4:
		for(j=0;j<5;j++){
			f=0;
		if(x[5]==y[j]){	
		printf("二獎");
			f=1;
		} 	
		}
		if(f==0){
		printf("三獎");
	}
			break;
			case 3:
			printf("四獎");	
			break;
        default:
        printf("沒中");		
		}		
//	printf("%d",sum);
	return 0;
}
