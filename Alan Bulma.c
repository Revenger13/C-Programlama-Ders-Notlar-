/*-ucgen alani
2-kare alani
3-dikdortgen alani

bir secim yapiniz: 1
taban gir:
yukseklik gir:
ucgen alani:
*/
#include<stdio.h>
main(){
int a,b,c,sec;
printf("\n1-ucgen alani");
printf("\n2-kare alani");
printf("\n3-dikdortgen alani");
printf("\nbir secim yapiniz:");
scanf("%d",&sec);
if(sec==1){
printf("taban uzunlugu gir:");
scanf("%d",&a);
printf("yukseklik gir:");
scanf("%d",&b);
c=a*b/2;
printf("ucgen alani: %d",c);
}
if(sec==2){
printf("karenin bir kenar uzunlugunu gir:");
scanf("%d",&a);
c=a*a;
printf("karenin alani: %d",c);
}
if(sec==3){
printf("dikdortgenin birinci kenarýný  gir:");
scanf("%d",&a);
printf("dikdortgenin ikinci kenarýný  gir:");
scanf("%d",&b);
c=a*b;
printf("dikdörtgenin alani: %d",c);
}
}
