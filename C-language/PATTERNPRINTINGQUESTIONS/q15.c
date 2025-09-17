#include <stdio.h>
int main (){
int input;
scanf("%d",&input);
for(int a=1;a<=input;a++){
    for(int k=1;k<=input-a;k++){
        printf(" ");} 
  for(int j=65;j<65+2*a-1;j=j+1){ 
    printf("%c",j);}
      
 printf("\n");}

    return 0;
}