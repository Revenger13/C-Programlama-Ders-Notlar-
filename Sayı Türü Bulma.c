/* klavyeden 3 basamaklý bir sayý giriliyor. (3 basamaklý olmak zorunda)
girilen bu sayi;
112, 116, 229 formatýnda ise mükemmel sayi
121, 151, 565 formatýnda ise harika sayi
122, 166, 899 formatýnda ise süper sayý ve bunlarýn disinda kalan sayilar ise normal sayi olarak adlandýrýlýyor
klavyeden girilen 3 bas. sayýnýn hangi tür sayi oldugunu bulan programý yaziniz.
*/
#include<stdio.h>
main(){
int sayi,y,o,b;
printf("3 basamakli bir sayi girin:");
scanf("%d",&sayi);
if(sayi<1000 && sayi>99){
y=sayi/100;    // 123/100=1
o=(sayi/10)%10; //741/10=74%10=4
b=sayi%10;     // 456%10=6 sayýyý sürekli 10 sayýsýna böler
if(y==o && y!=b){
printf(" mukemmel sayi...");
}
else if(y==b && y!=o){
printf("harika sayi...");
}
else if(o==b && o!=y){
printf("super sayi...");
}
else{
printf("normal sayi...");
}
}
else{
printf("sayi 3 basamakli degil..");
}
}
