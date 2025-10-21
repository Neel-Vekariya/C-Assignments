#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int w,x,y,z;


    // Pattern 11: Number X
    z=5;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(x==y)
                printf("%d",x);
            else if(y==z && y!= 3)
                printf("%d",z);
            else
                printf(" ");
        }
        printf("\n");
        z--;
    }
    
        // -------------------------------------------------------------------------------------
        
        // Pattern 12: Number Heart
        z=3;
        for(x=1;x<=z;x++){
            for(y=1;y<=z-x;y++)
            printf(" ");
        for(y=1;y<=x*2;y++)
            printf("%d",y);
        for(y=1;y<=(z-x)*2-1;y++)
            printf(" ");
        for(y=x*2;y>=1;y--)
            printf("%d",y);
            printf("\n");
        }
        for(x=z*2-1;x>=1;x--){
            for(y=1;y<=z*2-x;y++)
            printf(" ");
        for(y=1;y<=x;y++)
            printf("%d",y);
        for(y=x-1;y>=1;y--)
            printf("%d",y);
        printf("\n");
    }

    // -------------------------------------------------------------------------------------
    
    
   // Pattern 13: Floyd's Triangle
   z=1; 
   for(x=1;x<=5;x++){
        for(y=1;y<=x;y++){
                printf("%d",z);
                printf(" ");
                z++;
    }
    printf("\n");
   } 


   // -------------------------------------------------------------------------------------
   
   
// Pattern 14: Number Spiral
z=1;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(x==1 || x==5) 
                printf("%d",z);
            else if(y==3 && x>1 && x<5)
                printf("%d",z);
            else    
                printf(" ");
        }
        printf("\n");
        z++;
}

// -------------------------------------------------------------------------------------


// Pattern 15: Number Staircase
    z=1;
    w=9;
    for(x=1;x<=9;x++){
        for(y=1;y<=5;y++){
            if(x<=5 && y<=x)
            printf("%d",z);
            else if(x>5 && y<=w)
                printf("%d",w);
            else
                printf(" ");
        }
        printf("\n");
        z++;
        w--;
    }
    return 0;
}

