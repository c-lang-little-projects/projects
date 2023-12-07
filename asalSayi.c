#include <stdio.h>
#include <ctype.h>
int main()
{
    int yourNumber , m; // yourNumber => null  m => null
    printf("enrt your number :"); // print => entry your number :
    scanf("%d" , &yourNumber); // write => yourNumber = 11

    for(m = 2;m < yourNumber;m++){ // m = 2 if m < (yourNumber = 11)  m++
        if(yourNumber % m == 0){ // yourNumber % 2 == 0 => true
            printf("girdiginiz sayi asal sayidir degil");
            break;
        }
        else{
            printf("girdiginiz sayi asal sayidir  ");
            break;
            }
        }

    }




