#include <stdio.h>

   struct Student {
    char fullName[100];
    int age;
    char phoneNumber[15];
};

  int main() {
    struct Student user2;

    printf("Nhap ho ten: ");
    fgets(user2.fullName, sizeof(user2.fullName), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &user2.age);

    printf("Nhap so dien thoai: ");
    scanf("%s", user2.phoneNumber);

    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", user2.fullName);
    printf("Tuoi: %d\n", user2.age);
    printf("So dien thoai: %s\n", user2.phoneNumber);

    return 0;
}

