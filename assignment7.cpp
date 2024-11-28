#include <iostream>
#include <math.h>
#include <stdio.h>
// #include <math.h>
// double Polynom(double* heso, int n, double x);
// double Polynom(double* heso, int n, double x)
// {
//     double dathuc = 0;
//     for (int i = n;i >=0;i--)
//     {
//         dathuc = dathuc + heso[i] * (pow(x, (i)));
//     }
//     return dathuc;
// }
// int main()
// {
//     int n;
//     printf("\n Nhap so bac cua da thuc: ");
//     scanf("%d", &n);
//     double heso[n+1];
//     printf("\n Nhap cac he so cua da thuc (bac giam dan!): ");
//     for (int i = n;i >=0;i--)
//     {
//         scanf("%lf", &heso[i]);
//     }
//     double x;
//     printf("\n Nhap gia tri cua x: ");
//     scanf("%lf", &x);
//     printf("Gia tri cua da thuc la: %.0lf", Polynom(heso, n, x));
// } BAI 1


/* struct Complex
{
    float thuc;
    float ao;
};


void tong(Complex so1,Complex so2)
{
    float sumthuc, sumao;
    sumthuc=so1.thuc+so2.thuc;
    sumao=so1.ao+so2.ao;
    printf("Tong hai so phuc la: %.0f + %.0fj\n",sumthuc ,sumao);
}
void hieu(Complex so1,Complex so2)
{
    float subthuc, subao;
    subthuc=so1.thuc-so2.thuc;
    subao=so1.ao-so2.ao;
    printf("Hieu hai so phuc la: %.0f + %.0fj\n",subthuc ,subao);
}
void tich(Complex so1,Complex so2)
{
    float multhuc, mulao;
    multhuc=so1.thuc*so2.thuc-so1.ao*so2.ao;
    mulao=so1.thuc*so2.ao+so1.ao*so2.thuc;
    printf("Tich hai so phuc la: %.0f + %.0fj\n",multhuc ,mulao);
}



int main()
{
    Complex so1={12,12};
    Complex so2={6,5};
    tong(so1,so2);
    hieu(so1,so2);
    tich(so1,so2);
} *BAI 2/

/* struct Diem{
     float x;
     float y;
}; */

// void nhap(Diem A)
// {
//     printf("\n Hay nhap x,y: ");
//     scanf("%f %f",&A.x,&A.y);
//     printf("A(%.2f,%.2f)",A.x,A.y);
// }

// void khoangcach(Diem A,Diem B)
// {
//     printf("\n Hay nhap x,y cua A: ");
//     scanf("%f %f",&A.x,&A.y);
//     printf("\n Hay nhap x,y cua B: ");
//     scanf("%f %f",&B.x,&B.y);
//     float KC;
//     KC = sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
//     printf("\n Khoang cach hai diem A va B la: %.2f",KC);
// }

// int main()
// {
//     Diem A{};
//     Diem B{};
// //    nhap(A);
//     khoangcach(A,B);
// }

struct Diem{
     float x;
     float y;
};
void swap(Diem& A,newX, newY)
{
   A.x=newX;
   A.y=newY;
}
int main()
{
    Diem A{8989,3};
    swap(A);
}//BAI 3