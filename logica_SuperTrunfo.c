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
   char nome_da_cidade2 [50] = "Rio de Janeiro";
   int  numeros_depontos_turisticos2 = 30;
   int habitantes2 = 6748000;
   float densidade_populacional2;
   float pib_per_capita2;
   float area_da_cidade2 = 1200.25;
   float pib2 = 300500000000.00;

   
   printf ("***** Super Trunfo de cidades *****\n\n\n");


   //Cálculos para carta 1
   densidade_populacional1 = (float) habitantes1 / area_da_cidade1;
   pib_per_capita1 = pib1 / (float) habitantes1;

   //Cálculos para carta 2 
   densidade_populacional2 = (float) habitantes2 / area_da_cidade2;
   pib_per_capita2 = pib2 /(float) habitantes2 ;



   printf("Comparaçao de cartas (Atributo: Populacao):\n\n");

   if (habitantes1 > habitantes2) {
      printf("Carta 1 - %s: %d\n", nome_da_cidade1, habitantes1);
      printf("Carta 2 - %s: %d\n", nome_da_cidade2, habitantes2);
      printf("Resultado: Carta1 (%s) venceu!\n", nome_da_cidade1);
 } else if (habitantes2 > habitantes1) {
      printf("Carta 1 - %s: %d\n", nome_da_cidade1, habitantes1);
      printf("Carta 2 - %s: %d\n", nome_da_cidade2, habitantes2);
      printf("Resultado: carta2 (%s) venceu!\n", nome_da_cidade2);
} else { 
      printf("Carta 1 - %s: %d\n", nome_da_cidade1, habitantes1);
      printf("Carta 2 - %s: %d\n", nome_da_cidade2, habitantes2);
      printf("Resultado: Empate!\n");

   }
    printf ("\n\n");
    printf ("--- Fim do jogo! ---\n\n\n");

 


    return 0;


//fim do programa
   


}

        
