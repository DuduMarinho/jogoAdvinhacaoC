
//Jogo de adivinhação em C para aprimorar o conhecimento na linguagem

#include <stdio.h>

//Abaixo fiz uma "interface" mais amigável para o usuário

    int main() {

        printf("*************************************************** \n");
        printf("* Ola, seja bem vindo ao meu jogo de adivinhacao! * \n");
        printf("*************************************************** \n");

//Declaração das variáveis que serão usadas no progama

        int numSecreto = 42;
        int chute;

//Vale ressaltar que o sinal de = é usado para atribuição de valor, nesse caso vamos fazer uma comparação, então usamos ==


/* Aqui ficarão as entradas do usuário, o scanf é usado para recolher uma resposta 
O & é usado para alocar a resposta do scanf para algum lugar na memória, ou seja, em alguma variável
 O %d indica que o programa espera receber um numero do tipo inteiro */

        printf("Qual seu chute? ");
        scanf("%d", &chute);

/*Agora vou atribuir uma condição para aparecer uma mensagem de acerto ou de erro, ou seja,
se o usuário acertar o numero secreto, aparecerá uma mensagem de acerto, e se errar... enfim, é esse conceito*/ 

 //Declaração das variáveis pós entrada do usuário
   
    int acertou = chute == numSecreto;   
    int maior = chute > numSecreto;
    int menor = chute < numSecreto;


 //O sinal de = é usado para atribuição de valor, nesse caso vamos fazer uma comparação, então usamos ==       
        
        if (acertou) {
        printf("Você acertou!! \n");
        }
        else //nesse caso, se a condição do if for falsa, vou usar o else(então) para atribuir outra função ao código
        {
            if (maior) // Agora vou criar uma condição dentro do else para quando o usuário errar, então darei uma dica à ele, caso o chute for maior q o esperado, essa função será chamada
            {
                printf("Seu chute foi maior do que o número secreto \n");
                printf("Você errou!!\n");
            }
            if (menor) // Se o chute for menor, essa aqui será chamada
            {
                printf("Seu chute foi menor do que o número secreto \n");
                printf("Você errou!!\n");
            }
                            
    }
            
        return 0; 
    }

