#include<stdio.h>

/*Se a cidade escolhida tiver o nome composto,digite o nome dela sem espaços.
Exmplo:RioDeJaneiro
*/


int main(){
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2, opcao, opcao2;
    float pib, area, densidade, pibPer, pib2, area2, densidade2, pibPer2, superPoder, superPoder2, cidadeVencedora, cidadeVencedora2;
    char estado2[2], codigo[3], cidade[40], estado3[2], codigo2[3], cidade2[40] ;
    printf("Bem vindo ao jogo de cartas Super-Trunfo!!\n");

    printf("Digite a seguir os dados da primera carta:\n");
    
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

    densidade = (float)(populacao / area);
    pibPer = (populacao / pib);
    superPoder= (float)(populacao + area + pib + pontosTuristicos);
    
    printf("Inicial do estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade );
    printf("População: %d\n", populacao);
    printf("Àrea: %.4f km²\n", area);
    printf("Pib: %.3f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.3f\n", densidade);
    printf("Pib per capita: %.2f\n", pibPer);
    printf("Super Poder: %.2f\n", superPoder);



    printf("Digite a seguir os dados da segunda carta:\n");
    
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

    densidade2 = (float)(populacao2 / area2);
    pibPer2 = (float)(populacao2 / pib2);
    superPoder2 = (float)(populacao2 + area2 + pib2 + pontosTuristicos2);
    
    printf("Inicial do estado: %s\n", estado3);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2 );
    printf("População: %d\n", populacao2);
    printf("Àrea: %.3f km²\n", area2);
    printf("Pib: %.3f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.4f\n", densidade2);
    printf("Pib per capita: %.3f\n", pibPer2);
    printf("Super Poder: %.3f\n", superPoder2);

    printf("***************************\n");
    printf("1° comparativo entre as duas cartas:\n");
    printf("Escolha uma das opções:\n");
    
    printf("1.Tamanho de População\n");
    printf("2.Tamanho de área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB Per Capita\n");
    printf("7.Super Poder\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
    printf("Tamanho de População:\n");
    printf("%s: %d - ", cidade, populacao);
    printf("%s: %d\n", cidade2, populacao2);
    cidadeVencedora = populacao > populacao2 ? 1 : 0;
        break;
    case 2:
    printf("Tamanho de Área:\n");
    printf("%s: %.3f - ", cidade, area);
    printf("%s: %.3f\n", cidade2, area2);
    cidadeVencedora = area > area2 ? 1 : 0;
        break;
    case 3:
    printf("PIB:\n");
    printf("%s: %.3f - ", cidade, pib);
    printf("%s: %.3f\n", cidade2, pib2);
    cidadeVencedora = pib > pib2 ? 1 : 0;
        break;
    case 4:
    printf("Número de pontos túristicos:\n");
    printf("%s: %d - ", cidade, pontosTuristicos);
    printf("%s: %d\n", cidade2, pontosTuristicos2);
    
    cidadeVencedora = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
    printf("Desidade populacional:\n");
    printf("%s: %.4f - ", cidade, densidade);
    printf("%s: %.4f\n", cidade2, densidade2);
    cidadeVencedora = densidade < densidade2 ? 1 : 0;
        break;
    case 6:
    printf("PIB per Capita:\n");
    printf("%s: %.3f - ", cidade, pibPer);
    printf("%s: %.3f\n", cidade2, pibPer2);
    cidadeVencedora = pibPer > pibPer2 ? 1 : 0;
        break;
    case 7:
    printf("Super Poder:\n");
    printf("%s: %.3f - ", cidade, superPoder);
    printf("%s: %.3f\n", cidade2, superPoder2);
    cidadeVencedora = superPoder > superPoder2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    
    printf("***************************\n");
    printf("2° comparativo entre as duas cartas:\n");
    printf("Escolha uma das opções:\n");
    
    printf("1.Tamanho de População\n");
    printf("2.Tamanho de área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB Per Capita\n");
    printf("7.Super Poder\n");
    scanf("%d", &opcao2);

    if(opcao == opcao2){
        printf("Você escolheu a mesma opção\n");
    
    }else{
    
    switch (opcao2){
    case 1:
    printf("Tamanho de População:\n");
    printf("%s: %d - ", cidade, populacao);
    printf("%s: %d\n", cidade2, populacao2);
    cidadeVencedora2 = populacao > populacao2 ? 1 : 0;
        break;
    case 2:
    printf("Tamanho de Área:\n");
    printf("%s: %.3f - ", cidade, area);
    printf("%s: %.3f\n", cidade2, area2);
    cidadeVencedora2 = area > area2 ? 1 : 0;
        break;
    case 3:
    printf("PIB:\n");
    printf("%s: %.3f - ", cidade, pib);
    printf("%s: %.3f\n", cidade2, pib2);
    cidadeVencedora2 = pib > pib2 ? 1 : 0;
        break;
    case 4:
    printf("Número de pontos túristicos:\n");
    printf("%s: %d - ", cidade, pontosTuristicos);
    printf("%s: %d\n", cidade2, pontosTuristicos2);
    cidadeVencedora2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
    printf("Desidade populacional:\n");
    printf("%s: %.4f - ", cidade, densidade);
    printf("%s: %.4f\n", cidade2, densidade2);
    cidadeVencedora2 = densidade < densidade2 ? 1 : 0;
        break;
    case 6:
    printf("PIB per Capita:\n");
    printf("%s: %.3f - ", cidade, pibPer);
    printf("%s: %.3f\n", cidade2, pibPer2);
    cidadeVencedora2 = pibPer > pibPer2 ? 1 : 0;
        break;
    case 7:
    printf("Super Poder:\n");
    printf("%s: %.3f - ", cidade, superPoder);
    printf("%s: %.3f\n", cidade2, superPoder2);
    cidadeVencedora2 = superPoder > superPoder2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }



    if(cidadeVencedora && cidadeVencedora2 ){
        printf("Cidade vencedora :%s\n", cidade);}
     else if(cidadeVencedora != cidadeVencedora2){
        printf("Empate \n");
     }else {
        printf("Cidade vencedora: %s\n", cidade2);
      }
    
    
}
}