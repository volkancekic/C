#include<stdio.h>
#include<math.h>
double fonk(double x){
	return pow(2,x) -5*x+2;
}

int main(){
     double x0=0.0,x1=1.0,ortanca,mutlak_hata,tolerans=0.1;            

  do{
  	ortanca=(x0+x1)/2;
  	mutlak_hata=fabs(ortanca-x1);
  	
  	if(fonk(x0)*fonk(ortanca)<0){
  		x1=ortanca;
	  }
	  else if(fonk(x1)*fonk(ortanca)<0){
	  	x0=ortanca;
	  }
  }while(mutlak_hata>tolerans);
  
  printf("ortanca deger =   %f",ortanca);
  return 0;
}
