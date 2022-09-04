#include <stdio.h>
#include "moduloRelatorio.h"
#include "funcaoAux.c"

void moduloRelatorio(void) {

    char esc = verMenuRelatorio();

    while (esc!='0'){

        if (esc=='1'){
            printf("Relatório Boné\n");

        }

        else if (esc=='2'){
            printf("Relatório Fornecedor\n");

        }

        else if (esc=='3'){
            printf("Relatório cliente\n");

        }

        else{
            printf("Opção inválida!\n");
        
        }

        passarEnter();

        esc = verMenuRelatorio();
    }

}

char verMenuRelatorio(void) {
    system ( " clear||cls " );
    printf("\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===              = = = = = Menu Relatórios = = = = =                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                 1. Relatório Boné                                       ===\n");
    printf("===                 2. Relatório Fornecedor                                 ===\n");
    printf("===                 3. Relatório cliente                                    ===\n");
    printf("===                 0. Voltar ao menu principal                             ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");

    printf("Selecione sua opção:");
    char esc;
    scanf("%c" , &esc);
    getchar();

    return esc;

}