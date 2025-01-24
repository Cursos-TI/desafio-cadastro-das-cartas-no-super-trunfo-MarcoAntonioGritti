#include <stdio.h>

typedef struct 
{
    char nomecidade [5];
    int populacao;
    float area; 
    float pib;
    int numeroDePontosTuristicos;
}Cidades;

typedef struct{
    int idPais;
    char nome;
    Cidades cidades[4];
}Paises;

int main() {
    Paises paises[8];
    char letrasPaises[9] = "ABCDEFGH";

    for (int p = 0; p < 8; p++){
        paises[p].idPais = p + 1;
        paises[p].nome = letrasPaises[p];
        for (int c = 0; c < 4; c++){
            
            sprintf(paises[p].cidades[c].nomecidade,"%c0%d",letrasPaises[p],c + 1);

            printf("População da cidade %s:\n", paises[p].cidades[c].nomecidade);            
            scanf("%d", paises[p].cidades[c].populacao );
            printf("Área:\n");
            scanf("%f", paises[p].cidades[c].area);
            printf("PIB:\n");
            scanf("%f", paises[p].cidades[c].pib );
            printf("Numero de pontos turísticos:\n");
            scanf("%d", paises[p].cidades[c].numeroDePontosTuristicos );    
        };
    };

    for(int p=0;p < 8;p++){
        printf("\nPAÍS %d\n",paises[p].idPais);
        for (int c = 0; c < 4; c++)
        {
            printf(paises[p].cidades[c].nomecidade );
            printf("%d\n",&paises[p].cidades[c].populacao );
            printf("%.2fkm²\n", &paises[p].cidades[c].area );
            printf("%f\n",&paises[p].cidades[c].pib );
            printf("%d\n",paises[p].cidades[c].numeroDePontosTuristicos );
        }
    }
        

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
 // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
