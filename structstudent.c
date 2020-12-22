#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    long phone;
    char address[100];

} std;

int main() {

    printf("Enter information of students:\n");

        printf("\nEnter roll no: ");
        scanf("%d",&std.roll);
        printf("Enter  name: ");
        scanf("%s", &std.Name);
        printf("Enter phone number: ");
        scanf("%l", &std.phone);
        printf("Enter  address: ");
        scanf("%s", &std.address);

        printf("\nEntered information of students:\n");


        printf("\nRoll number: %d\n", std.roll);
        printf("Name: ");
        puts(std.Name);
        printf("Phone number: %1f\n", std.phone);
        printf("Address: ");
        puts(std.address);


    return 0;
}
