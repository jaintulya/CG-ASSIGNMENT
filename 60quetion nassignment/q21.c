#include <stdio.h>
int main () {
int input;
scanf("%d",&input);
for(int a=input;a>=1;a--){
    for(int k=0;k<input-a;k++){
        printf(" ");
    }
    for(int j=1;j<=a;j++){
    printf("*");

    } printf("\n");
}
    return 0;
}
