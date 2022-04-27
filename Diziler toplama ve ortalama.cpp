// 5 elemanlý biz dizinin toplamýný ve ortalamasýný yazdýran program.

#include<stdio.h>

main()
{
	int dizi[5];
	int toplam=0;
	
	for (int i=0;i<5;i++)
	{
		printf("%d. Elemani gir : ",i);
		scanf("%d",&dizi[i]); // i deðeri kaç ise scanf'e o deðer atanacak.
		toplam+=dizi[i];
	}
	printf("Toplam = %d ve Ortalama = %f",toplam,(toplam/5.0));
	
}
