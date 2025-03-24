#include<stdio.h>

/*Se a cidade escolhida tiver o nome composto,digite o nome dela sem espaços.
Exmplo:RioDeJaneiro
*/


int main(){
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;  //Definição das variaveis de propriedade das cartas
    float pib, area, densidade, pibPer, pib2, area2, densidade2, pibPer2, superPoder, superPoder2;
    char estado2[2], codigo[3], cidade[40], estado3[2], codigo2[3], cidade2[40];

    printf("Digite a seguir os dados da primera carta:\n"); //Inicio da coleta dos dados da primeira carta.
    
    printf("Digite a inicial do estado:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n"); 
    scanf("%s", &cidade);
    
    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

//Calculo para definição dos valores das propriedades de densidade populacional,Pib per Capiata e Super Poder da primeira carta.

    densidade = (float)(populacao / area); 
    pibPer = (populacao / pib);
    superPoder= (float)(populacao + area + pib + pontosTuristicos);
    
    printf("Inicial do estado: %s\n", estado2); //Impressão dos dados coletados da primeira carta
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade );
    printf("População: %d\n", populacao);
    printf("Àrea: %.4f km²\n", area);
    printf("Pib: %.3f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.3f\n", densidade);
    printf("Pib per capita: %.2f\n", pibPer);
    printf("Super Poder: %.2f\n", superPoder);



    printf("Digite a seguir os dados da segunda carta:\n"); //Inicio da coleta dos dados da segunda carta.
    
    printf("Digite a inicial do estado:\n");
    scanf("%s", &estado3);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n"); 
    scanf("%s", &cidade2);
    
    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

//Calculo para definição dos valores das propriedades de densidade populacional,Pib per Capiata e Super Poder da segunda carta.

    densidade2 = (float)(populacao2 / area2);
    pibPer2 = (float)(populacao2 / pib2);
    superPoder2 = (float)(populacao2 + area2 + pib2 + pontosTuristicos2);
    
    printf("Inicial do estado: %s\n", estado3); //Impressão dos dados coletados da segunda carta.
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2 );
    printf("População: %d\n", populacao2);
    printf("Àrea: %.4f km²\n", area2);
    printf("Pib: %.3f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.3f\n", densidade2);
    printf("Pib per capita: %.2f\n", pibPer2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("Comparativo entre as duas Cartas:\n"); // Comparação para definir qual das duas cartas é a vencedora.

    printf("Primeira carta: 1\n");  //Representação para saber qual das cartas foi a vencedora.
    printf("Segunda carta: 0\n");

    printf("População: %d\n", populacao > populacao2); //Logica comparativa para saber qual das propriedades leva a melhor.
    printf("Área: %d\n", area > area2);
    printf("Pib: %d\n", pib > pib2);
    printf("Numero de pontos túristicos: %d\n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade populacional: %d\n", densidade <= densidade2); //* unica das comparações onde qual densidade demografica for menor,ganha.
    printf("Pib per Capita: %d\n", pibPer > pibPer2);
    printf("Super Poder: %d\n", superPoder > superPoder2);
    
    }