#include<stdio.h>
// Bt: viết chương trình nhập vào 3 giá trị và in ra tổng bình phương của 3 số đó

void main ()
{
    int a,b,c;
    int S;
    printf("Nhap vao 3 so a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    S = a*a + b*b + c*c;
    printf("Kq= %d", S);

}