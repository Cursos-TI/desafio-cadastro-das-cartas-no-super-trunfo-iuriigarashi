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
    int qtdDePontosTuristicos;
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
    printf("Qtd. Pontos Turisticos: %d\n", carta.qtdDePontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta.populacao/carta.area);// População / Área
    printf("PIB per Capita: %.2f\n", carta.pib/carta.populacao);// PIB / População
    ImprimirSeparadorCarta();
    printf("\n");
}

void CadastrarCartaSuperTrunfo(CartaSuperTrunfo *carta) {
    printf("Cadastro de carta:\n\n");
    // Cadastrar codigoDaCarta
    printf("Digite o Codigo da carta: ");
    scanf("%s", carta->codigoDaCarta);
    // Cadastrar estado
    printf("Digite o Estado: ");
    scanf("%s", carta->estado);
    // Cadastrar cidade
    printf("Digite a Cidade: ");
    scanf("%s", carta->cidade);
    // Cadastrar populacao
    printf("Digite a Populacao: ");
    scanf("%d", &carta->populacao);
    // Cadastrar area
    printf("Digite a Area: ");
    scanf("%f", &carta->area);
    // Cadastrar pib
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    // Cadastrar numerosDePontosTuristicos
    printf("Digite a Qtd. de Pontos Turisticos: ");
    scanf("%d", &carta->qtdDePontosTuristicos);

    printf("\nCarta ID: %s cadastrada com sucesso!\n\n", carta->codigoDaCarta);
}

int main() {
    // Definição das Cartas:
    CartaSuperTrunfo carta1, carta2;

    // Cadastro das Cartas:
    CadastrarCartaSuperTrunfo(&carta1);
    CadastrarCartaSuperTrunfo(&carta2);

    // Exibição dos Dados das Cartas:
    ExibirCartaSuperTrunfo(carta1);
    ExibirCartaSuperTrunfo(carta2);

    return 0;
}


