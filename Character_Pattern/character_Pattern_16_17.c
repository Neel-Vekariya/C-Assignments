#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    char a; 
    a='A';
       for(x=1;x<=5;x++){
           for(y=1;y<=x;y++){
               printf("%c",a);
               a++;
           }
           printf("\n");
       }



    //    Pattern -- 17

    x = 5;
    a = 'A';

    for(x = 0; x < 5; x++) {
        for(y = 0; y < 5 - x - 1; y++)
            printf(" ");
        printf("%c", a++);
        if(x > 0) {
            for(z = 0; z < 2 * x - 1; z++)
                printf(" ");
            printf("%c", a++);
        }
        printf("\n");
    }

    a -= 2;
    for(x = 3; x >= 0; x--) {
        for(y = 0; y < 5 - x - 1; y++)
            printf(" ");
        printf("%c", a--);
        if(x > 0) {
            for(z = 0; z < 2 * x - 1; z++)
                printf(" ");
            printf("%c", a--);
        }
        printf("\n");
    }
return 0;
}


