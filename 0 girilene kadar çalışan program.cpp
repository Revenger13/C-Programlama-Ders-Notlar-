#include <stdio.h>
main()
{
	int say,top;
	int sayac=0;
	top=0;
	
	do {
		printf("Bir sayi giriniz:");
		scanf("%d",&say);
		top+=say;
		sayac++;
	}
	while(say != 0);
	printf("Girdiginiz %d adet sayinin toplami %d dir",sayac,top);
}
