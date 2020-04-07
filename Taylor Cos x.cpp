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
	double x,x0,derivatives,T=0.0;
	  printf("Enter x angle:");
      scanf("%lf",&x);
      printf("Enter x0 :");
	  scanf("%lf",&x0);
	  printf("Enter number of terms:");
      scanf("%d",&N);
      
	  x=(x*pi)/180;
      x0=(x0*pi)/180;
      
	  int i;
      for (i=0;i<=N;i++){
      	switch(i%4){
      		case 0: derivatives= cos(x0); break;
      		case 1: derivatives= (-1.0)*sin(x0); break;
      		case 2: derivatives= (-1.0)*cos(x0); break;
      		case 3: derivatives= sin(x0); break;
		  }
		  T+=derivatives*pow((x-x0),i)/fact(i);
	  }
	  printf("\nseries result:%f",T);
	  printf("\n\ncomputer result:%f",cos(x));
	  return 0;
	
	
}
