#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"
#include "departamentos.h"
#include "projetos.h"
#include "relatorios.h"

void tela_menu_principal(void);
void tela_sobre(void);
void tela_equipe(void);

// Programa principal
int main(void) {
    tela_menu_principal();
    return 0;
}


// Funções
void tela_menu_principal(void) {
    char op;
    do{
        system("clear||cls");
        printf("\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("|||                                                                         |||\n");
        printf("|||             Universidade Federal do Rio Grande do Norte                 |||\n");
        printf("|||                 Centro de Ensino Superior do Seridó                     |||\n");
        printf("|||               Departamento de Computação e Tecnologia                   |||\n");
        printf("|||                  Disciplina DCT1106 -- Programação                      |||\n");
        printf("|||                  Projeto Sistema de Gestão de Funcionários              |||\n");
        printf("|||             Developed by @joaosantosmedeiros -- since Ago, 2023         |||\n");
        printf("|||                                                                         |||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("|||                                                                         |||\n");
        printf("|||            = = = = = Sistema de Gestão de Funcionários = = = = =        |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            1. Módulo Funcionários                                       |||\n");
        printf("|||            2. Módulo Departamento                                       |||\n");
        printf("|||            3. Módulo Projetos                                           |||\n");
        printf("|||            4. Relatórios                                                |||\n");
        printf("|||            5. Sobre                                                     |||\n");
        printf("|||            0. Sair                                                      |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            Escolha a opção desejada: ");
        scanf("%c", &op);
        getchar();
        printf("|||                                                                         |||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

        switch (op)
        {
        case '0': 
            break;
        case '1':
            modulo_funcionarios();
            break;
        case '2':
            modulo_departamentos();
            break;
        case '3':
            modulo_projetos();
            break;
        case '4':
            modulo_relatorios();
            break;
        case '5':
            tela_sobre();
            break;
        default:
            printf("\nOpção inválida!\n");
            printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
            break;
        }
    }while(op != '0');
}


void tela_sobre(void) {
    char op;
    do{
        system("clear||cls");
        printf("\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("|||                                                                         |||\n");
        printf("|||             Universidade Federal do Rio Grande do Norte                 |||\n");
        printf("|||                 Centro de Ensino Superior do Seridó                     |||\n");
        printf("|||               Departamento de Computação e Tecnologia                   |||\n");
        printf("|||                  Disciplina DCT1106 -- Programação                      |||\n");
        printf("|||                  Projeto Sistema de Gestão de Funcionários              |||\n");
        printf("|||             Developed by @joaosantosmedeiros -- since Ago, 2023         |||\n");
        printf("|||                                                                         |||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("|||                                                                         |||\n");
        printf("|||            = = = = = Sistema de Gestão de Funcionários = = = = =        |||\n");
        printf("|||                                                                         |||\n");
        printf("|||  Programa utilizado na disciplina DCT1106 - Programação. O programa con-|||\n");
        printf("|||  tém os principais módulos utilizados para um Sistema de Gestão de Func-|||\n");
        printf("|||  ionários.                                                              |||\n");
        printf("|||                                                                         |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            0. Sair                                                      |||\n");
        printf("|||            1. Equipe                                                    |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            Escolha a opção desejada: ");
        scanf("%c", &op);
        printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

        if(op == '0'){
            break;
            tela_menu_principal();
        }
        else if(op == '1'){
            tela_equipe();
            break;
        }
        else{
            printf("Opção inválida!");
        }
    }while(op != '0');
}


void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("|||                                                                         |||\n");
    printf("|||             Universidade Federal do Rio Grande do Norte                 |||\n");
    printf("|||                 Centro de Ensino Superior do Seridó                     |||\n");
    printf("|||               Departamento de Computação e Tecnologia                   |||\n");
    printf("|||                  Disciplina DCT1106 -- Programação                      |||\n");
    printf("|||                  Projeto Sistema de Gestão de Funcionários              |||\n");
    printf("|||             Developed by @joaosantosmedeiros -- since Ago, 2023         |||\n");
    printf("|||                                                                         |||\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("|||                                                                         |||\n");
    printf("|||            = = = = = Sistema de Gestão de Funcionários = = = = =        |||\n");
    printf("|||                                                                         |||\n");
    printf("|||            Este projeto exemplo foi desenvolvido por:                   |||\n");
    printf("|||                                                                         |||\n");
    printf("|||            João Pedro dos Santos Medeiros                               |||\n");
    printf("|||            E-mail: jopesame@gmail.com                                   |||\n");
    printf("|||            Instagram: @joaopedro.santosm                               |||\n");
    printf("|||            Git: https://github.com/joaosantosmedeiros/CFuncionarios.git |||\n");
    printf("|||                                                                         |||\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    tela_sobre();
} 
