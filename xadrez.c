#include <stdio.h>

int main() {
    int t = 0;

for (int t = 0; t < 5; t++) {
    printf ("Direita\n");
}
      
t = 0; while (t < 5) {
      printf ("Cima direita\n");
      t++;
}

t = 0; do {
      printf("Esquerda\n");
      t++; } 
while (t < 5);

    int casasBaixo = 2;
    int casasEsquerda = 1; 
    
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }


    t = 0;
    while (t < casasEsquerda) {
        printf("Esquerda\n");
        t++;
    }

    return 0;
}
