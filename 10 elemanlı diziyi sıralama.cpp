//10 elemanlý tam sayý tutabilen bir dizinin deðerlerini büyükten küçüðe doðru sýralayacaðýz
#include<stdio.h>

main(){
	int sayi[10];
	int i=0,j,temp;
	
	while (i<10) {
		printf("\n Dizinin %d. Elemanini Giriniz:",i);
		scanf("%d",&sayi[i]);
		i++;
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(sayi[i]<sayi[j])
			{
				temp=sayi[i];
				sayi[i]=sayi[j];
				sayi[j]=temp;
			}
		}
	}
	printf("\n GÝrilen Sayilari Buyukten Kucuge Siralanmasi \n");
	i=0;
	while (i<10) {
		printf("\n sayi[%d]= %d",i,sayi[i]);
		i++;
	}
}
