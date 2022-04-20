#include<stdio.h>
#include<conio.h>

int toplama(int x,int y)
{
	return x+y;
}

main()
{
	int a,b;
	printf("1.Sayi giriniz : ");
	scanf("%d",&a);
	printf("2.Sayi giriniz : ");
	scanf("%d",&b);
	
	//int c = ;
	
	printf("%d",toplama(a,b));
	
	// getch();
}
