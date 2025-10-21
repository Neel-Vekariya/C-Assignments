#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y;
    system("cls");

    
    // Pattern 1: Right Triangle   
    char a = 'A';
    for(x=1;x<=5;x++){
        for(y=1;y<=x;y++){
            printf("%c",a);
        }
        printf("\n");
        a++;
    }

// ----------------------------------------------------------------------------------
    // Pattern 2: Inverted Right Triangle
    a ='E'; 
    for(x=1;x<=5;x++){
        for(y=5;y>=x;y--){
            printf("%c",a);
        }
        printf("\n");
        a--;
    }
    // ---------------------------------------------------------------------------
    
    // Pattern 3: Pyramid 
    a ='A';
    for(x=0;x<=4;x++){
        for(y=1;y<=9;y++){
            if(y>=5-x && y<=5+x)
                printf("%c",a);
            else    
                printf(" ");
        }
        printf("\n");
        a++;
    }

// -----------------------------------------------------------------------------------
    // Pattern 4: Alphabet Square
    for(x=1;x<=5;x++){
        a='A';
        for(y=1;y<=5;y++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    } 

// ----------------------------------------------------------------------------
    // Pattern 5: Reverse Alphabet Square
    for(x=1;x<=5;x++){
        a='E';
        for(y=1;y<=5;y++){
            printf("%c",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}
