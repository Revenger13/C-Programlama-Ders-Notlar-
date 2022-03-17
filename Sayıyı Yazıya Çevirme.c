#include<stdio.h>

main(){
int sayi,birler,onlar;
printf("Sayi giriniz:");
scanf("%d",&sayi);
if(sayi>9 && sayi<100){
birler=sayi%10;
onlar=sayi/10;
}
else{
printf("Hatali sayi girdiniz. Tekrar Deneyiniz!");
}
switch(onlar){
case 1 : printf("on");
break;
case 2 : printf("yirmi");
break;
case 3 : printf("otuz");
break;
case 4 : printf("kirk");
break;
case 5 : printf("elli");
break;
case 6 : printf("Altmiþ");
break;
case 7 : printf("Yetmiþ");
break;
case 8 : printf("Seksen");
break;
case 9 : printf("Doksan");
break;
}
switch(birler){
case 0 : printf("Sifir");
break;
case 1 : printf("Bir");
break;
case 2 : printf("Ýki");
break;
case 3 : printf("Uc");
break;
case 4 : printf("Dort");
break;
case 5 : printf("Bes");
break;
case 6 : printf("Alti");
break;
case 7 : printf("Yedi");
break;
case 8 : printf("Sekiz");
break;
case 9 : printf("Dokuz");
break;
}

}
