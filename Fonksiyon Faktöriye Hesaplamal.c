#include<stdio.h>
int fak(int n){
	if (n==1)
	return 1;
	else
	return n*fak(n-1);
}
main (){
	
	int n;
	printf("Faktoriyeli hesaplamak icin deger giriniz : ");
	scanf("%d",&n);
	printf("Girilen sayinin faktoriyeli=%d\n",fak(n));

}
