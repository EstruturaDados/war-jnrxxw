
// blibliotecas

#include <stdio.h>
#include <string.h>

// --- Constantes Globais ---

#define MAX_NOME 30
#define MAX_COR 10
#define MAX_TERRITORIOS 5



// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

struct territorio {
    char nome [MAX_NOME];
    char cor [MAX_COR];
    int tropas ;
    };





int main() { 

    struct territorio Campo [MAX_TERRITORIOS];

     for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("==== CADASTRO DO %d TERRITÓRIO ====\n", i + 1);

        // Solicita o nome do território
        printf("- Digite o nome do território: ");
        scanf("%s", Campo[i].nome);  

        // Solicita a cor do exército
        printf("- Digite a cor do exército: ");
        scanf(" %s", Campo[i].cor);  

        // Solicita o número de tropas
        printf("- Digite a quantidade de tropas: ");
        scanf("%d", &Campo[i].tropas);

        printf("\n");

    }


     // exibir as informações de todos os territórios registrados após o cadastro.
     
     printf ("\n   MAPA DO MUNDO   ESTADO ATUAL  \n");
     printf ("\n   ============================  \n");
     printf ("\n");

            for (int i = 0; i < MAX_TERRITORIOS ; i++) {
                printf ("TERRITORIO %d\n", i + 1);
                printf ("\n");
                printf (" - Nome:  %s\n", Campo[i].nome);
                printf (" - Dominado Por : Exercito %s\n", Campo[i].cor);
                printf (" - Tropas:  %d\n", Campo[i].tropas);
                printf ("\n");
                printf ("\n");
                
            }
            printf ("------------------------");







return 0; }


    


     

        

       

    
