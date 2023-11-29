#include <stdio.h>

struct Student {
    char name[50];
    int id;
    int age;
    float gpa;
};

void inputStudent(struct Student student) {
    printf("Ten: ");
    scanf("%s", student.name);
    printf("Ma sinh vien: ");
    scanf("%d", &(student.id));
    printf("Tuoi: ");
    scanf("%d", &(student.age));
    printf("Diem GPA: ");
    scanf("%f", &(student.gpa));
}

void displayStudent(struct Student student) {
    printf("Ten: %s\n", student.name);
    printf("Ma sinh vien: %d\n", student.id);
    printf("Tuoi: %d\n", student.age);
    printf("Diem GPA: %.2f\n", student.gpa);
}

int searchStudent(struct Student students[], int numStudents, int studentId) {
	int i; 
    for (i = 0; i < numStudents; i++) {
        if (students[i].id == studentId) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct Student list[50];
    int choice = 0;
    int numStudents = 0;
  
    do {
        printf("==CHUONG TRINH QUAN LI SINH VIEN==\n");
        printf("1. Khoi tao danh sach\n");
        printf("2. Them moi 1 sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Sap xep danh sach\n");
        printf("5. Tim kiem thong tin sinh vien\n");
        printf("0. Thoat chuong trinh\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Khoi tao danh sach
                numStudents = 0;
                printf("Danh sach sinh vien da duoc khoi tao.\n");
                break;
            case 2: // Them moi 1 sinh vien
                if (numStudents < 50) {
                    printf("= Nhap thong tin sinh vien =\n");
                    inputStudent(list[numStudents]);
                    numStudents++;
                    printf("Them sinh vien thanh cong.\n");
                } else {
                    printf("Danh sach sinh vien da day. Khong the them sinh vien moi.\n");
                }
                break;
            case 3: // Sua thong tin sinh vien
                if (numStudents > 0) {
                    int studentIndex;
                    printf("Nhap so thu tu sinh vien can cap nhat (1-%d): ", numStudents);
                    scanf("%d", &studentIndex);
                    if (studentIndex >= 1 && studentIndex <= numStudents) {
                        printf("= Cap nhat thong tin sinh vien =\n");
                        inputStudent(list[studentIndex - 1]);
                        printf("Cap nhat thanh cong.\n");
                    } else {
                        printf("So thu tu khong hop le. Vui long thu lai.\n");
                    }
                } else {
                    printf("Danh sach sinh vien rong.\n");
                }
                break;
            case 4: // Sap xep danh sach
                printf("Chuc nang sap xep danh sach chua duoc hoan thien.\n");
                break;
            case 5: // Tim kiem thong tin sinh vien
                if (numStudents > 0) {
                    int studentId;
                    printf("Nhap ma sinh vien can tim: ");
                    scanf("%d", &studentId);
                    int studentIndex = searchStudent(list, numStudents, studentId);
                    if (studentIndex != -1) {
                        printf("Thong tin sinh vien co ma %d:\n", studentId);
                        displayStudent(list[studentIndex]);
                    } else {
                        printf("Khong tim thay sinh vien co ma %d.\n", studentId);
                    }
                } else {
                    printf("Danh sach sinh vien rong.\n");
                }
                break;
            case 0: // Thoat chuong trinh
                printf("Da thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.Vui long thu lai.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}
