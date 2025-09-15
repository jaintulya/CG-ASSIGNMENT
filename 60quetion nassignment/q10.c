#include <stdio.h>
int main () {
int input;
scanf("%d",&input);
for(int a=1;a<=input;a++){
    for(int k=1;k<=input-a;k++){
        printf(" ");
}
  for(int j=1;j<=a;j++){ 
    printf("*");}
      
 printf("\n");
}


    return 0;
}