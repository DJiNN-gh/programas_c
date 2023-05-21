#include <stdio.h>

/*
    A declaração de enumerações na linguagem C é realizada através de uma chamada da palavra reservada enum, 
    de maneira global, similar a uma constante. Assim como constantes, enumerações e seus elementos restrições similares.

    Pode-se até mesmo pensar numa estrutura de enumeração como um atalho para constantes dentro de um programa, mantendo em
    mente o fato de enumerações sempre presumirem o valor inicial como 0, a não ser que explicitamente associado, e os elementos
    conseguintes tendo seu valor incrementado automaticamente em um, a não ser que explicitamente associado um valor distinto.
    
    Numa enumeração qualquer, tipos não são levados em consideração, pois todos os elementos são objetivamente inteiros, 
    porém é possível realizar a manipulação dos elementos de uma enumeração, sabendo-se que cada elemento é 
    iniciado com um valor, que é zero, e seu último elemento possui valor igual ao número de elementos da enumeração 
    menos um (n-1).
*/

enum diasSemana {DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO};
enum numeros {UM = 1, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ};
// Pode-se declarar diversos elementos para uma mesma enumeração em diferentes declarações
// Nota-se, no entanto, que, a cada declaração, a contagem natural da enumeração é reiniciada
enum status ERRO;
enum status {OK = 1, AGUARDANDO};

int main (void){

    // Declaração de variáveis do tipo status, a partir da enumeração status;
    enum status stse_s = ERRO, stso_s = OK, stsa_s = AGUARDANDO;

    if (stse_s);

    else

        printf("Status Erro!\n");

    if (stso_s)

        printf("Status OK!\n");

    if (!stsa_s);

    else
    
        printf("Status Aguardando!\n\n");

    for (unsigned int i = 0;i <= SABADO;i++){

        // Testando a enumeração diasSemana
        printf("Valor da enumeracao diasSemana: %d\t Posição em memoria: %p\n", i, DOMINGO);
    }

    putchar('\n');

    // Testando a enumeração numeros
    // Nota-se que após a associação de um valor ao primeiro elemento, os seguintes dão sequencia de modo automático à contagem
    printf("Um: %d\t\tDois: %d\t\tTres: %d\t\tQuatro: %d\tCinco: %d\nSeis: %d\t\tSete: %d\t\tOito: %d\t\tNove: %d\t\tDez: %d\n\n", UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, DEZ);

return 0;
}