#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    if((4 % 2==0 && 100 !=0)|| 100 == 0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}