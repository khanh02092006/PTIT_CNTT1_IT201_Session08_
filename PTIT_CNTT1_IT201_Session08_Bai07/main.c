#include <stdio.h>

// Hàm hoán đổi
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm phân vùng (partition)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Chọn phần tử cuối làm pivot
    int i = low - 1;       // Vị trí phần tử nhỏ hơn pivot

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Đưa pivot về đúng vị trí
    swap(&arr[i + 1], &arr[high]);
    return i + 1; // Trả về chỉ số pivot sau khi phân vùng
}

// Hàm quick sort đệ quy
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Lấy vị trí phân vùng
        int pi = partition(arr, low, high);

        // Đệ quy sắp 2 nửa
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    // Nhập số lượng phần tử
    do {
        printf("Nhap so luong phan tu cua mang (0 < n < 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int arr[n];

    // Nhập các phần tử trong mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Gọi quick sort
    quickSort(arr, 0, n - 1);

    // In kết quả sau khi sắp xếp
    printf("Mang sau khi sap xep bang Quick Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
