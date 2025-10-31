#include<stdio.h>
#include<stdlib.h>

int main(){
    system('cls');
    int w,x,y,z;
    
    // Pattern 16: Number Zigzag 
    for(x=1;x<=5;x++){
        if(x%2!=0){
            printf("%d",x);
            for(y=1;y<=3;y++)
                printf(" ");
        }
    }
    printf("\n");
    for(x=1;x<=9;x++){
        if(x%2==0)
        printf("%d",x);
        else
        printf(" ");
    }
    printf("\n");
    for(x=1;x<=7;x++){
        if(x%2!=0 && x!=1)
        printf("%d",x);
        else
        printf(" ");
    }
    printf("\n");
    for(x=3;x<=10;x++){
        if(x==10){
            x=x%10;
            printf("%d",x);
            x=10;
        }
        else if(x%2==0)
        printf("%d",x);
        else
        printf(" ");
    }
    printf("\n");
    for(x=5;x<=9;x++){
        if(x%2!=0){
            printf("%d",x);
            for(y=1;y<=3;y++)
                printf(" ");
        }
    }


    // Pattern 17: Number Border
    z=1; 
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if((y==1 || x==1) && x<=4)
                printf("%d",z);
            else if(x>=2 && (y==5 || x==5))
                printf("%d",x);
            else
                printf(" ");
        }
        printf("\n");
    }

    
    // Pattern 18: Number Arrow 
    z=1;
    for(x=0;x<=2;x++){
        for(y=1;y<=5;y++){
            if(y>=3-x && y<=3+x){
                printf("%d",z);
                z++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    z=4-2;
    for(x=1;x>=0;x--){
        for(y=1;y<=5;y++){
            if(y>=3-x && y<=3+x){
                printf("%d",z);
                z++;
            }
            else
                printf(" ");
        }
        printf("\n");
        z=1;
    }

    
    // Pattern 19: Pascal-like Triangle 
    w=1,z=1;
    for(x=0;x<=4;x++){
        for(y=0;y<=x;y++){
            if(y==0 || y==x)
                printf("%d",w);
                else {
                    if(x==4 && y==2){
                        printf("%d",x+2);
                        continue;
                    }
                    printf("%d",x);
                }
        }
        printf("\n");
    }


    // Pattern 20: Hollow Number Diamond 
    z=1;
    for(x=0;x<=4;x++){
        for(y=1;y<=9;y++){
            if(y==5-x || y==5+x){
                printf("%d",z);
                z++;
            }
            else
            printf(" ");
        }
    printf("\n");
    }
    z=8;
    for(x=3;x>=0;x--){
        z=z-2;
        for(y=1;y<=9;y++){
            if(y==5-x || y==5+x){
                if(x==0){
                    z=1;
                    printf("%d",z);
                    continue;
                }
                printf("%d",z);
                z++;
            }
            else
            printf(" ");
        }
    printf("\n");
    z=z-2;
    }
    return 0;
}
  
