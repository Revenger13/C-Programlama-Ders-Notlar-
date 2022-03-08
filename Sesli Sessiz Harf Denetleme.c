#include <stdio.h>
main()
{
char harf ;
printf("\n Bir harf giriniz :");
scanf("%c",&harf);
if( harf == 'A' || harf == 'E' || harf == 'I' || harf   == 'O' || harf == 'U' || harf == 'a' || harf == 'e' || harf == 'i' || harf   == 'o' || harf == 'u' )

printf("\n %c bir SESLI harftir.",harf);

else
printf("\n %c bir sesli harf DEGILDIR.",harf);

}
