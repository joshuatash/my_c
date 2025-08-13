#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  


    printf("Enter your age: ");
    scanf("%d", &age);


    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("\n--- User Info ---\n");
    printf("Name: %s", name); 
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
