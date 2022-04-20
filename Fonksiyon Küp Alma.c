#include<stdio.h>
#include<conio.h>

int kup(int a)
{
	return a*a*a;
}

main()
{
	int a;
	printf("Sayi giriniz : ");
	scanf("%d",&a);
		
	
	
	printf("Girilen sayinin kupu = %d",kup(a));
	
	getch();
}
