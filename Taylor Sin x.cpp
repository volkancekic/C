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
	double derivatives,x,x0,T=0.0;
	printf("enter x (angle)  :");
	scanf("%lf",&x);
	printf("enter x0  :");
	scanf("%lf",&x0);
	printf("enter number of terms   :");
	scanf("%d",&N);
	
	x=(x*pi)/180;
	x0=(x0*pi)/180;
	
	for(i=0;i<=N;i++){
		switch(i%4){
			case 0: derivatives=sin(x0); break;
			case 1: derivatives=cos(x0); break;
			case 2: derivatives=(-1.0)*sin(x0); break;
			case 3: derivatives=(-1.0)*cos(x0); break;
		}
		T+=derivatives*pow((x-x0),i)/fact(i);
	}
	printf("\nresult of taylor:%f",T);
	printf("\nresult of computer:%f",sin(x));
	return 0;
}
