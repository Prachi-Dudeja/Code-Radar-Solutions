#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    if( num <= 0){
        return 0;
    }
    if (num == 1){
        printf("Not Prime");
        return 0;
    }
    for ( i = 2; i*i <= num; i++){
        if(num % i == 0){
            printf("Not Prime");
        }
    }
    printf("Prime");
    return 0;
} 