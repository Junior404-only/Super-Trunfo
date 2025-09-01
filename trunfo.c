#include <stdio.h>

// Criando uma estrutura para os dados das cartas
struct Cartas {

        char estado;
        char codigo_carta[4];
        char cidade[50];
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;
};

int main(void) {

        // Chamando a estrutura para dentro da funcao main
        struct Cartas carta1, carta2;


        //Codigo da carta 1 para o usuario interagir com o teclado
        printf("Carta: 1\n");

        printf("Estado: (A-H)");
        scanf(" %c", &carta1.estado);

        printf("Codigo: (01-04)");
        scanf("%s", &carta1.codigo_carta);

        printf("Nome da cidade: ");
        scanf("%s[^\n]", carta1.cidade);

        printf("Populacao: ");
        scanf("%d", &carta1.populacao);

        printf("Area: ");
        scanf("%f", &carta1.area);

        printf("PIB: ");
        scanf("%f", &carta1.pib);

        printf("Pontos turisticos: ");
        scanf("%d", &carta1.pontos_turisticos);


        // Codigo da carta 2 para o usuario interagir com o teclado
        printf("Carta: 2\n");

        printf("Estado: (A-H)");
        scanf(" %c", &carta2.estado);

        printf("Codigo: (01-04)");
        scanf("%s", &carta2.codigo_carta);

        printf("Nome da cidade: ");
        scanf("%s[^\n]", carta2.cidade);

        printf("Populacao: ");
        scanf("%d", &carta2.populacao);

        printf("Area: ");
        scanf("%f", &carta2.area);

        printf("PIB: ");
        scanf("%f", &carta2.pib);

        printf("Pontos turisticos: ");
        scanf("%d", &carta2.pontos_turisticos);


        //Imprimindo na tela todos os dados das carta 1 e da carta 2
       printf("\n======= Cartas cadastradas  =======\n");

       printf("Carta: 1\n");

       printf("Estado: %c\n", carta1.estado);
       printf("Codigo: %c%s\n", carta1.estado, carta1.codigo_carta);
       printf("Nome da cidade: %s\n", carta1.cidade);
       printf("Populacao: %d\n", carta1.populacao);
       printf("Area: %.2f km2\n", carta1.area);
       printf("PIB: %.2f\n", carta1.pib);
       printf("Numero de pontos turisticos: %d\n\n", carta1.pontos_turisticos);

       printf("Carta: 2\n");


       printf("Estado: %c\n", carta2.estado);
       printf("Codigo: %c%s\n", carta2.estado, carta2.codigo_carta);
       printf("Nome da cidade: %s\n", carta2.cidade);
       printf("Populacao: %d\n", carta2.populacao);
       printf("Area: %.2f km2\n", carta2.area);
       printf("PIB: %.2f\n", carta2.pib);
       printf("Numero de pontos turisticos: %d\n\n", carta2.pontos_turisticos);

       // Caso nao tenha nenhuma falha, retorne 0
        return 0;
 
}
