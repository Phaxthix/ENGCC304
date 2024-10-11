#include <stdio.h>

int main() {
    int N;

    // รับค่าตัวเลขจากผู้ใช้
    printf("Enter value: ");
    scanf("%d", &N);
    
    for (int i = N; i >= 0; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
