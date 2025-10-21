#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int w,x,y,z;
    
    // Pattern 6: Hollow Number Square 
    w=1;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if((x==1 || y==1) && x<=4){
                z=1;
                printf("%d",z);
            }
            else if((x==5 || y== 5) && x>=2)
                printf("%d",w);
            else
                printf(" ");
        }
        printf("\n");
        w++;
    }
   
    
    // ------------------------------------------------------------------------------------------------------- 

    // Pattern 7: Number Diamond
    for(x=0;x<=8;x++){
        z=1;
        for(y=1;y<=9;y++){
            if((y>=5-x && y<=5+x && x<=4) || ( y>=-3+x && y<=13-x && x>=5)){
                printf("%d",z);
                z++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    
    // ------------------------------------------------------------------------------------------------------- 

    // Pattern 8: Number Triangle   
    for(x=1;x<=5;x++){
        for(y=1;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
    }


    // ------------------------------------------------------------------------------------------------------- 

    // Pattern 9: Reverse Number Triangle
    for(x=5;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
    }
    
    // ------------------------------------------------------------------------------------------------------- 

    // Pattern 10: Number Cross
    z=5;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(y==x || y==z)
                printf("%d",x);
            else
                printf(" ");
        }
        printf("\n");
        z--;
    }
    return 0;
}

