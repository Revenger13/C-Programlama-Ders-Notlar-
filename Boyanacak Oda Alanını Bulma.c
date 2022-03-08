/* bir odada boyanacak toplam alani hesaplayan programi yaziniz.
alanlar hesaplanirken veriler klavyeden girilecek.
*/
#include<stdio.h>
main(){
int ta,tb,tavan,d1a,d1b,duvar1,d2a,d2b,duvar2,toplam;
// önce taban alaný hesabý
printf("tavanin en uzunlugunu girin:");
scanf("%d",&ta);
printf("tavanin boy uzunlugunu girin:");
scanf("%d",&tb);
tavan=ta*tb;
printf("\ntavan alani= %d",tavan);
//1.duvar alani ve karþý duvar alani toplami
printf("\n1.duvarin en uzunlugunu giriniz");
scanf("%d",&d1a);
printf("\n1.duvarin boy uzunlugunu giriniz:");
scanf("%d",&d1b);
duvar1=d1a*d1b*2;
printf("\n1.duvar ve karsi duvarin alanlar toplami: %d",duvar1);
//2.duvar alani ve karþý duvar alani toplami
printf("\n2.duvarin en uzunlugunu giriniz:");
scanf("%d",&d2a);
printf("\n2.duvarin boy uzunlugunu giriniz:");
scanf("%d",&d2b);
duvar2=d2a*d2b*2;
printf("\n2.duvar ve karsi duvarin alanlar toplami: %d",duvar2);
// Toplam Alan
toplam=duvar2+duvar1+tavan;
printf("\nToplam Boyanacak Alan: %d",toplam);
}
