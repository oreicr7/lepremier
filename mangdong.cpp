#include <iostream>

// void evenArray(int* arr, int N, int*& evenArr, int& demChan) {

//     demChan = 0;
//     for (int i = 0; i < N; i++)
//         if (arr[i] % 2 == 0)
//             demChan++;
//     evenArr = new int[demChan];
//     int j = 0;
//     for (int i = 0; i < N; i++) {
//         if (arr[i] % 2 == 0) {
//             evenArr[j] = arr[i];
//             j++;
//         }
//     }
// }
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int* evenArr;
//     int demChan;
//     evenArray(a, 5, evenArr, demChan);
//     for (int i = 0; i < demChan; i++) {
//         printf("%d ", evenArr[i]);
//     }
//     int M;
//     printf("\n nhap so phan tu cua mang: ");
//     scanf("%d",&M);
//     int* b= new int[M];
//     printf("\n hay nhap cac phan tu mang: ");
//     for (int i=0;i<M;i++)
//         scanf("%d",&b[i]);
//     evenArray(b, M, evenArr, demChan);
//     for (int i=0;i<demChan;i++) {
//         printf("%d ", evenArr[i]);
//     }
// }

// void reverse1(int* arr, int N) {
//     for(int i=0;i<N/2;i++) {
//         int tg = arr[i];
//         arr[i]=arr[N-1-i];
//         arr[N-1-i]=tg;
//     }
// }

// void reverse2(int* arr, int N, int*& resultArr) {
//     resultArr = new int[N];
//     for(int i=0; i<N;i++) {
//         resultArr[i]=arr[N-1-i];
//     }
// }
// int main() {
//     int a[5]={12,423,3256,43,3};
//     int* result;
//     reverse2(a,5,result);
//     for(int i=0;i<5;i++) {
//         printf("%d ",result[i]);
//     }
// }
// int main() {
//     int a[5]={12,423,3256,43,3};
//     reverse1(a,5);
//     printf("\n Mang sau dao nguoc la: ");
//     for(int i=0;i<5;i++) {
//         printf("%d ",a[i]);
//     }
// }

void excommunicado(char* a, char* b) {
    int N;
    printf("\n Nhap chuoi: ");
    fgets(char* a,N,stdin);
    for(int i =0; i<N; i++) {
        if(a[i]!='c') {
            
        }
    }
}