#include<stdio.h>
#include<stdlib.h>

int main(){
    int w,x,y,z;
    char a,b;

    // Pattern 11: Alphabet X
    a='A',b='E',z=5;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(y==x){
                printf("%c",a);
                a++;}
            else if(y==z && y!=3)
                printf("%c",b);
            else
                printf(" ");
        } 
        b--;
        printf("\n");
        z--;
    }


    // Pattern 12: Alphabet Pyramid Numbers
    a='A'; 
    w=4;
    for(x=1;x<=5;x++){
        for(z=1;z<=w;z++)
            printf(" ");
        for(y=1;y<=5;y++){
            if(y<=x){
                printf("%c",a);
                printf(" ");
                a++;
            }
            else
                printf(" ");
        }
        printf("\n");
        w--;
    }
 
    
    //   Pattern 13: Alphabet Spiral  
    a='A';
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(x==1 || x==5)
                printf("%c",a);
            else if(y==3)
                printf("%c",a);
            else
                printf(" ");
        }
        a++;
        printf("\n");
    }
    
    
    // Pattern 14: Alphabet Staircase
a='A';
    for(x=1;x<=5;x++){
        for(y=1;y<=x;y++){
            printf("%c",a);
        }
        a++;
        printf("\n");
    }  
    a--;
    for(x=1;x<=4;x++){
        a--;
        for(y=4;y>=x;y--){
            printf("%c",a);
        }
        printf("\n");
    }  
   

// Pattern 15: Alphabet Border 
a='A',b='A';
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if((x==1 || y==1) && x<=4){
                printf("%c",a);
            }
            else if((y==5 || x==5) && x>=2){
                printf("%c",b);
            }
            else 
            printf(" ");
        }
        b++;
        printf("\n");
    }

    return 0;
}
    


