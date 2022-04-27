// 10 elemanlý bir dizide en büyük ve en küçüðü bulalým ve kaçýncý eleman olduðunu yazdýralým. 

#include <stdio.h>

int main(){
    int sayilar[10];
    

    for(int i=0;i<10;i++)
	{
        printf("%d. sayiyi giriniz :",i+1);
        scanf("%d",&sayilar[i]);
    }
    
    int eb,ek,ek_i=0,eb_i=0;
    ek=eb= sayilar[0];
    	for(int i=0;i<10;i++)
    	{
    		if(sayilar[i]>eb)
    		{
			
    		eb=sayilar[i];
    		eb_i=i;
    		}
		
			if(sayilar[i]<ek)
    		{
			
    		ek=sayilar[i];
    		ek_i=i;
    		}
		}
		printf("En buyuk = %d ve sirasi = %d\n",eb,eb_i);
		printf("En kucuk = %d ve sirasi = %d\n",ek,ek_i);
    
}
