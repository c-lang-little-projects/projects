#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int t[10] ;
    int i ;
    for(int y = 0; y < 9;y++){
    printf(" %d " , arr[y]);
    }
    printf(" \n ");
    printf(" \n ");
    printf(" \n ");
    for( i  = 0; i < 9 ;i++){
    t[8 - i] = arr[i];
    }
    for(i = 0; i < 9 ;i++){
    arr[i] = t[i];
    }
    for(int y = 0; y < 9;y++){
    printf(" %d " , arr[y]);
    }
    return 0;
}
