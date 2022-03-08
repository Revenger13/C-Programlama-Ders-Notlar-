//Doðum tarihi girilen kiþinin yaþýný hesaplayan programý yazýnýz.
#include <stdio.h>
#include <conio.h>

int main()
{
    int yil, ay, gun, dyil, day, dgun, yyil, yay, ygun;

    printf("Lutfen dogum tarihinizi giriniz (Gun/Ay/Yil) : ");
    scanf("%d/%d/%d", &dgun, &day, &dyil);

    printf("Lutfen gunumuz tarihini giriniz (Gun/Ay/Yil) : ");
    scanf("%d/%d/%d", &gun, &ay, &yil);

    if(dgun>gun) {
        gun=gun+30;
        ay=ay-1;
    }

    if(day>ay) {
        ay=ay+12;
        yil=yil-1;
    }

    ygun=gun-dgun;
    yay=ay-day;
    yyil=yil-dyil;

    printf("-------------------------------------------------------------------\n");

    printf("Siz dogali %d gun, %d ay, %d yil olmustur.\n", ygun, yay, yyil);

    getch();
    return 0;
}
