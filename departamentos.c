#include <stdio.h>
#include <stdlib.h>
#include "departamentos.h"
#include "helpers.h"
#include <string.h>

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
    char id[10];
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
    le_id(id);
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void cadastrar_departamento(void) {
    char sigla[10], nome[51];
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
    le_nome_dpt(nome);
    printf("|||                                                                         |||\n");
    le_sigla(sigla);
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_departamento(void) {;
    char nome[51], sigla[10], id[10];
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
    le_id(id);
    printf("|||                                                                         |||\n");
    le_nome_dpt(nome);
    printf("|||                                                                         |||\n");
    le_sigla(sigla);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_departamento(void) {
    char id[10];
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
    le_id(id);
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void le_id(char *id){
    printf("|||                    Digite o id do departamento: ");
    fgets(id, 10, stdin);
    while (!valida_id(id)){
        if( strchr(id, '\n') == NULL )
        while (getchar() != '\n')
            continue;
        printf("|||                    Id inválido\n");
        printf("|||                    Digite o id do departamento: ");
        fgets(id, 10, stdin);
    }
    if( strchr(id, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_nome_dpt(char *nome){
    printf("|||                    Digite o nome do departamento: ");
    fgets(nome, 51, stdin);
    while (!valida_nome_dpt(nome)){
        printf("|||                    Caracteres inválidos\n");
        printf("|||                    Informe o nome novamente\n");
        printf("|||                    Digite o nome do departamento: ");
        fgets(nome, 51, stdin);
    }
}
void le_sigla(char *sigla){
    printf("|||                    Digite a sigla do departamento: ");
    fgets(sigla, 51, stdin);

    while(strlen(sigla) != 4){
        printf("|||                    Sigla deve possuir apenas 3 caracteres:\n");
        printf("|||                    Digite a sigla do departamento: ");
        fgets(sigla, 51, stdin);
    }

    if( strchr(sigla, '\n') == NULL )
    while (getchar() != '\n')
        continue;
}