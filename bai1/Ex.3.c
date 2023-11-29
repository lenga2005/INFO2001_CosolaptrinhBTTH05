#include <stdio.h>

struct Employee {
	char name [50];
	int id;
	int pos;
	float pay;
};

void inputEmployee(struct Employee employee){
	printf("Ten:");
    scanf("%s", employee.name);
    printf("Ma nhan vien: ");
    scanf("%d", &(employee.id));
    printf("Vi tri: ");
    scanf("%d", &(employee.pos));
    printf("Luong: ");
    scanf("%f", &(employee.pay));
}
void displayStudent(struct Employee employee) {
    printf("Ten: %s\n", employee.name);
    printf("Ma nhan vien: %d\n", employee.id);
    printf("Vi tri: %d\n", employee.pos);
    printf("Luong: %.2f\n", employee.pay);
}
int main() {
    struct Employee list[50];
    int choice = 0;
    int numEmployees = 0;
  
    do {
        printf("==CHUONG TRINH QUAN LI NHAN VIEN==\n");
        printf("1. Khoi tao danh sach\n");
        printf("2. Them moi 1 nhan vien\n");
        printf("3. Sua thong tin nhan vien\n");
        printf("4. Sap xep danh sach\n");
        printf("0. Thoat chuong trinh\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: // Khoi tao danh sach
                numEmployees = 0;
                printf("Danh sach nhan vien da duoc khoi tao.\n");
                break;
            case 2: // Them moi 1 nhan vien
                if (numEmployees < 50) {
                    printf("= Nhap thong tin nhan vien =\n");
                    inputEmployee(list[numEmployees]);
                    numEmployees++;
                    printf("Them nhan vien thanh cong.\n");
                } else {
                    printf("Danh sach nhan vien da day. Khong the them nhan vien moi.\n");
                }
                break; 
			case 3:// Sua thong tin nhan vien
			    if (numEmployees < 50) {
			       int employeeIndex;
			       printf("Nhap so thu tu nhan vien can cap nhat (1-%d): ", numEmployees);
                    scanf("%d", &employeeIndex);
                if (employeeIndex >= 1 && employeeIndex <= numEmployees) {
                        printf("= Cap nhat thong tin nhan vien =\n");
                        inputEmployee(list[employeeIndex - 1]);
                        printf("Cap nhat thanh cong.\n");
                    } else {
                        printf("So thu tu khong hop le. Vui long thu lai.\n");
                    }
                } else {
                    printf("Danh sach nhan vien rong.\n");
                }
                break;
            case 4://Sap xep danh sach nhan vien
                printf("Chuc nang sap xep danh sach chua duoc hoan thien.\n");
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
			
		
