#include <stdio.h>

int main() {
    char color[20];
    char noun[20];
    char person[20];

    printf("Enter a color: ");
    scanf(" %s", color);
    printf("Enter a noun: ");
    scanf(" %s", noun);
    // We use the next line to eat up the newline character the scanf() leaves in the buffer
    getchar();
    printf("Enter a person: ");
    fgets(person, 20, stdin);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s\n", person);
    return 0;
}
