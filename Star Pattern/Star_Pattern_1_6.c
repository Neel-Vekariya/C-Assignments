#include<stdio.h>
#include<stdlib.h>



int main(){
    system("cls");
    int i,j;
    

// Pattern 1: Right Triangle
    for(i=1;i<6;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }


    // -------------------------------------------------------------------------------------------------------------------

// Pattern 2: Inverted Right Triangle
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }


    // -------------------------------------------------------------------------------------------------------------------



     
// Pattern 3: Pyramid 
for(i=0;i<5;i++){
    for(j=1;j<=9;j++){
        if(j>=5-i && j<=5+i){
            printf("*");
        }
        else{
            printf(" ");
        } 
    }
    printf("\n");       
    }


    // -------------------------------------------------------------------------------------------------------------------



// Pattern 4: Inverted Pyramid
for(i=4;i>=0;i--){
    for(j=1;j<=9;j++){
        if(j>=5-i && j<=5+i){
            printf("*");
        }
        else{
            printf(" ");
        } 
    }
    printf("\n");       
    }
    

    // -------------------------------------------------------------------------------------------------------------------




// Pattern 5: Diamond 
for(i=0;i<=4;i++){
    for(j=1;j<=9;j++){
        if(j>=5-i && j<=5+i){
            printf("*");
        }
        else{
            printf(" ");
        } 
    }
    printf("\n");       
    }
for(i=3;i>=0;i--){
    for(j=1;j<=9;j++){
        if(j>=5-i && j<=5+i){
            printf("*");
        }
        else{
            printf(" ");
        } 
    }
    printf("\n");       
    }
    return 0;
}