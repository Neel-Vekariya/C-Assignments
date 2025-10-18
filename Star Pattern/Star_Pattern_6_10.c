#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");  
    int a, b, c;

    // Pattern 6: Hollow Square
    for(a = 1; a <= 5; a++) {
        if(a == 1 || a == 5) {
            for(b = 1; b <= 5; b++) {
                printf("*");
            }
        } else {
            for(c = 1; c <= 5; c++) {
                if(c == 1 || c == 5) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }


    // -------------------------------------------------------------------------------------------------------------------
    // Pattern 7: Plus Pattern   
    for(a=1;a<=5;a++){
        if(a==3){
            for(c=1;c<=5;c++)
                printf("*");
                printf("\n");
                continue;
        }
        for(b=1;b<=3;b++){
            if(b==3)
                printf("*");
            else
                printf(" ");
        }
        if(a==3){
            for(c=1;c<=5;c++)
                printf("*");
        }
        printf("\n");
        }


        // -------------------------------------------------------------------------------------------------------------------
    // Pattern 8: X Pattern 
    for(a=1;a<=5;a++){
        c=6;
        for(b=1;b<=5;b++){
            if(b==a || b == c-a ){
                printf("*");
            }
            else
                printf(" ");   
        }   
        printf("\n");
        c--;
    }
  
    
        // -------------------------------------------------------------------------------------------------------------------
    // Pattern 9: Hollow Diamond   
    for(a=0;a<=4;a++){
        for(b=1;b<=9;b++){
            if(b == 5-a || b == 5+a){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }  
    for(a=3;a>=0;a--){
        for(b=1;b<=9;b++){
            if(b == 5+a || b == 5-a){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }  
   
    
        // -------------------------------------------------------------------------------------------------------------------
    
    // Pattern 10: Arrow 
    for(a=1;a<=3;a++){
        for(b=1;b<=5;b++){
            if(b>3-a && b<3+a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(a=1;a<=2;a++){
        for(b=1;b<=3;b++){
            if(b==3)
                printf("*");
        else    
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
  

 
