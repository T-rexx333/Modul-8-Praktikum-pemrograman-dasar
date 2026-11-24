#include <stdio.h>

struct Champion {
    char name[50];
    int age;
    int score;
};

int main() {
    struct Champion m[10];
    int n;
    int best = 0;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
    scanf("%49s %d %d", m[i].name, &m[i].age, &m[i].score);

    if (m[i].score > m[best].score) {
        best = i;
    }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", m[best].name, m[best].score);

    return 0;
}