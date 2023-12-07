#include <stdio.h>


int main()
{
    char dizi[] = {'i','g','i','l','s','i','d','n','e','h','u','m','-','m','i','l','i','z','a','y'};

    int len = sizeof(dizi) / sizeof(char);
    char swap;
    for(int i = 0 ; i < len / 2 ;i++){
        swap = dizi[i];
        dizi[i] = dizi[len - i - 1];
        dizi[len - i - 1] = swap;
    }

    for(int i = 0; i < len + 1;i++){
        printf("%c" , dizi[i]);
    }

    return 0;
}

