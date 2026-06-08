#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    
    setlocale(LC_ALL, "Portuguese_brazil");
  //Player 1 e Player 2
  char Player1[20];
  int CPU, escolha;
  srand (time(0));//Seed de Random.

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
      char deck1[20];//Deck 1 e cartas
      char A01, A02, A03, A04; //ID das cidades
      char A01_nome[50], A02_nome[50], A03_nome[50], A04_nome[50];//Nomes das cidades
      float A01_populacao, A02_populacao, A03_populacao, A04_populacao;//Populações das cidades
      float A01_PIB, A02_PIB, A03_PIB, A04_PIB;//PIB das cidades
      float A01_area, A02_area, A03_area, A04_area;//Áreas das cidades
      int A01_PontosTuristicos, A02_PontosTuristicos, A03_PontosTuristicos, A04_PontosTuristicos;//Pontos turísticos das cidades
      float A01_PIB_perCapita, A02_PIB_perCapita, A03_PIB_perCapita, A04_PIB_perCapita;//PIB per capita das cidades
      float A01_DensidadePopulacional, A02_DensidadePopulacional, A03_DensidadePopulacional, A04_DensidadePopulacional;//Densidade populacional das cidades
      float A01_SuperTrunfo, A02_SuperTrunfo, A03_SuperTrunfo, A04_SuperTrunfo;//Valor somado de todas as variáveis da carta para definir o Super Trunfo
    
   
    char deck2[20];//Deck 2 e cartas
        char B01, B02, B03, B04; //ID das cidades
        char B01_nome[50], B02_nome[50], B03_nome[50], B04_nome[50];//Nomes das cidades
        float B01_populacao, B02_populacao, B03_populacao, B04_populacao;//Populações das cidades
        float B01_PIB, B02_PIB, B03_PIB, B04_PIB;//PIB das cidades
        float B01_area, B02_area, B03_area, B04_area;//Áreas das cidades
        int B01_PontosTuristicos, B02_PontosTuristicos, B03_PontosTuristicos, B04_PontosTuristicos;//Pontos turísticos das cidades
        float B01_PIB_perCapita, B02_PIB_perCapita, B03_PIB_perCapita, B04_PIB_perCapita;//PIB per capita das cidades
        float B01_DensidadePopulacional, B02_DensidadePopulacional, B03_DensidadePopulacional, B04_DensidadePopulacional;//Densidade populacional das cidades
        float B01_SuperTrunfo, B02_SuperTrunfo, B03_SuperTrunfo, B04_SuperTrunfo;//Valor somado de todas as variáveis da carta para definir o Super Trunfo
      

    
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
    scanf ("%s", A01_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A01_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A01_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A01_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A01_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados

    printf ("Carta 2:");
    scanf ("%s", A02_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A02_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A02_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A02_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A02_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados

    printf ("Carta 3:");
    scanf ("%s", A03_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A03_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A03_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A03_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A03_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados

    printf ("Carta 4:");
    scanf ("%s", A04_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &A04_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &A04_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &A04_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &A04_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados 

    //Cálculos
A01_DensidadePopulacional = A01_populacao/A01_area;
A01_PIB_perCapita = A01_PIB/A01_populacao;
A02_DensidadePopulacional = A02_populacao/A02_area;
A02_PIB_perCapita = A02_PIB/A02_populacao;
A03_DensidadePopulacional = A03_populacao/A03_area;
A03_PIB_perCapita = A03_PIB/A03_populacao;
A04_DensidadePopulacional = A04_populacao/A04_area;
A04_PIB_perCapita = A04_PIB/A04_populacao;
A01_SuperTrunfo = A01_populacao + A01_PIB + A01_area + A01_PontosTuristicos + (1.00 / A01_DensidadePopulacional) + A01_PIB_perCapita;
A02_SuperTrunfo = A02_populacao + A02_PIB + A02_area + A02_PontosTuristicos + (1.00 / A02_DensidadePopulacional) + A02_PIB_perCapita;
A03_SuperTrunfo = A03_populacao + A03_PIB + A03_area + A03_PontosTuristicos + (1.00 / A03_DensidadePopulacional) + A03_PIB_perCapita;
A04_SuperTrunfo = A04_populacao + A04_PIB + A04_area + A04_PontosTuristicos + (1.00 / A04_DensidadePopulacional) + A04_PIB_perCapita;

//Confirmação dos dados do Player 1
printf("\n*** *** ***\n");//quebra de linha para melhor visualização dos dados
    printf ("***Confirmação dos dados:***\n");
    printf ("Carta 1: %s\n", A01_nome);
    printf ("População: %.2f\n", A01_populacao);
    printf ("PIB: %.2f\n", A01_PIB);
    printf ("Área: %.2f\n", A01_area);
    printf ("Pontos turísticos: %d\n", A01_PontosTuristicos);

    printf ("Densidade Populacional: %.2f\n", A01_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", A01_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", A01_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

    printf ("Carta 2: %s\n", A02_nome);
    printf ("População: %.2f\n", A02_populacao);
    printf ("PIB: %.2f\n", A02_PIB);
    printf ("Área: %.2f\n", A02_area);
    printf ("Pontos turísticos: %d\n", A02_PontosTuristicos);
    
    printf ("Densidade Populacional: %.2f\n", A02_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", A02_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", A02_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

    printf ("Carta 3: %s\n", A03_nome);
    printf ("População: %.2f\n", A03_populacao);
    printf ("PIB: %.2f\n", A03_PIB);
    printf ("Área: %.2f\n", A03_area);
    printf ("Pontos turísticos: %d\n", A03_PontosTuristicos);

    printf ("Densidade Populacional: %.2f\n", A03_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", A03_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", A03_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

    printf ("Carta 4: %s\n", A04_nome);
    printf ("População: %.2f\n", A04_populacao);
    printf ("PIB: %.2f\n", A04_PIB);
    printf ("Área: %.2f\n", A04_area);
    printf ("Pontos turísticos: %d\n", A04_PontosTuristicos);

    printf ("Densidade Populacional: %.2f\n", A04_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", A04_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", A04_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

    printf ("Dados cadastrados com sucesso! Agora é a vez do Player 2 cadastrar suas cartas.\n");

    
//fim do cadastro do Player 1, início do cadastro do Player 2


//Cadastro do Player 2
    printf ("Player 2: CPU Selecionado...\n");

    printf ("Insira o nome do deck do Player 2:\n");
    scanf ("%s", deck2);

    printf ("Cadastrar cartas do Deck 2...\n");
    printf ("Carta 1:");
    scanf ("%s", B01_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B01_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B01_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B01_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B01_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados
   
    printf ("Carta 2:");
    scanf ("%s", B02_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B02_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B02_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B02_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B02_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados

    printf ("Carta 3:");
    scanf ("%s", B03_nome);
    printf ("População da cidade:\n");
    scanf ("%f", &B03_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B03_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B03_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B03_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados

    printf ("Carta 4:");
    scanf ("%s", B04_nome);   
    printf ("População da cidade:\n");
    scanf ("%f", &B04_populacao);
    printf ("PIB da cidade (R$ em Bilhões):\n");
    scanf ("%f", &B04_PIB);
    printf ("Área da cidade:\n");
    scanf ("%f", &B04_area);
    printf ("Número de pontos turísticos da cidade:\n");
    scanf ("%d", &B04_PontosTuristicos);
    printf ("\n");//quebra de linha para melhor visualização dos dados

    //Cálculos
    B01_DensidadePopulacional = B01_populacao/B01_area;
    B01_PIB_perCapita = B01_PIB/B01_populacao;
    B02_DensidadePopulacional = B02_populacao/B02_area;
    B02_PIB_perCapita = B02_PIB/B02_populacao;
    B03_DensidadePopulacional = B03_populacao/B03_area;
    B03_PIB_perCapita = B03_PIB/B03_populacao;
    B04_DensidadePopulacional = B04_populacao/B04_area;
    B04_PIB_perCapita = B04_PIB/B04_populacao;

    B01_SuperTrunfo = B01_populacao + B01_PIB + B01_area + B01_PontosTuristicos + (1.00 / B01_DensidadePopulacional) + B01_PIB_perCapita;
    B02_SuperTrunfo = B02_populacao + B02_PIB + B02_area + B02_PontosTuristicos + (1.00 / B02_DensidadePopulacional) + B02_PIB_perCapita;
    B03_SuperTrunfo = B03_populacao + B03_PIB + B03_area + B03_PontosTuristicos + (1.00 / B03_DensidadePopulacional) + B03_PIB_perCapita;
    B04_SuperTrunfo = B04_populacao + B04_PIB + B04_area + B04_PontosTuristicos + (1.00 / B04_DensidadePopulacional) + B04_PIB_perCapita;

printf("\n*** *** ***\n");//quebra de linha para melhor visualização dos dados

    printf ("***Confirmação dos dados:***\n");
    printf ("Carta 1: %s\n", B01_nome);
    printf ("População: %.2f\n", B01_populacao);
    printf ("PIB: %.2f\n", B01_PIB);
    printf ("Área: %.2f\n", B01_area);
    printf ("Pontos turísticos: %d\n", B01_PontosTuristicos);

    printf ("Densidade Populacional: %.2f\n", B01_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", B01_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", B01_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

    printf ("Carta 2: %s\n", B02_nome);
    printf ("População: %.2f\n", B02_populacao);
    printf ("PIB: %.2f\n", B02_PIB);
    printf ("Área: %.2f\n", B02_area);
    printf ("Pontos turísticos: %d\n", B02_PontosTuristicos);

    printf ("Densidade Populacional: %.2f\n", B02_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", B02_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", B02_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 
    
    printf ("Carta 3: %s\n", B03_nome);
    printf ("População: %.2f\n", B03_populacao);
    printf ("PIB: %.2f\n", B03_PIB);
    printf ("Área: %.2f\n", B03_area);
    printf ("Pontos turísticos: %d\n", B03_PontosTuristicos);
    
    printf ("Densidade Populacional: %.2f\n", B03_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", B03_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", B03_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

    printf ("Carta 4: %s\n", B04_nome);
    printf ("População: %.2f\n", B04_populacao);
    printf ("PIB: %.2f\n", B04_PIB);
    printf ("Área: %.2f\n", B04_area);
    printf ("Pontos turísticos: %d\n", B04_PontosTuristicos);

    printf ("Densidade Populacional: %.2f\n", B04_DensidadePopulacional);
    printf ("PIB per Capita: %.2f\n", B04_PIB_perCapita);
    printf ("Super Trunfo: %.2f\n", B04_SuperTrunfo);
 printf ("\n");//quebra de linha para melhor visualização dos dados 

printf("\n*** *** ***\n");//quebra de linha para melhor visualização dos dados

    printf ("Dados cadastrados com sucesso! Agora é hora de jogar!\n");
    

  // Área para exibição do combate

  printf ("Comparando as cartas...\n");
    printf ("Carta 1 do Player 1: %s\n", A01_nome);
    printf ("Carta 1 do Player 2: %s\n", B01_nome);

printf("\n*** *** ***\n");//quebra de linha para melhor visualização dos dados
    
    printf ("Escolha o parâmetro de comparação:\n");
    printf("1. População    "); printf("2. PIB    "); printf("3. Área    "); printf("4. Pontos Turísticos\n");
    printf("5. Combo: Densidade Populacional    "); printf("6. Combo: PIB Per Capita\n");
    printf("7. *** SUPER TRUNFO ***\n");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            if (A01_populacao > B01_populacao){
                printf("\n### Vitória Populacional do Jogador 1! ###\n ");
            } else if (A01_populacao < B01_populacao){
                printf("\n### Vitória Populacional do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate Populacional! ###\n");
            }
        break;
        case 2:
            if (A01_PIB > B01_PIB){
                printf("\n### Vitória Monetária do Jogador 1! ###\n ");
            } else if (A01_PIB < B01_PIB){
                printf("\n### Vitória Monetária do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate Monetário! ###\n");
            }
        break;
        case 3:
            if (A01_area > B01_area){
                printf("\n### Vitória Espaçosa do Jogador 1! ###\n ");
            } else if (A01_area < B01_area){
                printf("\n### Vitória Espaçosa do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate Territorial! ###\n");
            }
        break;
        case 4:
            if (A01_PontosTuristicos > B01_PontosTuristicos){
                printf("\n### Vitória Turística do Jogador 1! ###\n ");
            } else if (A01_PontosTuristicos < B01_PontosTuristicos){
                printf("\n### Vitória Turística do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate Turístico! ###\n");
            }
        break;
        case 5:
            if (A01_DensidadePopulacional < B01_DensidadePopulacional){
                printf("\n### Vitória Lotada do Jogador 1! ###\n ");
            } else if (A01_DensidadePopulacional > B01_DensidadePopulacional){
                printf("\n### Vitória Lotada do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate sem Espaço pra ninguém! ###\n");
            }
        break;
        case 6:
            if (A01_PIB_perCapita > B01_PIB_perCapita){
                printf("\n### Vitória Rica do Jogador 1! ###\n ");
            } else if (A01_PIB_perCapita < B01_PIB_perCapita){
                printf("\n### Vitória Rica do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate Classe Média! ###\n");
            }
        break;
        case 7:
            if (A01_SuperTrunfo > B01_SuperTrunfo){
                printf("\n### Vitória SUPER TRUNFO do Jogador 1! ###\n ");
            } else if (A01_SuperTrunfo < B01_SuperTrunfo){
                printf("\n### Vitória SUPER TRUNFO do Jogador 2! ###\n ");
            } else {
                printf("\n### Um empate TRIUNFAL! ###\n");
            }
        break;

    default:
            printf("Comando inválido!\n\n");
        

            


    }
    
  
printf("\n*** *** ***\n");//quebra de linha para melhor visualização dos dados
 


    


    return 0;




    










} ;
