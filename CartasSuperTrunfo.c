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
    char codigoDaCarta[5];
    char nomePais[10];
    char nomeEstado[10];
    char nomeCidade[30];
    int populacao; 
    float area, pib;
    int numeroDePontosTuristicos;

//INSERE OS DADOS DE CADA CARTA
    printf("*** CADASTRO DAS CARTAS DO JOGO ***\n");

    printf("\nCadastro da Carta 1\n");

    printf("\nCodigo da carta: ");
    scanf("%s", &codigoDaCarta);
    printf("\nInsira o nome do Pais: ");
    scanf("%s", &nomePais);

    printf("Insira o nome do Estado: ");
    scanf("%s", &nomeEstado);

    printf("Insira o nome da Cidade: ");
    scanf("%s", &nomeCidade);

    //printf("\nInforme os seguintes dados:");
    printf("\nArea em Km²: ");
    scanf("%f", &area);
    printf("\nPopulação: ");
    scanf("%d", &populacao);
    printf("\nPIB: ");
    scanf("%f", &pib);
    printf("\nNumero de Pontos Turisticos: ");
    scanf("%d", &numeroDePontosTuristicos);

    //EXIBE OS DADOS INFORMADOS
    printf("DADOS DA CARTA\n");
    printf("\nCodigo da Carta: %s", codigoDaCarta);
    printf("\nPais: %s", nomePais);
    printf("\nEstado: %s", nomeEstado);
    printf("\nCidade: %s", nomeCidade);
    printf("\nArea em KM: %.2f", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nPopulação: %d de habitantes", populacao);
    printf("\nNúmero de Pontos Turísticos: %d", numeroDePontosTuristicos);
    

    return 0;
}
