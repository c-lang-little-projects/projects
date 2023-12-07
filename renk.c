#include<stdio.h>
#include<stdlib.h>

int main(){

    char g ;
    printf("enter the char : ");
    scanf("%c" , &g);
    if(g == 'm'){
        system("cls");
    }else{
        printf("you should write m to clear page");
    }

    return 0;


}
