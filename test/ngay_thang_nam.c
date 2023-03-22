#include<stdio.h>
// nhap 3 so ngay thang nam

void main()
{
    int ngay, thang, nam;
    printf("Nhap vao ngay:");
    scanf("%d %d %d", &ngay, &thang, &nam);
    printf("%d/%d/%d", ngay, thang, nam);
}