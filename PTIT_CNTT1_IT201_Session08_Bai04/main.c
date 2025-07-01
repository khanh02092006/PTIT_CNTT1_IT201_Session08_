#include <stdio.h>

#include <stdio.h>

// Hàm sắp xếp lựa chọn (Selection Sort)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Tìm phần tử nhỏ nhất trong đoạn chưa sắp xếp
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Hoán đổi nếu cần
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử trong mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm sắp xếp lựa chọn
    selectionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
