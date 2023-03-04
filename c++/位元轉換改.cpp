#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
int a,i=0,j=0,k,m;
cin>>a;
getchar();
char x[20],y[20];
fgets(x,20,stdin);

for( i=0;x[i]!='\n'&&x[i]!='.';i++){
	k=i;
}

while(x[i]!='\n'&&x[i]!='\0'){
	y[j]=x[i];
	j++;
	i++;
	if(y[j-1]=='.'){
		j=j-1;
	}
}
y[j]='\0';

x[k+1]='\0';
//cout<<x;//時 
//cout<<endl<<y;//個 

//cout<<endl<<strlen(x)<<strlen(y);

int r=strlen(x)-1;
double sum=0;
char *xx=x;
while(r>=0){
	if(*xx>='0'&&*xx<='9'){
		sum=sum+ (*xx-'0')*pow(a,r);
	}
	if(*xx>='A'&&*xx<='F'){
		sum=sum+ (*xx-'A'+10)*pow(a,r);
	}
		xx=xx+1;
		r=r-1;	
}
//cout<<'F'-'@';
//	cout<<"\n\n\n\n"<<sum;
	
 r=strlen(y);
double sim=0;
int rr=-1;
 xx=y;
while(r>=0){
	if(*xx>='0'&&*xx<='9'){
		sim=sim+ (*xx-'0')*pow(a,rr);
	}
	if(*xx>='A'&&*xx<='F'){
		sim=sim+ (*xx-'A'+10)*pow(a,rr);
	}
		xx=xx+1;
		r=r-1;
		rr=rr-1;	
}
//	cout<<"\n\n\n\n"<<sim;
	
//	printf("\n%.4lf",sim+sum);//10進位 
	
	int ii=0,t,um=sum;

	cin>>t;
	char z[20];
z[ii]='0';
	while(um/t>0){
		if(um%t>=0&&um%t<=9){
		z[ii]=um%t+'0';
		}
		if(um%t>=10&&um%t<16){
			z[ii]=um%t+'A'-10;
		}
		
		ii++;
		um=um/t;		
	}
	//	z[ii]=um%t+'0';
		if(um%t>0&&um%t<9){
		z[ii]=um%t+'0';
		}
		if(um%t>=10&&um%t<16){
			z[ii]=um%t+'A'-10;
		}
		ii++;
	z[ii]='\0';

	for(int v=ii-1;ii>=0;ii--){
			printf("%c",z[ii]);
	}

	ii=0;
	int im=0;
	if(sim>0){
		cout<<'.';
	}

//	system("pause");
	while(sim>0){
	sim=sim*t;	
//	cout<<endl<<sim<<"sim"<<endl;
	if(sim>0){
	//	cout<<endl<<"測"<<sim<<endl<<im;
		im=sim;
		if(im>=0&&im<10){
		cout<<im;
		}
		else if(im>=10&&im<16){
			im=im-9;
			switch(im) {
    		case 1:
        	cout<<"A";
        	break;
  			 case 2:
        	cout<<"B";
        	break;
        	case 3:
        	cout<<"C";
        	break;
        	case 4:
        	cout<<"D";
        	break;
        	case 5:
        	cout<<"E";
        	break;
        	case 6:
        	cout<<"F";
        	break;
		}
		im=im+9;
	}
		else {
			cout<<0;
			im=0;
			}
	//	cout<<"跑"<<sim<<"  "<<im;	
		sim=sim-im;
		ii++;
	
	}

		im=0;
	if(ii>3){ 
	break;
} 
	}	
	system("pause");
	return 0;
}

