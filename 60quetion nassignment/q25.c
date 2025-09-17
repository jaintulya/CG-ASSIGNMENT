#include <stdio.h>
int main () {
int input;
scanf("%d",&input);//4
for(int a=0;a<input;a++){//0 1
    for(int j=65;j<65+a;j++){// A
        printf("%c ",j);}
         for(int k=65+a;k>=65;k--){//A 
           printf("%c ",k); }
         
    

     printf("\n");
}


    return 0;
}