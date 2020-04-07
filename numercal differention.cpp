#include<stdio.h>
#include<math.h>
#define e 2.718281828
double 	fonk(double x){
	return pow(e,2*x);
}
double turev(double x){
return 2*pow(e,2*x);	
}
double forward(double x,double h){
	return (fonk(x+h)-fonk(x))/h;
}
double backward(double x,double h){
	return (fonk(x)-fonk(x-h))/h;
}
double centralized(double x,double h){
	return (fonk(x+h)-fonk(x-h))/2*h;
}
int main(){
	printf("forward-error  backward-error   centralized-error\n ");
	double h;
	double x =2.0;
	int i;
	for(i=0;i<=14;i++){
		h=(1/pow(2,i));
		printf("[%.3f] ",forward(x,h));
		double error1=fabs(fonk(x)-forward(x,h));
		printf("[%.3f] ",error1);
		printf("[%.3f] ",backward(x,h));
		double error2=fabs(fonk(x)-backward(x,h));
		printf("[%.3f] ",error2);
	    printf("[%.3f] ",centralized(x,h));
		double error3=fabs(fonk(x)-centralized(x,h));
		printf("[%.3f] ",error3);
		printf("\n");
	}
}
