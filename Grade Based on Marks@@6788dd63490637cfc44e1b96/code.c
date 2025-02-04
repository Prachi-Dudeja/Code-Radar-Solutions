#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    switch(a){
    case (a>= 90):
        printf('A');
        break;
    case(a>=80 && a<90):
        printf('B');
        break;
    case(a>= 70 && a<80):
    printf('C');
    break;
    case (a>= 60 && a<70):
    printf('D');
    break;

     default:
     printf('F');

    return 0;
}}