//Soru: Klavyeden bir aracýn gittiði mesafe (km) ve bu mesafeyi gittiði zaman (saat) giriliyor. Aracýn bu mesafeyi belirtilen sürede gitmesi için hýzýnýn ne kadar olmasý gerektiðini hesaplayan programý yazýnýz.
//( X=V*T, X=YOL, V=HIZ, T=ZAMAN)
//Çözüm: 
#include <stdio.h>

main()
{
	
float yol,hiz,zaman;

printf("Gidilen mesafeyi giriniz (KM) : ");

scanf("%f",&yol);

printf("Gecirilen zamani giriniz (Saat) : ");

scanf("%f",&zaman);

hiz=yol/zaman;

printf("Gitmeniz gereken hiz =%f KM/S ",hiz);

}

