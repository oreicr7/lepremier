#include <stdio.h>
void Input(int**& arr, int& a, int& b) {
    printf("\n Nhap so hang va cot: ");
    scanf("%d %d", &a, &b);
    arr = new int* [a];
    for(int i = 0; i < a; i++) 
        arr[i]=new int[b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
    }
}//// input

void Freedom(int** arr, int& a, int& b) {
    for(int i = 0; i < a; i++)
        delete arr[i];
    delete arr;
}//// free space

void Matrix(int** arr, int& a, int& b) {
    printf("\n Ma tran co dang la: ");
    printf("\n");
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++) {
            printf(" %d ", arr[i][j]);
            if(j==b-1)
                printf("\n");
        }
}///// output

void MaxOrMin(int** arr, int a, int b) {
    int Max = 0;
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            if(arr[i][j] > Max)
                Max = arr[i][j];
    int Min = Max;
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            if(arr[i][j] < Min)
                Min = arr[i][j];
    printf("\n Phan tu lon nhat cua ma tran la: %d, phan tu be nhat cua ma tran la: %d.", Max, Min);
}///// min max

int Sum(int** arr, int a, int b) {
    int Sumar = 0;
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            Sumar += arr[i][j];
    return Sumar;
}////// sum

void SpeSum(int** arr, int a, int b) {
    int TongChan = 0, TongLe = 0;
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++) {
            if(i%2==0)
                TongLe += arr[i][j];
            else
                TongChan += arr[i][j];
        }
    printf("\n Tong cac phan tu o cac hang chan va le lan luot la: %d, %d. ", TongChan, TongLe);
}/// tong hang chan, hang le

void LineMaxMin(int** arr, int a, int b) {
	int N;
	printf("\n Nhap cot can tim: ");
	scanf("%d", &N);
	int Max = 0;
	for (int i = 0; i < a; i++)
		if (arr[i][N-1] > Max)
			Max = arr[i][N-1];
	int Min = Max;
	for (int i = 0; i < a; i++)
		if (arr[i][N-1] < Min)
			Min = arr[i][N-1];
    printf("\n Gia tri lon nhat va nho nhat cua cot %d la %d va %d. ", N, Max, Min);
}

int main() {
    int** arr;
    int a, b;
    Input(arr, a, b);
    Matrix(arr, a, b);
    Freedom(arr, a, b);
    MaxOrMin(arr, a, b);
    printf("\n Tong cac phan tu cua mang la: %d. ", Sum(arr, a, b));
    SpeSum(arr, a, b);
    LineMaxMin(arr, a, b);
}