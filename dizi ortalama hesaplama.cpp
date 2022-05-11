//5 öðrencinin ödev vize final notlarý
#include<stdio.h>

main()
{
	int notlar[3][5]=  {{20,60,90,70,10}, //ÖDEV
						{30,75,90,75,25},//VÝZE
						{50,80,90,45,30}};//FÝNAL
	
	for(int i=0;i<3;i++)
	{
		for(int k=0;k<5;k++)
		{
			printf("%3d",notlar[i][k]);
		 }
		 printf("\n");
	}
	printf("\nFinal ortalamasi\n");
		float f_toplam=0;
		for(int i=0;i<5;i++)
		{
			f_toplam+=notlar[2][i];
		}
		printf("Final Ortalamasi = %f\n",(f_toplam/5.0));
		
		float ucuncu_ogr_ort=0;
		for(int i=0;i<3;i++)
		{
			ucuncu_ogr_ort+=notlar[i][3];
		}
	printf("\n3.indexteki ogr'nin ortalamasi = %f\n",(ucuncu_ogr_ort/3.0));
}
