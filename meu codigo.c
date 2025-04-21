#include <stdio.h>


int main(){
    // carta 1
    char estado;
    char codigo[20];
    char nome_cidade [50];
    int populacao;
    float area;
    float pib;

    printf("carta 01\n");

    printf("escolha uma letra A a H \n");
    scanf("%c", &estado);
    printf("adicione um codigo com a letra do estdo seguido de um numero\n");
    scanf("%s", codigo); // digita o codigo
    printf("nome da cidade\n");
    scanf(" %s", nome_cidade); // digita a cidade
    printf("população\n");
    scanf("%d",&populacao);// ainda nao sei o por que esta assim
    printf("area\n");
    scanf("%f", &area); // digita a area , por que não funciona o %.2f?
    printf("qual eo PIB\n");
    scanf("%f", &pib);// digita o pib
// vai mostra o resultado que foi digitado em cima
    printf("carta 01\n");
    printf("ESTADO E: %C\n", estado);
    printf("O CODIGO e: %s\n", codigo);
    printf("a cidede e: %s\n", nome_cidade);
    printf("a população e de: %d\n", populacao);
    printf("area e: %F km²\n", area);
    printf("o pib e: %f bilhoes\n", pib);


    printf("carta 02\n");

    char estado2;
    char codigo2[20];
    char nome_cidade2 [50];
    int populacao2;
    float area2;
    float pib2;


    printf("escolha uma letra A a H \n");
    scanf(" %c",&estado2);

    printf("adicione um codigo com a letra do estdo seguido de um numero\n");
    scanf("%s", codigo2);
    printf("nome da cidade\n");
    scanf("%s",nome_cidade2);
    printf("população\n");
    scanf("%d", &populacao2);
    printf("area\n");
    scanf("%f", &area2);
    printf("qual eo PIB\n");
    scanf("%f", &pib2);

    printf("carta 02\n");
    printf("ESTADO E: %c\n", estado2);
    printf("O CODIGO e: %s\n", codigo2);
    printf("a cidede e: %s\n", nome_cidade2);
    printf("a população e de: %d\n", populacao2);
    printf("area e: %.2f km²\n", area2);
    printf("o pib e: %.2f bilhoes\n", pib2);
 

 

}
