#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int massimo(int valori[], int n);
float media(int valori[], int n);
float divisione(int dividendo, int divisore);
int quoziente(int dividendo, int divisore);
int restoDivisione(int dividendo, int divisore);
float parteDecimaleDivisione(int dividendo, int divisore);

int main(int argc, char** argv) {
    int v[SIZE];
    int mas;
    float med;
    float div;
    int quo;
    int res;
    float pd;
    int i;
    
    printf("Inserisci %d valori interi POSITIVI\n", SIZE);
    int c;
    for( c=0 ; c<SIZE ; c++ ){
        printf("Valore %d: ", c);
        scanf("%d", &v[c]);
    }
    
    
    
    
    mas = massimo(v, SIZE);
    med = media(v, SIZE);
    div = divisione(v[0], v[1]);
    quo = quoziente(v[0], v[1]);
    res = restoDivisione(v[0], v[1]);
    pd = parteDecimaleDivisione(v[0], v[1]);
    
    printf("\nIl valore massimo è: %d\n", mas);
    printf("Il valore medio è: %f\n", med);
    
    printf("\nDivisione tra %d (dividendo) e %d (divisore)\n", v[0], v[1]);
    printf("Risultato (decimale): %f\n", div);
    printf("Parte decimale: %f\n", pd);
    printf("Quoziente (intero): %d\n", quo);
    printf("Resto (intero): %d\n", res);
    
    return (EXIT_SUCCESS);
}

/*
 * Calcola il valore massimo presente nell'array di valori interi POSITIVI, di dimensione n.
 */
int massimo(int valori[], int n) {
    int i;
    int max = 0; 
    for( i=0; i<n ; i++ ){
        if( valori[i] > max){
            max = valori[i];
        }
    }
    
    return max;
}  //-1

/*
 * Calcola la media dei valori interi POSITIVI nell'array, di dimensione n.
 */
float media(int valori[], int n) {
    
    int i;
    float somma = 0; 
    for( i=0; i<n ; i++ ){
        somma = somma + valori[i];
    }
    float media = 0;
    
    media = somma/n;
    
    return media;
}  //-1

/*
 * Calcola il risultato decimale della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2.5
 */
float divisione(int dividendo, int divisore) {
   
    
    float divisione = 0;
    
    divisione = (float)dividendo/(float)divisore;
    
    
    return divisione;
} //-1

/*
 * Calcola il quoziente (parte intera) della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int quoziente(int dividendo, int divisore) {
    
    int risultato;
    risultato = dividendo/divisore;
    
    return risultato;
} //-1

/*
 * Calcola il resto della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int restoDivisione(int dividendo, int divisore) {
    
    int resto = 0;
    
    resto = dividendo % divisore;
    
    
    return resto;
} //-1

/*
 * Calcola la parte decimale del risultato della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 0.5
 * La parte decimale è, ovviamente, sempre inferiore a 1.
 */
float parteDecimaleDivisione(int dividendo, int divisore) {
    
    float risultato = 0;
    
    risultato = (float)dividendo / (float)divisore;
    int intero = 0;
    intero = (int)risultato;
    
    float parteDecimale = risultato-intero;
    
    
    return parteDecimale;
}

