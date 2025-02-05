#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == b){
        printf("Same Sign");
    }
    else if(b == a){
        printf("Same sign");
    }
    else{
        printf("Different sign");
    }
    return 0;
}