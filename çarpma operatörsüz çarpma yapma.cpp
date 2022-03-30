#include <stdio.h>
main()
{
	int a, b, c;
	printf("iki sayi giriniz: ");
	scanf("%d %d" , &a, &b);
    
    c = 0;
	do {
		c = c + a;
		b= b - 1;
		
	}  while(b>0);
	printf(" Sonuc: %d\n", c);
}
