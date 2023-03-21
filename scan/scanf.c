#include<stdio.h>
// nhap va in ra thong tin ca nhan (ten, tuoi, sdt)

void main()
{
    char ten[30];
    int tuoi;
    char sdt[20];

    scanf("%s", ten);       //ten: la dia chi cua chuoi ten
    scanf("%d", &tuoi);
    scanf("%s", &sdt);
    //
    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("So dien thoai: %s\n", sdt);
}