#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
   // DADOS DAS CARTAS
    char codigoDaCarta1[2], codigoDaCarta2[2];
    char nomeEstadoCarta1[1], nomeEstadoCarta2[1];
    char nomeCidadeCarta1[30], nomeCidadeCarta2[30];
    int populacaoCarta1, populacaoCarta2; 
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2;
    int numeroDePontosTuristicosCarta1, numeroDePontosTuristicosCarta2;

//INSERE OS DADOS DE CADA CARTA 1
    printf("*** CADASTRO DAS CARTAS DO JOGO ***\n");
    printf("\nCadastro da Carta 1\n");
    printf("Insira o nome do Estado: ");
    scanf("%c", &nomeEstadoCarta1);
    printf("Codigo da carta: ");
    scanf("%c", &codigoDaCarta1);
    printf("Insira o nome da Cidade: ");
    scanf("%s", &nomeCidadeCarta1);
    printf("Area em Km²: ");
    scanf("%f", &areaCarta1);
    printf("População: ");
    scanf("%d", &populacaoCarta1);
    printf("PIB: ");
    scanf("%f", &pibCarta1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numeroDePontosTuristicosCarta1);
    printf("\n----------------------------------------------");
//INSERE OS DADOS DE CADA CARTA 2

    printf("\n*** Cadastro da Carta 2 ***\n");
    printf("Insira o nome do Estado: ");
    scanf("%c", &nomeEstadoCarta2);
    printf("\nCodigo da carta: ");
    scanf("%s", &codigoDaCarta2);
    printf("Insira o nome da Cidade: ");
    scanf("%s", &nomeCidadeCarta2);
    printf("Area em Km²: ");
    scanf("%f", &areaCarta2);
    printf("População: ");
    scanf("%d", &populacaoCarta2);
    printf("PIB: ");
    scanf("%f", &pibCarta2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &numeroDePontosTuristicosCarta2);

//////////////////////////////////////////////////////////////////
//EXIBE OS DADOS INFORMADO DA PRIMEIRA CARTA
    printf("\nDADOS DA CARTA 1\n");
    printf("\nEstado: %s", nomeEstadoCarta1);
    printf("\nCodigo da Carta: %c", codigoDaCarta1);    
    printf("\nCidade: %s", nomeCidadeCarta1);
    printf("\nArea em KM: %.2f", areaCarta1);
    printf("\nPIB: %.2f bilhões de reais", pibCarta1);
    printf("\nPopulação: %d de habitantes", populacaoCarta1);
    printf("\nNúmero de Pontos Turísticos: %d", numeroDePontosTuristicosCarta1);
    printf("\n----------------------------------------------");
    //EXIBE OS DADOS INFORMADO DA SEGUNDA CARTA
    printf("\nDADOS DA CARTA 2\n");
    printf("\nEstado: %s", nomeEstadoCarta2);
    printf("\nCodigo da Carta: %s", nomeEstadoCarta2, codigoDaCarta2);
    printf("\nCidade: %s", nomeCidadeCarta2);
    printf("\nArea em KM: %.2f", areaCarta2);
    printf("\nPIB: %.2f bilhões de reais", pibCarta2);
    printf("\nPopulação: %d de habitantes", populacaoCarta2);
    printf("\nNúmero de Pontos Turísticos: %d\n", numeroDePontosTuristicosCarta2);

    return 0;
}
