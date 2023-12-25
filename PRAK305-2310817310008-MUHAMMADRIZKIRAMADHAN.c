#include <stdio.h>

int main(){
    int a, sisa, hari, jam, menit, detik;
    printf(" ");
    scanf("%d", &a);

    hari    = a / 86400;
    sisa    = a % 86400;
    jam     = sisa / 3600;
    sisa    = sisa % 3600;
    menit   = sisa / 60;
    detik   = sisa % 60;

        if (a >= 0 && a < 86400){
        printf("%02d:%02d:%02d", jam, menit, detik);
        }
        else {
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
        }
    return 0;
}

