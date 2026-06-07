#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Players e Decks  
  char Player1 [20], Player2 [20];

    char Deck1 [20];//Deck 1 e cartas
      char A01, A02, A03, A04; //ID das cidades
      char A01_nome, A02_nome, A03_nome, A04_nome;//Nomes das cidades
      float A01_população, A02_população, A03_população, A04_população;//Populações das cidades
      float A01_PIB, A02_PIB, A03_PIB, A04_PIB;//PIB das cidades
      float A01_area, A02_area, A03_area, A04_area;//Áreas das cidades
      int A01_PontosTuristicos, A02_PontosTuristicos, A03_PontosTuristicos, A04_PontosTuristicos;//Pontos turísticos das cidades

   
    char Deck2 [20];//Deck 2 e cartas
        char B01, B02, B03, B04; //ID das cidades
        char B01_nome, B02_nome, B03_nome, B04_nome;//Nomes das cidades
        float B01_população, B02_população, B03_população, B04_população;//Populações das cidades
        float B01_PIB, B02_PIB, B03_PIB, B04_PIB;//PIB das cidades
        float B01_area, B02_area, B03_area, B04_area;//Áreas das cidades
        int B01_PontosTuristicos, B02_PontosTuristicos, B03_PontosTuristicos, B04_PontosTuristicos;//Pontos turísticos das cidades



    //Info das cartas
    int PontosTuristicos;
    float Area, PIB, População;

    printf ("'SuperTrunfo - Países' iniciando...\n");


    printf ("Digite o nome do Player 1:\n");
    scanf ("%s", &Player1);

    printf ("Digite o nome do Player 2:\n");
    scanf ("%s", &Player2);

    printf ("Cada deck terá um limite de 8 Estados\n");

    printf ("Insira o nome do deck do Player 1:\n");
    scanf ("%s", &Deck1);

    printf ("Cadastrar cartas do Deck 1...\n");
    printf ("Carta 1:");
    scanf ("%s", &A01_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A01_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A01_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A01_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A01_PontosTuristicos);

    printf ("Carta 2:");
    scanf ("%s", &A02_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A02_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A02_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A02_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A02_PontosTuristicos);

    printf ("Carta 3:");
    scanf ("%s", &A03_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A03_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A03_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A03_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A03_PontosTuristicos);

    printf ("Carta 4:");
    scanf ("%s", &A04_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A04_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A04_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A04_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A04_PontosTuristicos);

    
    printf ("Confirmação dos dados:\n");
    printf ("Carta 1: %s\n", A01_nome);
    printf ("População: %.2f\n", A01_população);
    printf ("PIB: %.2f\n", A01_PIB);
    printf ("Área: %.2f\n", A01_area);
    printf ("Pontos turísticos: %d\n", A01_PontosTuristicos);

    printf ("Carta 2: %s\n", A02_nome);
    printf ("População: %.2f\n", A02_população);
    printf ("PIB: %.2f\n", A02_PIB);
    printf ("Área: %.2f\n", A02_area);
    printf ("Pontos turísticos: %d\n", A02_PontosTuristicos);

    printf ("Carta 3: %s\n", A03_nome);
    printf ("População: %.2f\n", A03_população);
    printf ("PIB: %.2f\n", A03_PIB);
    printf ("Área: %.2f\n", A03_area);
    printf ("Pontos turísticos: %d\n", A03_PontosTuristicos);

    printf ("Carta 4: %s\n", A04_nome);
    printf ("População: %.2f\n", A04_população);
    printf ("PIB: %.2f\n", A04_PIB);
    printf ("Área: %.2f\n", A04_area);
    printf ("Pontos turísticos: %d\n", A04_PontosTuristicos);


    printf ("Está correto? (1 para sim, 0 para não)\n"); //Confirmação dos dados do Player 1
    int confirmacao;
    scanf ("%d", &confirmacao);



    printf ("Insira o nome do deck do Player 2:\n");
    scanf ("%s", &Deck2);

    printf ("Cadastrar cartas do Deck 2...\n");
    printf ("Carta 1:");
    scanf ("%s", &B01_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B01_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B01_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B01_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B01_PontosTuristicos);
   
    printf ("Carta 2:");
    scanf ("%s", &B02_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B02_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B02_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B02_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B02_PontosTuristicos);

    printf ("Carta 3:");
    scanf ("%s", &B03_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B03_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B03_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B03_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B03_PontosTuristicos);
    
    printf ("Carta 4:");
    scanf ("%s", &B04_nome);   
    printf ("População da cidade:\n");
    scanf ("%f", &B04_população);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B04_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B04_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B04_PontosTuristicos);

    
    printf ("Confirmação dos dados:\n");
    printf ("Carta 1: %s\n", B01_nome);
    printf ("População: %.2f\n", B01_população);
    printf ("PIB: %.2f\n", B01_PIB);
    printf ("Área: %.2f\n", B01_area);
    printf ("Pontos turísticos: %d\n", B01_PontosTuristicos);
    
    printf ("Carta 2: %s\n", B02_nome);
    printf ("População: %.2f\n", B02_população);
    printf ("PIB: %.2f\n", B02_PIB);
    printf ("Área: %.2f\n", B02_area);
    printf ("Pontos turísticos: %d\n", B02_PontosTuristicos);
    
    printf ("Carta 3: %s\n", B03_nome);
    printf ("População: %.2f\n", B03_população);
    printf ("PIB: %.2f\n", B03_PIB);
    printf ("Área: %.2f\n", B03_area);
    printf ("Pontos turísticos: %d\n", B03_PontosTuristicos);

    printf ("Carta 4: %s\n", B04_nome);
    printf ("População: %.2f\n", B04_população);
    printf ("PIB: %.2f\n", B04_PIB);
    printf ("Área: %.2f\n", B04_area);
    printf ("Pontos turísticos: %d\n", B04_PontosTuristicos);

    printf ("Está correto? (1 para sim, 0 para não)\n");
    scanf ("%d", &confirmacao);

    


    


    



    



  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade


} ;
