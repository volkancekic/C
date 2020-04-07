#include<stdio.h>
#include<math.h>

#define pi 3.141592
double fact(int a){
	if(a==0 || a==1)
	return 1;
		
    else 
	return a*fact(a-1);
}
int main(){
int N,i;
double T=0.0,x;

printf("enter x angle: ");
scanf("%lf",&x);
printf("enter number of terms: ");
scanf("%d",&N);

x=(x*pi)/180;

for(i=0;i<=N;i++){
	T+=pow(-1,i)*pow(x,i)/fact(i);
}

printf("mclaurin series: %f ",T);
printf("result of computer: %f",cos(x));	
}
