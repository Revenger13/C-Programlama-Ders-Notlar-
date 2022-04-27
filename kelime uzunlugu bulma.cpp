// klavyeden girilen metnin uzunluðunu bulan program.
#include<stdio.h>



	int uzunluk(char dizi[])
	{
		int i;
		for(i=0;dizi[i]!='\0';i++)
		{
			
		}
		return i;
	}
	

main()
{
	char kelime[100];
	printf("Metin giriniz : ");
	gets(kelime);
	printf("Girilen metnin uzunlugu : %d ",uzunluk(kelime));
	
}
