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
   
    notu=(quiz*0.1)+(vize*0.3)+(final*0.6);
   
    printf("Yil sonu notu = %d\n",notu);
   
    if(notu > 60){
        printf(" %d ile Dersten Gectiniz.",notu);
    }
    else if(notu < 60){
        printf(" %d ile Dersten Kaldiniz.",notu);
    }
    else{
        printf(" %d ile Dersten Kaldiniz.",notu);
    }
}
