#include <iostream>
void nhapMang(int**& a, int& h, int& c) {
    printf("\n Hay nhap so hang va so cot: ");
    scanf("%d %d", &h, &c);
    a = new int* [h];
    for(int i=0; i<h; i++) {
        a[i]=new int[c];
    }
    for(int i=0; i<h;i++) {
        for(int j=0; j<c; j++)
            scanf("%d", &a[i][j]);
    }
}
void inMang(int**& a, int& h, int& c) {
    printf("\n Mang vua nhap la: ");
    for(int i=0; i<h;i++) {
        for(int j=0; j<c; j++)
            printf("%d ", a[i][j]);
    }
}
int tinhTong(int** a, int h, int c) {
    int tong=0;
    for(int i=0; i<h; i++) {
        for(int j=0; j<c; j++) {
            tong += a[i][j];
        }
    }
    return tong;
}
int main() {
    int** a;
    int h,c;
    nhapMang(a,h,c);
    inMang(a,h,c);
    int tong = tinhTong(a,h,c);
    printf("tong mang la: %d",tong);
     for (int i = 0; i < h; i++) {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}