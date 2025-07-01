#include <stdio.h>
#include <stdio.h>

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Không tìm thấy
}

int main() {
    int n, x;

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử trong mảng
    printf("Nhap cac phan tu da sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị cần tìm kiếm
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    // Gọi hàm tìm kiếm nhị phân
    int result = binarySearch(arr, 0, n - 1, x);

    // In kết quả
    if (result != -1)
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", x, result);
    else
        printf("Gia tri %d khong ton tai trong mang.\n", x);

    return 0;
}
