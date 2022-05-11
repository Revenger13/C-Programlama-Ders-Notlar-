#include <stdio.h>

int main()
{
    int notlar[3][5];
    
    for(int i=0;i<3;i++)
	{
        for(int k=0;k<5;k++)
        {
        	printf("Eleman Giriniz: notlar[%d][%d]",i,k);
        	scanf("%d",&notlar[i][k]);
		}
		
    }
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
    
    
