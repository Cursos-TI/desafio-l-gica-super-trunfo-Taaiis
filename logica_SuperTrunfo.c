#include <stdio.h>


int main (){
  //Váriaveis para carta 1
   char estado1 = 'A';
   char codigo_da_carta1 [4] = "A01";
   char nome_da_cidade1 [50] = "São Paulo";
   int  numeros_depontos_turisticos1 = 50;
   int habitantes1 = 12325000;
   float densidade_populacional1;
   float pib_per_capita1;
   float area_da_cidade1 = 1521.11;
   float pib1 = 699280000000.00;
  

   //Váriaveis para carta 2
   char estado2 = 'B';
   char codigo_da_carta2 [4] = "B02";
   char nome _da_cidade2 [50] = "Rio de Janeiro";
   int  numeros_depontos_turisticos2 = 30;
   int habitantes2 = 6748000;
   float densidade_populacional2;
   float pib_per_capita2;
   float area_da_cidade2 = 1200.25;
   float pib2 = 300500000000.00;

   
   


    printf ("***** Super Trunfo de cidades *****\n\n\n");
    printf ("   Vamos lá!\n\n ");
    printf ("   GO!   \n\n");
    printf ("== Carta 1 ==\n\n");




   densidade_populacional1 = (float) habitantes1 / area_da_cidade1;
   pib_per_capita1 = pib1 / (float) habitantes1;

   printf ("Densidade populacional é: %.2f hab/km²\n", densidade_populacional1);
   printf ("PIB per capita é: %.2f reais\n", pib_per_capita1);

   int habitantes1 = 12325000;
   int habitantes2 = 6748000

   if (habitantes1 > habitantes2) {
   printf("Comparação de cartas (habitantes1):\n\n");
   printf("Carta1 São Paulo: %d\n", habitantes1);
   printf("Carta2 Rio de Janeiro: %d\n", habitantes2);
   printf("Resultado: \n carta1 venceu (São Paulo)!\n");
   
   } else if {
   (habitantes1 < habitantes2)
   printf("Comparação de cartas (habitantes2):\n\n");
   printf("Carta1 São Paulo: %d\n", habitantes1);
   printf("Carta2 Rio de Janeiro: %d\n", habitantes2);
   printf("Resultado: \n carta2 venceu (Rio de Janeiro)!\n");
   }

   


   
    printf ("\n\n");
  


    printf ("***** Vamos para a carta 2! *****\n\n");
    printf("== Carta 2 ==\n\n");

  
   densidade_populacional2 = (float) habitantes2 / area_da_cidade2;
   pib_per_capita2 = pib2 /(float) habitantes2 ;


   printf ("Densidade populacional é: %.2f hab/km²\n", densidade_populacional2);
   printf ("PIB per capita é : %.2f reais\n", pib_per_capita2);

   int habitantes2 = 6748000;
   if (habitantes1 < habitantes2) {
    printf("")



    printf ("\n\n");
    printf ("--- Fim do jogo! ---\n\n\n");

 


    return 0;


//fim do programa
   


}

        
