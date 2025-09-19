#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobbie[100];

    printf("Enter your name:\n");
    scanf("%49s", name);

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("What is your favourite hobbie?\n");
    scanf("%99s", hobbie);

    printf("Hello %s! You are %d years old and your favourite hobbie is %s. Nice to meet you!\n",
           name, age, hobbie);

    return 0;
}
