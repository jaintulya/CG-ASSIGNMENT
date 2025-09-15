#include <stdio.h>
int main (){
int input;
scanf("%d",&input);
for(int a=input;a>=1;a--){
    for(int k=input-a;k>0;k--){
        printf(" ");} 
  for(int j=65;j<65+2*a-1;j++){ 
    printf("%c",j);}
      
 printf("\n");}

    return 0;
}