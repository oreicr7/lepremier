#include <stdio.h>
int Cal(int n) {
    if(n==0) return n;
    return 1 + (n && 1 ? Cal(n/2) : Cal(n-2));
}
int main() {
    printf("%d", Cal(5));
}