#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

/* Definições de Tamanho de String - Utilizado para definir o tamanho do vetor de char e
 evitar que o usuário extrapole o número de caracteres no scanf() @TODO
 - Tamanho inclui caractere '\0' -*/
#define TAM_SIGLA 3 // A sigla de um estado contém 2 caracteres - 2 caracteres + '\0'
#define TAM_CODIGO 5 // Padrão de código "A001", "A002", etc. - 4 caracteres + '\0'
#define TAM_NOMECIDADE 51 // Máximo de 50 caracteres por nome de cidade. - 50 caracteres + '\0'
#define TAM_SEPARADORCARTA 30 // Separador de Carta ao Exibir

// Cria e define a estrutura CartaSuperTrunfo com os atributos definidos
typedef struct {
    char codigoDaCarta[TAM_CODIGO];
    char estado[TAM_SIGLA];
    char cidade[TAM_NOMECIDADE];
    int populacao;
    float area;
    float pib;
    int numerosDePontosTuristicos;
}CartaSuperTrunfo;

void ImprimirSeparadorCarta() {
    for(int i=0; i < TAM_SEPARADORCARTA; i++) printf("-");
    printf("\n");
}

void ExibirCartaSuperTrunfo (CartaSuperTrunfo carta) {
    ImprimirSeparadorCarta();
    printf("Estado: %s\n", carta.estado);
    printf("Codigo da Carta: %s\n", carta.codigoDaCarta);
    printf("Cidade: %s\n", carta.cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Qtd. Pontos Turisticos: %d\n", carta.numerosDePontosTuristicos);
    ImprimirSeparadorCarta();
    printf("\n");
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    CartaSuperTrunfo carta = {
        "A001",
        "PR",
        "CURITIBA",
        3000,
        1000.00,
        2000.00,
        12
    };

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    ExibirCartaSuperTrunfo(carta);

    return 0;
}


