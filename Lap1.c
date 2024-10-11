#include <stdio.h>

int main() {
    char Name[50];
    int Age = 0;
    
    // รับค่าชื่อจากผู้ใช้โดยไม่ขึ้นบรรทัดใหม่
    printf("Enter your name: ");
    scanf("%s", Name);
    
    // รับค่าอายุจากผู้ใช้โดยไม่ขึ้นบรรทัดใหม่
    printf("Enter your age: ");
    scanf("%d", &Age);
    
    // แสดงผลตามรูปแบบที่ต้องการ
    printf(" - - - - - -\n");  // ใส่ขีดขั้นตามต้องการ
    printf("Hello %s \n", Name);  // ทักทายด้วยชื่อผู้ใช้
    printf("Age = %d\n", Age + 1);  // แสดงอายุ +1
    
    return 0;
}
