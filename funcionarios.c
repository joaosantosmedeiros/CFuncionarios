#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"
#include "helpers.h"
#include <ctype.h>
#include <string.h>

void modulo_funcionarios(void) {
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
        printf("|||                           Módulo Funcionários                           |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            1. Buscar Funcionário                                        |||\n");
        printf("|||            2. Cadastrar Funcionário                                     |||\n");
        printf("|||            3. Atualizar Funcionário                                     |||\n");
        printf("|||            4. Deletar Funcionário                                       |||\n");
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
        
        switch(op){
            case '0':
                break;
            case '1':
                buscar_funcionario();
                break;
            case '2':
                cadastrar_funcionario();
                break;
            case '3':
                atualizar_funcionario();
                break;
            case '4': 
                deletar_funcionario();
                break;
        }
    }while(op != '0');
}


void buscar_funcionario(void) {
    char cpf[13];
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
    printf("|||                         Busca de Funcionários                           |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    le_cpf(cpf);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void cadastrar_funcionario(void) {
    char cpf[13], nome[51], email[51], senha[30], telefone[30], endereco[51];
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
    printf("|||                        Cadastro de Funcionários                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    le_cpf(cpf);
    printf("|||                                                                         |||\n");
    le_nome(nome);
    printf("|||                                                                         |||\n");
    le_email(email);
    printf("|||                                                                         |||\n");
    le_senha(senha);
    printf("|||                                                                         |||\n");
    le_telefone(telefone);
    printf("|||                                                                         |||\n");
    le_endereco(endereco);
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_funcionario(void) {
    char cpf[13], nome[51], email[51], senha[30], telefone[30], endereco[51];
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
    printf("|||                        Atualização de Funcionários                      |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    le_cpf(cpf);
    printf("|||                                                                         |||\n");
    le_nome(nome);
    printf("|||                                                                         |||\n");
    le_email(email);
    printf("|||                                                                         |||\n");
    le_senha(senha);
    printf("|||                                                                         |||\n");
    le_telefone(telefone);
    printf("|||                                                                         |||\n");
    le_endereco(endereco);
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_funcionario(void) {
    char cpf[13];
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
    printf("|||                         Remoção de Funcionários                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||_________________________________________________________________________|||\n");
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    le_cpf(cpf);
    getchar();
    printf("|||                                                                         |||\n");
    printf("|||                                                                         |||\n");
    printf("|||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|||\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void le_nome(char *nome){
    printf("|||                    Digite o nome do funcionário: ");
    fgets(nome, 51, stdin);
    while (!valida_nome(nome)){
        printf("|||                    Caracteres inválidos\n");
        printf("|||                    Informe o nome novamente\n");
        printf("|||                    Digite o nome do funcionário: ");
        fgets(nome, 51, stdin);
    }
}
void le_cpf(char *cpf){
    printf("|||                    Digite o CPF do funcionário: ");
    fgets(cpf, 20, stdin);
    while (!valida_cpf(cpf)){
        if( strchr(cpf, '\n') == NULL )
        while (getchar() != '\n')
            continue;
        printf("|||                    CPF inválido\n");
        printf("|||                    Digite o CPF do funcionário: ");
        fgets(cpf, 20, stdin);
    }
    if( strchr(cpf, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_email(char *email){
    printf("|||                    Digite o email do funcionário: ");
    fgets(email, 51, stdin);
    while (!valida_email(email)){
        printf("|||                    Email inválido\n");
        printf("|||                    Digite o email do funcionário: ");
        fgets(email, 51, stdin);
    }
    if( strchr(email, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_senha(char *senha){
    char confirm_senha[51];
    printf("|||                    Digite a senha do funcionário: ");
    fgets(senha, 51, stdin);

    while(strlen(senha) < 6){
        printf("|||                    Senha muito curta. Mínimo de 5 caracteres:\n");
        printf("|||                    Digite a senha do funcionário: ");
        fgets(senha, 51, stdin);
    }

    printf("|||                    Digite a senha novamente: ");
    fgets(confirm_senha, 51, stdin);

    while (strncmp(senha, confirm_senha, 51) != 0){
        printf("|||                    As senhas não conferem. Digite novamente: ");
        fgets(confirm_senha, 51, stdin);
    };
    
    if( strchr(senha, '\n') == NULL )
    while (getchar() != '\n')
        continue;
}
void le_telefone(char *telefone){
    printf("|||                    Digite o telefone do funcionário: ");
    fgets(telefone, 22, stdin);
    while (!valida_telefone(telefone)){
        if( strchr(telefone, '\n') == NULL )
        while (getchar() != '\n')
            continue;
        printf("|||                    Telefone inválido\n");
        printf("|||                    Digite o telefone do funcionário: ");
        fgets(telefone, 22, stdin);
    }
    if( strchr(telefone, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_endereco(char *endereco){
    printf("|||                    Digite o endereço do funcionário: ");
    fgets(endereco, 51, stdin);

    while(strlen(endereco) < 6){
        printf("|||                    Endereço muito curto. Mínimo de 5 caracteres:\n");
        printf("|||                    Digite o endereço do funcionário: ");
        fgets(endereco, 51, stdin);
    }

    if( strchr(endereco, '\n') == NULL )
    while (getchar() != '\n')
        continue;
}
