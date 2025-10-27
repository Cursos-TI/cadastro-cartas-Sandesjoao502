#include <stdio.h>


int main() {
printf(" escreva as informacoes da primeira carta \n");
printf(" carta 1 \n");

char estado[50];
printf("escreva o nome do estado sem usar espaco \n");
scanf("%s" , &estado);

char cidade[50];
printf("escreva o nome da cidade sem utilizar espaco \n");
scanf("%s" , &cidade);

float habitantes;
printf("escreva a quantidade de habitantes \n");
scanf("%f" , &habitantes);

float area;
printf("escreva a area km^2 \n");
scanf("%f" , &area );

float pib;
printf("escreva o pib \n");
scanf("%f" , &pib);

int pontoTuristico;
printf("Escreva a quantidade de pontos turisticos \n");
scanf("%f", &pontoTuristico);

char codigoDacarta[2];
printf("escreva o codigo da carta  \n");
printf("o codigo da carta e a primeira letra da cidade e o primeiro numero da quantidade de habitantes \n");
scanf("%s" , &codigoDacarta);


printf("Informacoes da primeira carta  \n");
printf("estado: %s\n", estado);
printf("cidade: %s\n", cidade);
printf("habitantes: %f\n", habitantes);
printf("area: %f\n", area );
printf("pib: %f\n", pib);
printf("ponto turisto: %f\n", pontoTuristico);
printf("codigo da carta: %s\n", codigoDacarta);




printf(" escreva as informacoes da segunda  carta \n");
printf(" carta 2 \n");

char estado2[50];
printf("escreva o nome do estado sem usar espaco \n");
scanf("%s" , &estado2);

char cidade2[50];
printf("escreva o nome da cidade sem utilizar espaco \n");
scanf("%s" , &cidade2);

float habitantes2;
printf("escreva a quantidade de habitantes \n");
scanf("%f" , &habitantes2);

float area2;
printf("escreva a area \n");
scanf("%f" , &area2);

float pib2;
printf("escreva o pib \n");
scanf("%f" , &pib2);

int pontoTuristico2;
printf("Escreva a quantidade de pontos turisticos \n");
scanf("%f", &pontoTuristico2);

char codigoDacarta2[2];
printf("escreva o codigo da carta  \n");
printf("o codigo da carta e a primeira letra da cidade e o primeiro numero da quantidade de habitantes \n");
scanf("%s" , &codigoDacarta2);



printf("Informacoes da segunda  carta  \n");
printf("estado: %s\n", estado2);
printf("cidade: %s\n", cidade2);
printf("habitantes: %f\n", habitantes2);
printf("area: %f\n", area2);
printf("pib: %f\n", pib2);
printf("ponto turisto: %f\n", pontoTuristico2);
printf("codigo da carta: %s\n", codigoDacarta2);















return 0;
