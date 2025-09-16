#include <stdio.h>

int main() {
    char estado[10], estado2[10];
    char codigo[10], codigo2[15];
    char nome[10], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int ponto_turistico, ponto_turistico2;
   


    // carta 1

    printf("Carta 1:\n");
    printf("Digite o nome do estado: \n");
    scanf(" %s", &estado);

    printf("Digite o código: ");
    scanf ("%s", &codigo);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("Digite o número da população: \n");
    scanf ("%d", &populacao);

    printf (" Digite a área (km²): \n");
    scanf ("%f", &area);

    printf ("Digite o PIB dessa cidade: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &ponto_turistico);

    // carta 2
      
    printf("Carta 2:\n");
    printf("Digite o nome do estado: \n");
    scanf(" %s", &estado2);


    printf ("Digite o código: \n");
    scanf ("%s", &codigo2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome2);
    
    printf ("Digite o número da população: \n");
    scanf ("%d", &populacao2);;
  
    printf (" Digite a Área (km²): \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB dessa cidade: \n");
    scanf ("%f", &pib2);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &ponto_turistico2);
    
    float densidadepopulacional = populacao / area;
    float densidadepopulacional2 = populacao2 / area2;
    float PIBperCapita = pib / populacao;
    float PIBperCapita2 = pib2 / populacao2;

// imprimir as cartas

   printf("Carta1");
   printf("Estado: %s\n ",estado);
   printf("Codigo: %s\n ",codigo);
   printf("Cidade: %s\n ",nome);
   printf("Populacao: %d\n ",populacao);
   printf("Area: %f\n ",area);
   printf("PIB: R$ %f\n ",pib);
   printf("pontos turisticos: %d\n ",ponto_turistico); 
   printf("Densidade populacional: %.2f\n ",densidadepopulacional);
   printf("PIB per capita: R$ %.2f\n ",PIBperCapita);
    
   printf("Carta2");
   printf("Estado: %s\n",estado2);
   printf("Codigo: %s\n",codigo2);
   printf("Cidade: %s\n",nome2);
   printf("Populacao : %d\n",populacao2);
   printf("Area : %f\n",area2);
   printf("PIB: R$ %f\n",pib2);
   printf("pontos turisticos : %d\n",ponto_turistico2);
   printf("Densidade populacional: %.2f\n ",densidadepopulacional2);
   printf("PIB per capita: R$ %.2f\n ",PIBperCapita2);
    return 0;
}
