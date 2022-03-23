#include <stdio.h>
#include <conio.h>
int main()
{
int i, ogr_say, not_top, not1;
  float ort;
  
  not_top = 0;
  
  i = 0;
  
  printf("Ogrenci sayisi giriniz:  "); 

  
  scanf("%d", &ogr_say);
  
  while (i < ogr_say) {
  	
 	printf("Siradaki ogrencinin notu  = "); 
	 
	scanf("%d", &not1);
 	
 	not_top = not_top + not1;
 	
 	i = i + 1;
   
   }
   
   ort=(not_top)/ogr_say;
   
   printf("Ortalama = %f",ort); 
 
getch ();
return 0;
}
