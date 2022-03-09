// Klavyeden yarý çapý girilen dairenin, alanýný hesaplayan programý yazýnýz.

#include <stdio.h>

int main(){
	int daireYaricap;
	float pi=3.14, daireAlan;

     
	printf("Dairenin yaricapini giriniz : "); 
	scanf("%d",&daireYaricap);

 
	daireAlan = pi * daireYaricap * daireYaricap; 
	printf("Dairenin alani : %f \n",daireAlan);
}
