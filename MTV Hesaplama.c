/* BÝR ARACIN MTV TUTARI HESAPLANMAK ÝSTENÝYOR. EÐER TOPLAM MTV TUTARI 2000 TL VE ÜZERÝ ÝSE EK OLARAK 1000 TL DAHA ÜCRET ÖDEMEKTEDÝR.
BU ARAÇ NE KADAR MTV VE VARSA EKSTRA MTV TUTARINI NE KADAR ÖDEMÝÞTÝR.
FORMÜL MTV=YAS*HACÝM/2
*/
#include<stdio.h>
main(){
int yas,model,hacim,mtv,mtv1;
printf("model giriniz: ");
scanf("%d",&model);
yas=2023-model;
printf("hacim giriniz: ");
scanf("%d",&hacim);
mtv=yas*hacim/2;
if(mtv>=2000){
mtv1=mtv+1000;
printf("ekstra tutarli mtv ucreti: %d",mtv);
}
printf("\n mtv ucreti: %d",mtv);

}
