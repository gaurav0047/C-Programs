#include <stdio.h>

int main() {
    char nationality;
    int age;

    printf("Enter your nationality (I for Indian, O for Other): ");
    scanf(" %c", &nationality);

    if (nationality != 'I' && nationality != 'i')
        printf("You are not eligible to vote (Not Indian)\n");
    else {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 0)
            printf("Invalid age\n");
        else if (age >= 18)
            printf("You are eligible to vote\n");
        else
            printf("You are not eligible to vote\n");
    }

    return 0;
}
