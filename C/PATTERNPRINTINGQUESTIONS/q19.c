#include <stdio.h>
int main () {
int input;
scanf("%d",&input);
int count=1;
for(int a=1;a<=input;a++){ // 1 2 
    for(int j=1;j<=a;j++){ // 1   12
    printf("%d ",count); // 1 // 2 
    count++; //2 

    } printf("\n");
}


    return 0;
}