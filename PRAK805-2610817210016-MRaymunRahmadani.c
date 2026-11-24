#include <stdio.h>

struct Wallet {
    char name[50];
    int balance;
};

void topup(struct Wallet *d, int amount) {
    d->balance += amount; 
    return 1;
}

int pay(struct Wallet *d, int amount) { 
    if(d->balance >= amount) {
        d->balance -= amount;
        return 1;
    }
    return 0;
}

int main() {
    struct Wallet m;
    int n;
    char type[100];
    int amount[100];
    int success[100];
    int result[100];


    scanf("%49s %d", m.name, &m.balance);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %c %d", &type[i], &amount[i]);
    }

    for(int i = 0; i < n; i++) {
        if(type[i] == 'T') {
            success[i] = topup(&m, amount[i]);
        }
        else {
            success[i] = pay(&m, amount[i]);
        }
        result[i] = m.balance;
    }

    for(int i = 0; i < n; i++) {
        if(type[i] == 'T') {
            printf("Top up %d berhasil, saldo = %d\n", amount[i], result[i]);
        }
        else if (success[i]) {
            printf("Bayar %d berhasil, saldo = %d\n", amount[i], result[i]);
        }
        else {
            printf("Bayar %d gagal, saldo tidak cukup\n", amount[i]);
        }
    }
    printf("Saldo akhir %s = %d\n", m.name, m.balance);

    return 0;
}