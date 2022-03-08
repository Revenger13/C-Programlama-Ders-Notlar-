#include <stdio.h>
 
main()
{
    int vize;
    int final;
    int quiz;
    int notu;
   
    printf("Vize notunu giriniz: ");
    scanf("%d",&vize);
    printf("Final notunu giriniz: ");
    scanf("%d",&final);
    printf("Quiz notunu giriniz: ");
    scanf("%d",&quiz);
   
    notu=(quiz*0.1)+(vize * 0.3)+(final * 0.6);
   
    printf("Ortalama = %d\n",notu);
   
    if(notu < 100 && notu >= 90){
        printf(" AA ile dersi gectiniz.");
    }
    else if(notu < 90 && notu >= 85){
        printf("BA ile dersi gectiniz.");
    }
    else if(notu < 85 && notu >= 80){
        printf("BB ile dersi gectiniz.");
    }
    else if(notu < 80 && notu >= 75){
        printf("CB ile dersi gectiniz.");
    }
    else if(notu < 75 && notu >= 50){
        printf("%d ile Kosullu gectiniz",notu);
    }
    else{
        printf("%d ile Dersten kaldiniz..",notu);
 }
 }
