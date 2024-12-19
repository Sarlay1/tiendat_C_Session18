#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
   
    struct Student user1={"Do Tien Dat", 18, "0338281662"};

    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", user1.name);
    printf("Age: %d\n", user1.age);
    printf("Phone Number: %s\n", user1.phoneNumber);

    return 0;
}

