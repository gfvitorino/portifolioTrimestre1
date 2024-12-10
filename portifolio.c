#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    char nomeAnimal[30];
    int quantidadeAnimais;
    float consumoDiario;
    float precoQuilo;
    float consumoMensal;
    float custoMensal;
    
    setlocale(LC_ALL,"portuguese");
    
    printf("Digite o nome do animal: ");
    gets(nomeAnimal);
    
    printf("Quanto(s) %s(s) existem no zoológico? ",nomeAnimal);
    scanf("%d",&quantidadeAnimais);
    
    printf("Quantos kg de ração o(s) %s(s) consomem por dia (Kg)? ",nomeAnimal);
    scanf("%f",&consumoDiario);
    
    printf("Quanto custa o Kg de ração para %s? ",nomeAnimal);
    scanf("%f",&precoQuilo);
    
    consumoMensal = (consumoDiario * quantidadeAnimais) * 30;
    custoMensal = consumoMensal * precoQuilo;
    
    printf("\n\nAnimal: %s\nConsumo Mensal (Kg): %.2f\nCusto Mensal: %.2f\n",nomeAnimal,consumoMensal,custoMensal);
    
    system("pause");
    return 0;
        
}
