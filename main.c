///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///             Developed by @joaosantosmedeiros -- since Ago, 2023         ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 0                                 ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void tela_menu_principal(void);
void tela_sobre();
void tela_equipe();


// Programa principal
int main(void) {
    tela_menu_principal();
    tela_sobre();
    tela_equipe();
    return 0;
}


// Funções
void tela_menu_principal(void) {
    char op;
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
    printf("|||            3. Módulo Desempenho                                         |||\n");
    printf("|||            4. Módulo Relatórios                                         |||\n");
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
}


void tela_sobre(void) {
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
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("|||            Redes sociais: @joaosantosmedeiros                           |||\n");
    printf("|||            Git: https://github.com/joaosantosmedeiros/CFuncionarios.git |||\n");
    printf("|||                                                                         |||\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 