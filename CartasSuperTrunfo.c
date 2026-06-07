#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    setlocale(LC_ALL, "Portuguese_brazil");
  //Players e Decks  
  char Player1[20];
  char Player2[20];

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    char deck1;//Deck 1 e cartas
      char A01, A02, A03, A04; //ID das cidades
      char A01_nome, A02_nome, A03_nome, A04_nome;//Nomes das cidades
      float A01_populacao, A02_populacao, A03_populacao, A04_populacao;//Populações das cidades
      float A01_PIB, A02_PIB, A03_PIB, A04_PIB;//PIB das cidades
      float A01_area, A02_area, A03_area, A04_area;//Áreas das cidades
      int A01_PontosTuristicos, A02_PontosTuristicos, A03_PontosTuristicos, A04_PontosTuristicos;//Pontos turísticos das cidades
      float A01_PIB_perCapita, A02_PIB_perCapita, A03_PIB_perCapita, A04_PIB_perCapita;//PIB per capita das cidades
      float A01_DensidadePopulacional, A02_DensidadePopulacional, A03_DensidadePopulacional, A04_DensidadePopulacional;//Densidade populacional das cidades

   
    char deck2;//Deck 2 e cartas
        char B01, B02, B03, B04; //ID das cidades
        char B01_nome, B02_nome, B03_nome, B04_nome;//Nomes das cidades
        float B01_populacao, B02_populacao, B03_populacao, B04_populacao;//Populações das cidades
        float B01_PIB, B02_PIB, B03_PIB, B04_PIB;//PIB das cidades
        float B01_area, B02_area, B03_area, B04_area;//Áreas das cidades
        int B01_PontosTuristicos, B02_PontosTuristicos, B03_PontosTuristicos, B04_PontosTuristicos;//Pontos turísticos das cidades
        float B01_PIB_perCapita, B02_PIB_perCapita, B03_PIB_perCapita, B04_PIB_perCapita;//PIB per capita das cidades
        float B01_DensidadePopulacional, B02_DensidadePopulacional, B03_DensidadePopulacional, B04_DensidadePopulacional;//Densidade populacional das cidades

      

    
    int PontosTuristicos;
    float Area, PIB, Populacao, DensidadePopulacional, PIB_perCapita;

    printf ("'SuperTrunfo - Países' iniciando...\n");
    printf ("Cada deck terá um limite de 8 Estados\n");

  // Área para entrada de dados	

//Cadastro do Player 1
    printf ("Insira o nome do Player 1:\n");
    scanf ("%s", Player1);

    printf ("Insira o nome do deck do Player 1:\n");
    scanf ("%s", deck1);
//Cadastro das cartas do Player 1
    printf ("Cadastrar cartas do Deck 1...\n");
    printf ("Carta 1:");
    scanf ("%s", &A01_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A01_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A01_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A01_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A01_PontosTuristicos);

    printf ("Carta 2:");
    scanf ("%s", &A02_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A02_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A02_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A02_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A02_PontosTuristicos);

    printf ("Carta 3:");
    scanf ("%s", &A03_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A03_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A03_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A03_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A03_PontosTuristicos);

    printf ("Carta 4:");
    scanf ("%s", &A04_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A04_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A04_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A04_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A04_PontosTuristicos);

    
//Confirmação dos dados do Player 1
    printf ("Confirmação dos dados:\n");
    printf ("Carta 1: %s\n", &A01_nome);
    printf ("População: %.2f\n", &A01_populacao);
    printf ("PIB: %.2f\n", &A01_PIB);
    printf ("Área: %.2f\n", &A01_area);
    printf ("Pontos turísticos: %d\n", &A01_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &A01_DensidadePopulacional, A01_DensidadePopulacional = A01_populacao/A01_area);
    printf ("PIB per Capita: %.2f\n", &A01_PIB_perCapita, A01_PIB_perCapita = A01_PIB/A01_populacao);

    printf ("Carta 2: %s\n", &A02_nome);
    printf ("População: %.2f\n", &A02_populacao);
    printf ("PIB: %.2f\n", &A02_PIB);
    printf ("Área: %.2f\n", &A02_area);
    printf ("Pontos turísticos: %d\n", &A02_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &A02_DensidadePopulacional, A02_DensidadePopulacional = A02_populacao/A02_area);
    printf ("PIB per Capita: %.2f\n", &A02_PIB_perCapita, A02_PIB_perCapita = A02_PIB/A02_populacao);

    printf ("Carta 3: %s\n", &A03_nome);
    printf ("População: %.2f\n", &A03_populacao);
    printf ("PIB: %.2f\n", &A03_PIB);
    printf ("Área: %.2f\n", &A03_area);
    printf ("Pontos turísticos: %d\n", &A03_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &A03_DensidadePopulacional, A03_DensidadePopulacional = A03_populacao/A03_area);
    printf ("PIB per Capita: %.2f\n", &A03_PIB_perCapita, A03_PIB_perCapita = A03_PIB/A03_populacao);

    printf ("Carta 4: %s\n", &A04_nome);
    printf ("População: %.2f\n", &A04_populacao);
    printf ("PIB: %.2f\n", &A04_PIB);
    printf ("Área: %.2f\n", &A04_area);
    printf ("Pontos turísticos: %d\n", &A04_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &A04_DensidadePopulacional, A04_DensidadePopulacional = A04_populacao/A04_area);
    printf ("PIB per Capita: %.2f\n", &A04_PIB_perCapita, A04_PIB_perCapita = A04_PIB/A04_populacao);

    printf ("Dados cadastrados com sucesso! Agora é a vez do Player 2 cadastrar suas cartas.\n");
//fim do cadastro do Player 1, início do cadastro do Player 2


//Cadastro do Player 2
    printf ("Insira o nome do Player 2:\n");
    scanf ("%s", Player2);

    printf ("Insira o nome do deck do Player 2:\n");
    scanf ("%s", &deck2);

    printf ("Cadastrar cartas do Deck 2...\n");
    printf ("Carta 1:");
    scanf ("%s", &B01_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B01_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B01_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B01_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B01_PontosTuristicos);
   
    printf ("Carta 2:");
    scanf ("%s", &B02_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B02_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B02_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B02_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B02_PontosTuristicos);

    printf ("Carta 3:");
    scanf ("%s", &B03_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B03_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B03_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B03_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B03_PontosTuristicos);
    
    printf ("Carta 4:");
    scanf ("%s", &B04_nome);   
    printf ("População da cidade:\n");
    scanf ("%f", &B04_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B04_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B04_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B04_PontosTuristicos);

    
    printf ("Confirmação dos dados:\n");
    printf ("Carta 1: %s\n", &B01_nome);
    printf ("População: %.2f\n", &B01_populacao);
    printf ("PIB: %.2f\n", &B01_PIB);
    printf ("Área: %.2f\n", &B01_area);
    printf ("Pontos turísticos: %d\n", &B01_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &B01_DensidadePopulacional, B01_DensidadePopulacional = B01_populacao/B01_area);
    printf ("PIB per Capita: %.2f\n", &B01_PIB_perCapita, B01_PIB_perCapita = B01_PIB/B01_populacao);

    printf ("Carta 2: %s\n", &B02_nome);
    printf ("População: %.2f\n", &B02_populacao);
    printf ("PIB: %.2f\n", &B02_PIB);
    printf ("Área: %.2f\n", &B02_area);
    printf ("Pontos turísticos: %d\n", &B02_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &B02_DensidadePopulacional, B02_DensidadePopulacional = B02_populacao/B02_area);
    printf ("PIB per Capita: %.2f\n", &B02_PIB_perCapita, B02_PIB_perCapita = B02_PIB/B02_populacao);
    
    printf ("Carta 3: %s\n", &B03_nome);
    printf ("População: %.2f\n", &B03_populacao);
    printf ("PIB: %.2f\n", &B03_PIB);
    printf ("Área: %.2f\n", &B03_area);
    printf ("Pontos turísticos: %d\n", &B03_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &B03_DensidadePopulacional, B03_DensidadePopulacional = B03_populacao/B03_area);
    printf ("PIB per Capita: %.2f\n", &B03_PIB_perCapita, B03_PIB_perCapita = B03_PIB/B03_populacao);
    
    printf ("Carta 4: %s\n", &B04_nome);
    printf ("População: %.2f\n", &B04_populacao);
    printf ("PIB: %.2f\n", &B04_PIB);
    printf ("Área: %.2f\n", &B04_area);
    printf ("Pontos turísticos: %d\n", &B04_PontosTuristicos);
    printf ("Densidade Populacional: %.2f\n", &B04_DensidadePopulacional, B04_DensidadePopulacional = B04_populacao/B04_area);
    printf ("PIB per Capita: %.2f\n", &B04_PIB_perCapita, B04_PIB_perCapita = B04_PIB/B04_populacao);

  // Área para exibição dos dados da cidade

    


    


    return 0;



    










} ;
