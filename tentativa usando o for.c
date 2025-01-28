#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <string.h>

/*
No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

🚩 Objetivo:
Criar cartas representando cidades, contendo as seguintes propriedades:
População
Área
PIB
Número de pontos turísticos
⚙️ Funcionalidades do Sistema:
O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.
📥 Entrada e 📤 Saída de Dados:
O usuário insere os dados de cada carta interativamente.
Após o cadastro, os dados são exibidos com todas as propriedades da cidade, uma por linha.

Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, PIB, área, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

cada paise tem 8 estados a,b,c,d,e,f,g,h

cada estado tem 4 cidades 



fflush(stdin);*/

struct  c_cidade
{
    int Cidade;
    char Nome[50];
    int Populacao;
    float PIB;
    float Area;
    int Nu_pont_turs;
};

typedef struct c_cidade c_cidade;


int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
c_cidade  cidade[4];
int i, j; 
char pais[50];

for (i = 0; i<=8; i++)
{
    printf("Digite o nome do Pais:(%d)\n", i+1);
    scanf("%50[^\n", &pais);
 for(j=0;j<=3;j++)
    {
        puts("Numero da Cidade:\n");
        scanf("%50[^\n]s", &cidade[j].Cidade);
        fflush(stdin);

        puts("Nome: ");
        scanf("%50[^\n]s", &cidade[j].Nome);
        fflush(stdin);

        puts("População:");
        scanf("%d", &cidade[j].Populacao);
        fflush(stdin);

        puts("Pib:");
        scanf("%f", &cidade[j].PIB);
        fflush(stdin);

        puts("Área:");
        scanf("%f", &cidade[j].Area);
        fflush(stdin);

        puts("Numeros de Pontos Turisticos");
        scanf("%d", &cidade[j].Nu_pont_turs);
        fflush(stdin);
    }
system("cls");
}

    

puts("Cartas de Cidade: \n");
for (i = 0; i<=7; i++){
    printf("Pais (%d) %s", i+1, pais);
    for(j=0; j<3; j++)
    {
    printf("\n");
    printf("\tNumero da Cidade: %d\n", cidade[j].Cidade);
    printf("\tNome: %s\n", cidade[j].Nome);
    printf("\tPopulação: %d\n", cidade[j].Populacao);
    printf("\tPib: %.2f\n", cidade[j].PIB);
    printf("\tÁrea: %.2f\n", cidade[j].Area);
    printf("\tPontos Turisticos: %d\n", cidade[j].Nu_pont_turs);
    }
}



system("pause");
return 0;
}