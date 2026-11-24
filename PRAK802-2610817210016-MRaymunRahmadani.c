#include <stdio.h>

void swap(int *chair1, int *chair2) {
    int n = *chair1;
    *chair1 = *chair2;
    *chair2 = n;
}

int main() {
    int chair1, chair2;

    scanf ("%d %d", &chair1, &chair2);

    printf ("Sebelum ditukar: Andi = %d, Budi = %d\n", chair1, chair2);
    
    swap(&chair1, &chair2);
    printf("Sesudah ditukar: Andi = %d, Budi = %d", chair1, chair2);

    return 0;
}