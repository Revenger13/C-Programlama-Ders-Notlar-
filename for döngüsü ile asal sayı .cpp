#include <stdio.h>

int main(void) 
{
      
       int sayi,a = 0, i ;
       
       printf("Bir sayi giriniz:");
       scanf("%d", &sayi);
       for( i = 2; i <= sayi/2; i++) {
         if(sayi % i == 0) {
           a = 1;
           break;
         }
       } 
       if(a == 0)
          printf("Sayi Asaldir\n");
       else
          printf("Sayi Asal Degildir\n");
       return 0;
}
