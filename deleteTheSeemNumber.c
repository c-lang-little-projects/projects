#include<stdio.h>
int main()
{
    int array[] = {13,316,516,316,318,185,193};
    int len = 7;
    for(int i = 0 ; i < 7; i++) {
        for(int r = i  ; r < 7; r++ ) {
            if(array[i] == array[r]) {
                array[r] = array[r + 1];
            }
        }
        if(array[i] == 0) {
            len--;
        }
    }
    for(int i = 0 ; i < len ; i++) {
        printf("%d \n", array[i]);
    }
    return 0;
}