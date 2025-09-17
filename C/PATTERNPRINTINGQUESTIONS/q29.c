#include <stdio.h>
int main (){
int input;
scanf("%d",&input);
for(int a=1;a<=input;a++){
    for(int k=0;k<=input-a;k++){
        printf(" ");} 
  for(int j=1;j<=2*a-1;j=j+1){ 
    printf("*");}
      
 printf("\n");}
 for(int b=input-1;b>=1;b--){
    for(int i=input-b;i>=0;i--){
        printf(" ");} 
  for(int l=1;l<=2*b-1;l=l+1){ 
    printf("*");}
      
 printf("\n");}

    return 0;
}