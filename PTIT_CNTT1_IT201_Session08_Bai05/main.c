#include <stdio.h>

#include <stdio.h>

// Hàm sắp xếp chèn (Insertion Sort)
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];      // Phần tử cần chèn
        int j = i - 1;

        // Dịch chuyển phần tử lớn hơn key về sau
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Chèn key vào đúng vị trí
        arr[j + 1] = key;
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

    // Gọi hàm sắp xếp chèn
    insertionSort(arr, n);

    // In kết quả sau khi sắp xếp
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

