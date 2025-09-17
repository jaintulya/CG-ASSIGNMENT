#include <stdio.h>
int main () {
int input;
scanf("%d",&input);
for(int a=1;a<=input;a++){
    for(int k=1;k<=input-a;k++){
        printf(" ");
}
  for(char j=65;j<65+a;j++){ 
    printf("%c",j);}
      
 printf("\n");
}


    return 0;
}