#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    char a;

    // Pattern 6: Hollow Alphabet Square
    for(x=0;x<=4;x++){
        for(y=1;y<=5;y++){
            a='A';
            if(x==0)
                printf("%c",a);
            else if(y==1 && x<=3)
                printf("%c",a);
            else if(y==5){
                a=a+x;   
                printf("%c",a);}
            else if(x==4){
                a=a+x;
                printf("%c",a);}
            else    
                printf(" ");
        }
        printf("\n");
    } 


    // Pattern 7: Alphabet Diamond 
    for(x=0;x<=8;x++){
        a='A';
        for(y=1;y<=9;y++){
            if( x<=4 && y>=5-x && y<=5+x || x>4 && y>=-3+x && y<=13-x){
                printf("%c",a);
                a++;}
            else
                printf(" ");
        }
        printf("\n");
    }


    // Pattern 8: Alphabet Triangle 
    for(x=1;x<=5;x++){
        a='A';
        for(y=1;y<=x;y++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }


    // Pattern 9: Reverse Alphabet Triangle
    for(x=5;x>=1;x--){
        a='A';
        for(y=1;y<=x;y++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    } 
    

    // Pattern 10: Alphabet Cross 
    a='A';
    z=5;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(y==x || y==z)
                printf("%c",a);
            else    
                printf(" ");
        }
        printf("\n");
        z--;
        a++;
    }
    
    return 0;
}

