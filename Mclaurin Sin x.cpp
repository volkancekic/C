#include<stdio.h>
#include<math.h>

#define pi 3.141592

double fact(int n){
	if(n==0 || n==1)
	return 1;
	
	else
	return n*fact(n-1);
}
int main(){
int N;
double T=0.0,x;
printf("enter angle x:   ");
scanf("%lf",&x);
printf("enter number of terms:  ");
scanf("%d",&N);

x=(x*pi)/180;
int i;
for(i=0;i<=N;i++){
	T+=pow(-1,i)*pow(x,2*i+1)/fact(2*i+1);
}

printf("\nmclaurin series: %f ",T);
printf("\nresult of computer: %f",sin(x));	
}
