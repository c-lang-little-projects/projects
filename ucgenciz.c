#include <stdio.h>

int main(){

int n ;
printf("write you number : ");
scanf("%d" , &n);
    for(int i = 0; i <= n;i++){
        for(int o = i ; o < 10;o++){
            printf(" ");
        }
        for(int p = 0 ; p < i ;p++){
            printf("*");
        }
        for(int p = 0 ; p <= i ;p++){
            printf("*");
        }
        printf("\n");

    }





   return 0;
}
