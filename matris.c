#include <stdio.h>
#include <time.h>

int main()
{
    int matrix[9][3][3];
    int i , x , j;
    time_t t;

    for(i = 0 ; i < 9 ; i++){
        for(j = 0 ; j < 3 ;j++){
            for(x = 0 ; x < 3 ; x++){
                matrix[i][j][x] = (i % 3) * 3 + x + 1;

            }
        }
    }


    for(i = 0 ; i < 9 ; i++){
        for(j = 0 ; j < 3 ; j++){
            for(x = 0 ; x < 3 ; x++){
                printf(" %d " , matrix[i][j][x]);
            }printf(" | " );
        }printf("\n");

        if((i + 1) % 3 == 0)
            printf("\n");
    }
    return 0;
}

