#include <stdio.h>
#include<time.h> 

void BubbleSort(int a[], int n) {
	int i,j,temp; 
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
            temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    } 
}

void SelectionSort(int arr[], int n) {
	int i, j, minIndex; 
    for ( i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void PrintArray(int a[], int n) {
	int i; 
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[1000];
    int n;
    int i; 

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Bubble Sort
    clock_t startBubbleSort = clock();
    BubbleSort(a, n);
    clock_t endBubbleSort = clock();
    double timeBubbleSort = (double)(endBubbleSort - startBubbleSort) / CLOCKS_PER_SEC;

    printf("Mang sau khi sap xep bang Bubble Sort: ");
    PrintArray(a, n);
    printf("Thoi gian thuc thi Bubble Sort: %f giay\n", timeBubbleSort);

    // Selection Sort
    clock_t startSelectionSort = clock();
    SelectionSort(a, n);
    clock_t endSelectionSort = clock();
    double timeSelectionSort = (double)(endSelectionSort - startSelectionSort) / CLOCKS_PER_SEC;

    printf("Mang sau khi sap xep bang Selection Sort: ");
    PrintArray(a, n);
    printf("Thoi gian thuc thi Selection Sort: %f giay\n", timeSelectionSort);

    return 0;
}
