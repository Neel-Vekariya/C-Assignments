#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    char a; 
    a='A';
       for(x=1;x<=5;x++){
           for(y=1;y<=x;y++){
               printf("%c",a);
               a++;
           }
           printf("\n");
       }
return 0;
}


