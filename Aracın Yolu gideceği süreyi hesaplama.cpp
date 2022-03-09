#include <stdio.h>

int main(void)
{
    int mesafe;
    int hiz;
    
    printf("Gidilecek Mesafe(KM) : ");
    scanf("%d", &mesafe);
    printf("Arac Hizini Giriniz (KM/S)    : ");
    scanf("%d", &hiz);
    
    int toplam_saniye = (mesafe / (float)hiz) * 3600;
    
    printf("Gecirilecek Sure : %d saat %d dakika %d saniye.\n", toplam_saniye / 3600, (toplam_saniye % 3600) / 60, toplam_saniye % 60);
}
