#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50]; 
    int n = 5; 
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1; 

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
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d: ID: %d, Ho ten: %s, Tuoi: %d, So dien thoai: %s\n", 
                i + 1, students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

