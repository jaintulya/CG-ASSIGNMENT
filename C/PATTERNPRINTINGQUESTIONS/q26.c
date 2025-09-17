#include <stdio.h>
int main (){
int input;
scanf("%d",&input);
for(int a=input;a>=1;a--){
    for(int k=input-a;k>=0;k--){
        printf(" ");} 
  for(int j=1;j<=2*a-1;j=j+1){ 
    printf("*");}
      
 printf("\n");}

    return 0;
}