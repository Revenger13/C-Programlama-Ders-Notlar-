//Soru: Klavyeden girilen 5 adet sayýdan en büyüðünü bulan programý yazýnýz.

//Çözüm: 
#include <stdio.h>
main()
{
    int sayi1,sayi2,sayi3,sayi4,sayi5;
    int enbuyuk;

    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    printf("3.Sayiyi giriniz: ");
    scanf("%d",&sayi3);
    printf("4.Sayiyi giriniz: ");
    scanf("%d",&sayi4);
    printf("5.Sayiyi giriniz: ");
    scanf("%d",&sayi5);

    enbuyuk = sayi1;
    
    if(sayi2 > enbuyuk){
        enbuyuk = sayi2;
    }
    if(sayi3 > enbuyuk){
        enbuyuk = sayi3;
    }
    if(sayi4 > enbuyuk){
        enbuyuk = sayi4;
    }
    if(sayi5 > enbuyuk){
        enbuyuk = sayi5;
    }
    printf("En buyuk sayi %d dir",enbuyuk);
}

