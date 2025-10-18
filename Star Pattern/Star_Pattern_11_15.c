#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int a,b,c;

//    Pattern 11: Heart 
    for(a=0;a<=1;a++){
        for(b=0;b<=8;b++){
            if(b>=1-a && b<=2+a || b>=6-a && b<=7+a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(a=0;a<=4;a++){
        for(b=1;b<=9;b++){
            if(b>=1+a && b<=9-a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }



// -------------------------------------------------------------------------------------------------------------------       
    // Pattern 12: Cross 
    c=0;
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++){
            if(a==b || b==5-c)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
        c =c + 1;
    }



// -------------------------------------------------------------------------------------------------------------------       
    // Pattern 13: Hollow Pyramid 
    for(a=0;a<=3;a++){
        for(b=1;b<=9;b++){
            if(b==5-a || b==5+a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    } 
    for(c=1;c<=9;c++)
        printf("*"); 


// -------------------------------------------------------------------------------------------------------------------   
// Pattern 14: Right Arrow 
    for(a=1;a<=5;a++){
        for(b=1;b<=a;b++)
            printf("*");
        printf("\n");       
    } 
    for(a=4;a>=1;a--){
        for(b=1;b<=a;b++)
            printf("*");
        printf("\n");
    }



// -------------------------------------------------------------------------------------------------------------------   
    // Pattern 15: Right Arrow
    for(a=5;a>=1;a--){
        for(b=1;b<=5;b++){
            if(b>=a)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    for(a=1;a<=4;a++){
        for(b=1;b<=5;b++){
            if(b>a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}


  