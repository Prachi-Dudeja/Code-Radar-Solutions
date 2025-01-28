#include <stdio.h>


int main() {
    char name;
    int age;
    char hobby[40];
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%s", hobby);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
   
    return 0;
}