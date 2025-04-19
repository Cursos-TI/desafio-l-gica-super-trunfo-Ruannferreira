#include <stdio.h>

//codigo

int main() {
char estado[10];
char codigo[10];
char cidade[10];
float area;
float pib;
int populacao;
int pontosturisticos;
float densidade;
float pibpercapita;

//dados 1 carta
printf("digite as informacoes da primeira carta! \n");
printf("digite o estado: \n");
scanf( "%s" , estado);

printf("digite o codigo: \n");
scanf( "%s" , codigo);

printf("digite a cidade: \n");
scanf( "%s" , cidade);

printf("digite a area da cidade \n");
scanf( "%f", &area);


printf("digite o pib: \n");
scanf( "%f" , &pib);

printf("digite a populacao: \n");
scanf( "%d", &populacao);

printf("digite a quantidade de pontos turisticos: \n");
scanf( "%d" , &pontosturisticos);

    char estado2[10];
    char codigo2[10];
    char cidade2[10];
    float area2;
    float pib2;
    int populacao2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    

//dados 2 carta

    printf("digite as informacoes da segunda carta! \n");
    printf("digite o estado: \n");
    scanf( "%s" , estado2);

    printf("digite o codigo: \n");
    scanf( "%s" , codigo2);

    printf("digite a cidade: \n");
    scanf( "%s" , cidade2);

    printf("digite a area da cidade \n");
    scanf( "%f", &area2);


    printf("digite o pib: \n");
    scanf( "%f" , &pib2);

    printf("digite a populacao: \n");
    scanf( "%d", &populacao2);

    printf("digite a quantidade de pontos turisticos: \n");
    scanf( "%d" , &pontosturisticos2);

//densidade e percapitas das cidades

densidade = (populacao) / area;  
pibpercapita = (pib) / populacao;

densidade2 = (populacao2) / area2;
pibpercapita2 = (pib2) / populacao2;


// dados coletados

    printf("ESTADO: %s - Cidade: %s\n", estado, cidade);
    printf("area: %f\n", area);
    printf("pib: %f\n", pib);
    printf("populacao: %d\n", populacao);
    printf("pontos turisticos: %d\n", pontosturisticos);

    printf("A Densidade Da Cidade %s e: %.2f\n", cidade, densidade);
    printf("O Pib Per Capita Da Cidade %s e: %.2f\n", cidade, pibpercapita);





    printf("ESTADO: %s - Cidade: %s\n", estado2, cidade2);
    printf("area: %f\n", area2);
    printf("pib: %f\n", pib2);
    printf("populacao: %d\n", populacao2);
    printf("pontos turisticos: %d\n", pontosturisticos2);

    printf("A Densidade Da Cidade %s e: %.2f\n", cidade2, densidade2);
    printf("O Pib Per Capita Da Cidade %s e: %.2f\n", cidade2, pibpercapita2);
    
//Comparação de cada variavel entre as cidades


if(area > area2) {
    printf("A CIDADE %s TEM A MAIOR AREA\n" , cidade);
    }
    else {
    printf("A CIDADE %s TEM A MAIOR AREA\n" , cidade2);
    }
    
    if(pib > pib2) {
    printf("A CIDADE %s TEM O MELHOR PIB\n" , cidade);
    }
    else {
    printf("A CIDADE %s TEM O MELHOR PIB\n" , cidade2);
    }
        
    if(populacao > populacao2) {
    printf("A CIDADE %s TEM A MAIOR POPULACAO\n" , cidade);
    }
    else {
    printf("A CIDADE %s TEM A MAIOR POPULACAO\n" , cidade2);
    }
            
    if(pontosturisticos > pontosturisticos2) {
    printf("A CIDADE %s TEM MAIS PONTOS TURISTICOS\n" , cidade);
    }
    else {
    printf("A CIDADE %s TEM MAIS PONTOS TURISTICOS\n" , cidade2);
    }
                
    if(densidade > densidade2) {
    printf("A CIDADE %s TEM A MELHOR DENSIDADE\n" , cidade);
    }
    else {
    printf("A CIDADE %s TEM A MELHOR DENSIDADE\n" , cidade2);
    }
    
    if(pibpercapita > pibpercapita2) {
    printf("A CIDADE %s TEM O MELHOR PIBPERCAPITA \n" , cidade);
    }
    else {
    printf("A CIDADE %s TEM O MELHOR PIBPERCAPITA\n" , cidade2);
    }
                        
                                                                
    
    
  





return 0;


}