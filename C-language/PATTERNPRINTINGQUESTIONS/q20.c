#include <stdio.h>
int main () {
int input;
scanf("%d",&input);
int count=65;
for(int a=1;a<=input;a++){ // 1 2 
    for(int j=65;j<65+a;j++){ // 1   12
    printf("%c ",count); // 1 // 2 
    count++; //2 

    } printf("\n");
}
    return 0;
}