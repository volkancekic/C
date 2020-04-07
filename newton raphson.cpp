#include<stdio.h>
#include<math.h>

double fonk(double x){
	return pow(x,3)-6*x+1;
}
double turev(double x){
	return 3*pow(x,2)-6;
}
double islem(double x){
	double x0=2.0,x1,x2,hata,tolerans=0.0001;
do{
	
	x1=x0-fonk(x0)/turev(x0);
	hata=fabs(x1-x0);
	printf("%lf",x1);
	x0=x1;
}while(hata>tolerans);
}

int main(){
	double x1;
	islem(x1);
	return 0;
}
