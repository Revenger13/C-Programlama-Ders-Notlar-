// klavyeden girilen bir tam sayýnýn tek mi çift mi olduðunu ekrana yazdýran programý yazýnýz.

#include <stdio.h>
#include <conio.h>
int main(){      
int a;        
printf("Bir sayi giriniz: \n");
scanf("%d",&a);    
if(a%2==0){    
 printf("%d sayisi cift sayidir \n",a);
}
 else{
 printf("%d sayisi tek sayidir \n",a);
 }
getch ();
 return 0;      
 }
