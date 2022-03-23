#include <stdio.h>
main()
{


int i,j,k;
	i=0;
	j=0;

	printf("Kaca kadar toplama yapilacagini girin: ");
	scanf("%d",&k);

	while (i <= k) {
			j = j+i;
			i = i+1;
	
	}
	printf("Toplam = %d",j);
	return 0;
}
