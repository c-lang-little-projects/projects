#include<stdio.h>

int main()
{

    int array[] = {316,813,319,318,183,515,183};
    int NumtoDelete , i;
    int len = sizeof(array) / sizeof(int);

    printf("the array :");
    for(i = 0 ; i < len ; i++){
        printf(" %d " , array[i]);
    }

    printf("\nwrite witch number you want to delete : ");
    scanf("%d",&NumtoDelete);
    for(i = 0; i < len ; i++) {
        if(NumtoDelete == array[i]) {
            for(int j = i ; j < len ; j++){
                array[j] = array[j + 1];
            }
            len = len - 1;
        }
    }
    for(i = 0; i < len; i++) {
        printf("%d ",array[i]);
    }
    return 0;
}
