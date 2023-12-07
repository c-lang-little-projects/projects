#include<stdio.h>

int makeOne(int *first , int *second , int length ,int g){
    int o = 0;
    for(int i = 0; i < length ; i++) {
            if(i >=  g){
                first[i] = second[o];
                o++;
            }
    }


        for(int i = 0 ; i < length ;i++){
            printf("%d " , first[i]);
        }

}
int main()
{

    int a[] = {77,34,58,56,85,78,100,78};
    int b[] = {75,26,47,56};
    int r = (sizeof(a) + sizeof(b)) / sizeof(int);
    int y = sizeof(a) / sizeof(int);
    makeOne(a , b , r ,y );

    return 0;
}
