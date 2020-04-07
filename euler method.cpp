#include<stdio.h>
#include<math.h>
# define h 0.1
#define e 2.718281828
double gercekDenklem(double x){
	return (-2*x)+2-3*pow(e,-x);
}
double yturev(double x,double y){
	return y*(1-h)-2*h*x;
}
int main(){
	double dizix[5];
	double diziy[5];
	
	dizix[0]=0;
	diziy[0]=-1;
	
	int i;
	for (i=1;i<=4;i++){
		dizix[i]=dizix[i-1]+h;
		diziy[i]=yturev(dizix[i-1],diziy[i-1]);
	}
	for(i=0;i<=4;i++){
		printf("%lf    %lf\n",dizix[i],diziy[i]);
	}
	double gercekDeger=gercekDenklem(0.4);
	double aradakifark=fabs(gercekDeger-diziy[4]);
	printf("\ngercek deger %lf\n",gercekDeger);
	printf("aradaki fark %lf",aradakifark);
	return 0;
}
