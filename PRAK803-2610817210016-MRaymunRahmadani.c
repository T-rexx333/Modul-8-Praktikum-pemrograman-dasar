#include <stdio.h>
#include <string.h>

struct Participant {
    char name[50];
    int age;
    int score;
};

int main() {
    struct Participant m;

    printf("Nama : ");
    fgets(m.name, sizeof(m.name), stdin);

    printf("Umur : ");
    scanf("%d", &m.age);

    printf("Skor : ");
    scanf("%d", &m.score);

    printf ("Data Peserta:\n");
    printf("Nama : %s", m.name);
    printf("Umur : %d tahun\n", m.age);
    printf("Skor : %d", m.score);

    return 0;
}