#include <stdio.h>
struct student {
    char Name[50];
    unsigned int roll;
    unsigned long long int phone;
    char address[100];
} std;

int main() {

    printf("Enter information of students:\n");

        printf("\nEnter roll no: ");
        scanf("%d",&std.roll);
        printf("Enter name: ");
        scanf("%s", &std.Name);
        printf("Enter phone number: ");
        scanf("%lld", &std.phone);
        printf("Enter  address: ");
        scanf("%s", &std.address);

        printf("\nEntered information of students:\n");


        printf("\nRoll number: %d\n", std.roll);
        printf("Name: ");
        puts(std.Name);
        printf("Phone number: %lld \n",std.phone);
        //puts(std.phone);
        printf("Address: ");
        puts(std.address);


    return 0;
}
