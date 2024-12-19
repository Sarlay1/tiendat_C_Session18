#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[5]; 
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ho ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);

        printf("\n");
    }


    printf("Thong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d: Ho ten: %s, Tuoi: %d, So dien thoai: %s\n", 
                i + 1, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}


