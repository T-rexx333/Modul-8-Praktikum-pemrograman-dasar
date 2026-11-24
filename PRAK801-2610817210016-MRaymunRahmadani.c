#include <stdio.h>
int main() {
    int n;
    int *p = &n;

    scanf ("%d", &n);

    printf ("Nilai variabel = %d\n", n);
    printf("Alamat variabel = %p\n", p);
    printf("Nilai melalui pointer = %d\n", *p);

    *p = n * 2;
    printf("Nilai setelah diubah lewat pointer = %d", n);

    return 0;

}