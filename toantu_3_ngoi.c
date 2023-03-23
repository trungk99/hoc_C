#include<stdio.h>
#include<string.h>

int main (){
    int giave, tuoi;

    printf("Nhap tuoi cua ban:");
    scanf("%d", &tuoi);

    giave = (tuoi >= 18) ? 50:100;
    printf("Gia tien: %d", giave);
}
