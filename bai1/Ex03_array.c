#include <stdio.h>

#define MAX_STUDENTS 50

float calculateAverage(float arr[], int size)
{
    float sum = 0.0, average;
    int i;

    for (i = 0; i < size; ++i)
    { 
        sum += arr[i];
    }

    average = sum / size;
    return average;
}

int main()
{
    int n, i;
    float marks[MAX_STUDENTS];

    printf("Nhap so luong sinh vien trong lop: ");
    scanf("%d", &n);

    if (n > MAX_STUDENTS)
    {
        printf("So luong sinh vien vuot qua gioi han cua chuong trinh.\n");
        return 1;
    }

    for (i = 0; i < n; ++i)
    {
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    float average = calculateAverage(marks, n);
    printf("Diem trung binh cua lop la %.2f", average);

    return 0;
}

