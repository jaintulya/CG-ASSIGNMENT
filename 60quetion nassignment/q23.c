#include <stdio.h>
int main () {
int input;
scanf("%d",&input);
for(int a=input;a>=1;a--){
    for(int k=0;k<input-a;k++){
        printf(" ");
    }
    for(int j=65;j<65+a;j++){
    printf("%c",j);

    } printf("\n");
}
    return 0;
}
