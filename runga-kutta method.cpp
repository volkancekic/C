#include<stdio.h>
double fonk(double x,double y){
	return 3*x-x*y;
}
int main(){
	double a=0,b=0.2,h=0.1;
	int i=(b-a)/h;
	double x[i],y[i+1],k1,k2;
	x[0]=0,y[0]=4;
	
	int n;
	for(n=0;n<i;n++){
		x[n]=x[0]+n*h;
		k1=h*fonk(x[n],y[n]);
		k2=h*fonk(x[n]+h,y[n]+k1);
		y[n+1]=y[n]+(k1+k2)/2;
		printf("y[%d]=%lf\n",n+1,y[n+1]);
	}
	return 0;
}
