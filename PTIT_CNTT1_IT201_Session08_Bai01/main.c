#include <stdio.h>

#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int n, x;

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

    // Nhập giá trị cần tìm kiếm
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    // Gọi hàm tìm kiếm tuyến tính
    int result = linearSearch(arr, n, x);

    // In kết quả
    if (result != -1)
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", x, result);
    else
        printf("Gia tri %d khong ton tai trong mang.\n", x);

    return 0;
}
