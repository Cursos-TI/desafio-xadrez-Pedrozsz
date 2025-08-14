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

    return 0;
}
