#include <stdio.h>
int main () {
int input;
scanf("%d",&input);//4
for(int a=1;a<=input;a++){//1
    for(int j=1;j<a;j++){
        printf("%d ",j);}
         for(int k=a;k>=1;k--){
           printf("%d ",k); }
         
    

     printf("\n");
}


    return 0;
}