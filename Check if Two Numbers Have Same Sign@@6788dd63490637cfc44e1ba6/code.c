#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a % 2 == 0){
        printf("Same Sign");
    }
    else if(b % 3 == 0){
        printf("Same sign");
    }
    else{
        printf("Different sign");
    }
    return 0;
}