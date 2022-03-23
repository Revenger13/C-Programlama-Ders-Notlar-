#include <stdio.h>
 
main()
{
    int sayi;
    int sayac = 0;
    int i = 2;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    while(i < sayi)
    {
        if(sayi % i == 0){
            sayac++;     // eger sayimizi tam bölen sayý varsa sayacý arttýrýyoruz..
        }
        i++;
    }
    if(sayac == 0){
        printf("%d Sayisi asal bir sayidir.",sayi);
    }
    else{
        printf("%d Sayisi asal bir sayi degildir.",sayi);
    }
}
