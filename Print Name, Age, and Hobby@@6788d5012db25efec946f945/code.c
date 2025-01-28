#include <stdio.h>


int main() {
    char name;
    int age;
    char hobby[40];
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%s", hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
   
    return 0;
}