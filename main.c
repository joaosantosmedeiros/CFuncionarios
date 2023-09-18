#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"

void tela_menu_principal(void);
void tela_sobre(void);
void tela_equipe(void);

void modulo_departamentos(void);
void buscar_departamento(void);
void cadastrar_departamento(void);
void atualizar_departamento(void);
void deletar_departamento(void);

void modulo_desempenhos(void);
void buscar_desempenho(void);
void cadastrar_desempenho(void);
void atualizar_desempenho(void);
void deletar_desempenho(void);

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
        printf("|||            3. Módulo Desempenho                                         |||\n");
        printf("|||            4. Módulo Relatórios                                         |||\n");
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
            modulo_desempenhos();
            break;
        case '4':
            printf("\nEm desenvolvimento\n");
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


void modulo_departamentos(void) {
    char op;
    do{
        system("clear||cls");
        printf("\n");
        printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
        printf("|||                                                                         |||\n");
        printf("|||            ===================================================          |||\n");
        printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
        printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
        printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
        printf("|||            ===================================================          |||\n");
        printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
        printf("|||                                                                         |||\n");
        printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
        printf("|||                                                                         |||\n");
        printf("|||                          Módulo Departamentos                           |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            1. Buscar Departamento                                       |||\n");
        printf("|||            2. Cadastrar Departamento                                    |||\n");
        printf("|||            3. Atualizar Departamento                                    |||\n");
        printf("|||            4. Deletar Departamento                                      |||\n");
        printf("|||            0. Sair                                                      |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            Escolha a opção desejada: ");
        scanf("%c", &op);
        getchar();
        printf("|||                                                                         |||\n");
        printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
        printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

        switch (op){
        case '1':
            buscar_departamento();
            break;
        case '2':
            cadastrar_departamento();
            break;
        case '3':
            atualizar_departamento();
            break;
        case '4':
            deletar_departamento();
            break;
        default:
            break;
        }
    }while(op != '0');
}


void buscar_departamento(void) {
    int id_departamento;
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Busca de Departamento                           |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                    Digite o ID do departamento: ");
    scanf("%d", &id_departamento);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void cadastrar_departamento(void) {
    char sigla[3], nome[30];
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Cadastro de Departamentos                        |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                    Digite o nome do departamento: ");
    scanf("%s", nome);
    printf("|||                    Digite a sigla do departamento: ");
    scanf("%s", sigla);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_departamento(void) {
    int id_departamento;
    char nome[30], sigla[30];
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Atualização de Departamentos                     |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||             Digite o id do departamento a ser atualizado: ");
    scanf("%d", &id_departamento);
    printf("|||             Digite o novo nome do departamento: ");
    scanf("%s", nome);
    printf("|||             Digite a nova sigla do departamento: ");
    scanf("%s", sigla);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_departamento(void) {
    int id_departamento;
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Remoção de Departamentos                        |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Digite o ID do departamento: ");
    scanf("%d", &id_departamento);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void modulo_desempenhos(void) {
    char op;
    do{
        system("clear||cls");
        printf("\n");
        printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
        printf("|||                                                                         |||\n");
        printf("|||            ===================================================          |||\n");
        printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
        printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
        printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
        printf("|||            ===================================================          |||\n");
        printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
        printf("|||                                                                         |||\n");
        printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
        printf("|||                                                                         |||\n");
        printf("|||                          Módulo Desempenhos                             |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            1. Buscar Desempenho                                         |||\n");
        printf("|||            2. Cadastrar Desempenho                                      |||\n");
        printf("|||            3. Atualizar Desempenho                                      |||\n");
        printf("|||            4. Deletar Desempenho                                        |||\n");
        printf("|||            0. Sair                                                      |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            Escolha a opção desejada: ");
        scanf("%c", &op);
        getchar();
        printf("|||                                                                         |||\n");
        printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
        printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

        switch (op)
        {
        case '1':
            buscar_desempenho();
            break;
        case '2':
            buscar_desempenho();
            break;
        case '3':
            atualizar_desempenho();
            break;
        case '4':
            deletar_departamento();
            break;
        default:
            break;
        }
    }while(op != '0');
}


void buscar_desempenho(void) {
    int id_desempenho;
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Busca de Desempenho                             |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                    Digite o ID do desempenho  : ");
    scanf("%d", &id_desempenho);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void cadastrar_desempenho(void) {
    int id, id_funcionario;
    char nota;
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Cadastro de Desempenhos                          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                    Digite o id do desempenho: ");
    scanf("%d", &id);
    printf("|||                    Digite o id do funcionário: ");
    scanf("%d", &id_funcionario);
    printf("|||                    Digite a nota do funcionário: ");
    scanf("%1s", &nota);
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_desempenho(void) {
    int id, id_funcionario;
    char nota;
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Atualização de Desempenhos                       |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||             Digite o id do desempenho a ser atualizado: ");
    scanf("%d", &id);
    printf("|||             Digite o novo id do funcionário: ");
    scanf("%d", &id_funcionario);
    printf("|||             Digite a nova nota do funcionário: ");
    scanf("%1s", &nota);
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_desempenho(void) {
    int id_desempenho;
    system("clear||cls");
    printf("\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Remoção de Desempenhos                          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Digite o ID do desempenho: ");
    scanf("%d", &id_desempenho);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
