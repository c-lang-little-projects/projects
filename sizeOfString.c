#include<stdio.h>
#include<stdbool.h>

int lenOfStr(char *strin );

int main(){


   char j[] = "jamal aldeen khalil";

   printf("%d" , lenOfStr(j));

   return 0;
}

int lenOfStr(char *strin ){
    int len = 0;
    for(int i = 0; true;i++){
        if(strin[i] == '\0'){
            break;
        }else{
            len++;
        }
    }
    return len;
};
