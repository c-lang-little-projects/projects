#include <stdio.h>

int main()
{
     int a,b,c;
    int toplam = 0;
    printf("birinci sayi giriniz :");
    scanf("%d" , &b);
    printf("ikinci sayi giriniz :");
    scanf("%d" , &c);
    for(a=b;a<=c;a++){
        toplam = toplam + a;
    }

    printf("%d" , toplam);

    return 0;
}
