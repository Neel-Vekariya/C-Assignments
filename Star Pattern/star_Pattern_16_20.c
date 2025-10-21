#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int a,b,c;
  
    // Pattern 16: Sandglass 
    for(a=0;a<=2;a++){
        for(b=1;b<=5;b++){
            if(b>=1+a && b<=5-a)
                printf("*");
            else
                printf(" "); 
        }
        printf("\n");
    }
    for(c=0;c<=1;c++){
        for(b=1;b<=5;b++){
            if(b>=2-c && b<=4+c)
                printf("*");
            else
                printf(" ");            
        }
        printf("\n");
    }


    // __________________________________________________________________________________________
    // Pattern 17: Triangle Numbers with Stars 
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++){
            if(b==1 || b==a || a==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");   
    }

    
    // __________________________________________________________________________________________
    // Pattern 18: Star Border   
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++){
            if(a==1 || a==5 || b==1 || b==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    // __________________________________________________________________________________________
    // Pattern 19: Star Staircase   
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++){
            if(b<=a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(a=0;a<=3;a++){
        for(b=0;b<=3;b++){
            if(b<=3-a)
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    
    // __________________________________________________________________________________________
    // Pattern 20: Zigzag Stars 
    for(a=0;a<=2;a++){
        for(b=1;b<=9;b++){
            if(b==3-a || b==3+a || b==7-a || b==7+a)
                printf("*");
            else
                printf(" ");     
       }
    printf("\n");
    }
    return 0;
}
