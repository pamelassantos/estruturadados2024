#include <stdio.h>

typedef struct{
    int peso; // peso em quilograma
    int altura; // altura em centimetro
} PesoAltura;

int main() {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 180;
    printf ("Peso: %i, Altura: %i\n", pessoa.peso, pessoa.altura);
    return 0;
}