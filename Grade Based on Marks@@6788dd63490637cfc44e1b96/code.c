#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    switch(a):
    case (>= 90):
        printf('A');
        break;
    case(>=80 && <90):
        printf('B');
        break ;

    case(>= 70 && <80):
    printf('C');
    break;

    case (>= 60 && <70):
    printf('D');
    break;

     default:
     printf('F');
    return 0;
}