#include <stdio.h>

int main(){
     int sayi,toplam = 0;

     printf("Bir sayi giriniz : ");
     scanf("%d",&sayi);

     for(int i=0 ; i<sayi ; i++){
          toplam = toplam + i;
     }

     printf("0 ile %d arasindaki sayilarin toplami : %d ", sayi, toplam);
}
