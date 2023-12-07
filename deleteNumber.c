#include<stdio.h>

int main()
{

    int array[] = {316,813,319,318,183,515};
    int Num;
    int len = 7;
    printf("write wich number you want delete ");
    scanf("%d",&Num);
    for(int i = 0; i < 7; i++) {
        if(Num == array[i] ) {
            array[i] = array[i + 1];
            len = len - 1;
        }
    }
    for(int i = 0; i < 6; i++) {
        printf("%d \n",array[i]);
    }
    return 0;
}
