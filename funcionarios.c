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
    Funcionario* func;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Busca de Funcionários                           |||\n\n");
    le_cpf(cpf);
    getchar();
    func = buscaFuncionario(cpf);
    exibeFuncionario(func);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void cadastrar_funcionario(void) {
    Funcionario* func;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Cadastro de Funcionários                         |||\n\n");
    func = preencheFuncionario();
    gravaFuncionario(func);
    free(func);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_funcionario(void) {
    char cpf[13], nome[51], email[51], senha[30], telefone[30], endereco[51];
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Atualização de Funcionários                      |||\n\n");
    le_cpf(cpf);
    printf("\n");
    le_nome(nome);
    printf("\n");
    le_email(email);
    printf("\n");
    le_senha(senha);
    printf("\n");
    le_telefone(telefone);
    printf("\n");
    le_endereco(endereco);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_funcionario(void) {
    char cpf[13];
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Remoção de Funcionários                         |||\n\n");
    le_cpf(cpf);
    getchar();
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void le_nome(char *nome){
    printf("Digite o nome do funcionário: ");
    fgets(nome, 51, stdin);
    while (!valida_nome(nome)){
        printf("Caracteres inválidos\n");
        printf("Informe o nome novamente\n");
        printf("Digite o nome do funcionário: ");
        fgets(nome, 51, stdin);
    }
}
void le_cpf(char *cpf){
    printf("Digite o CPF do funcionário: ");
    fgets(cpf, 20, stdin);
    while (!valida_cpf(cpf)){
        if( strchr(cpf, '\n') == NULL )
        while (getchar() != '\n')
            continue;
        printf("CPF inválido\n");
        printf("Digite o CPF do funcionário: ");
        fgets(cpf, 20, stdin);
    }
    if( strchr(cpf, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_email(char *email){
    printf("Digite o email do funcionário: ");
    fgets(email, 51, stdin);
    while (!valida_email(email)){
        printf("Email inválido\n");
        printf("Digite o email do funcionário: ");
        fgets(email, 51, stdin);
    }
    if( strchr(email, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_senha(char *senha){
    char confirm_senha[51];
    printf("Digite a senha do funcionário: ");
    fgets(senha, 51, stdin);

    while(strlen(senha) < 6){
        printf("Senha muito curta. Mínimo de 5 caracteres:\n");
        printf("Digite a senha do funcionário: ");
        fgets(senha, 51, stdin);
    }

    printf("Digite a senha novamente: ");
    fgets(confirm_senha, 51, stdin);

    while (strncmp(senha, confirm_senha, 51) != 0){
        printf("As senhas não conferem. Digite novamente: ");
        fgets(confirm_senha, 51, stdin);
    };
    
    if( strchr(senha, '\n') == NULL )
    while (getchar() != '\n')
        continue;
}
void le_telefone(char *telefone){
    printf("Digite o telefone do funcionário: ");
    fgets(telefone, 22, stdin);
    while (!valida_telefone(telefone)){
        if( strchr(telefone, '\n') == NULL )
        while (getchar() != '\n')
            continue;
        printf("Telefone inválido\n");
        printf("Digite o telefone do funcionário: ");
        fgets(telefone, 22, stdin);
    }
    if( strchr(telefone, '\n') == NULL )
        while (getchar() != '\n')
            continue;
}
void le_endereco(char *endereco){
    printf("Digite o endereço do funcionário: ");
    fgets(endereco, 51, stdin);

    while(strlen(endereco) < 6){
        printf("Endereço muito curto. Mínimo de 5 caracteres:\n");
        printf("Digite o endereço do funcionário: ");
        fgets(endereco, 51, stdin);
    }

    if( strchr(endereco, '\n') == NULL )
    while (getchar() != '\n')
        continue;
}


Funcionario* preencheFuncionario(void) {
    Funcionario* func;
    func = (Funcionario*) malloc(sizeof(Funcionario));
    le_cpf(func->cpf);
    printf("\n");
    le_nome(func->nome);
    printf("\n");
    le_email(func->email);
    printf("\n");
    le_senha(func->senha);
    printf("\n");
    le_telefone(func->telefone);
    printf("\n");
    le_endereco(func->endereco);
    
    size_t len = strlen(func->cpf);
    if (len > 0 && func->cpf[len - 1] == '\n') {
        func->cpf[len - 1] = '\0';
    }
    len = strlen(func->nome);
    if (len > 0 && func->nome[len - 1] == '\n') {
        func->nome[len - 1] = '\0';
    }
    len = strlen(func->email);
    if (len > 0 && func->email[len - 1] == '\n') {
        func->email[len - 1] = '\0';
    }
    len = strlen(func->senha);
    if (len > 0 && func->senha[len - 1] == '\n') {
        func->senha[len - 1] = '\0';
    }
    len = strlen(func->telefone);
    if (len > 0 && func->telefone[len - 1] == '\n') {
        func->telefone[len - 1] = '\0';
    }
    len = strlen(func->endereco);
    if (len > 0 && func->endereco[len - 1] == '\n') {
        func->endereco[len - 1] = '\0';
    }

    return func;
}

void gravaFuncionario(Funcionario* func) {
  FILE* fp;
  fp = fopen("funcionarios.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  if(buscaFuncionario(func->cpf) != NULL){
    printf("Erro! CPF já cadastrado!\n");
  }else{
    fwrite(func, sizeof(Funcionario), 1, fp);
  }
  fclose(fp);
}

Funcionario* buscaFuncionario(char* cpf) {
  size_t len = strlen(cpf);
  if (len > 0 && cpf[len - 1] == '\n') {
    cpf[len - 1] = '\0';
  }
  FILE* fp;
  Funcionario* func;
  func = (Funcionario*) malloc(sizeof(Funcionario));
  fp = fopen("funcionarios.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(func, sizeof(Funcionario), 1, fp);
    if (strcmp(func->cpf, cpf) == 0) {
      fclose(fp);
      return func;
    }
  }
  fclose(fp);
  return NULL;
}

void exibeFuncionario(Funcionario* func) {
  if (func == NULL) {
    printf("= = = Funcionario Inexistente = = =\n");
  } else {
    printf("= = = Funcionario Cadastrado = = =\n");
    printf("CPF: %s\n", func->cpf);
    printf("Nome: %s\n", func->nome);
    printf("Email: %s\n", func->email);
    printf("Telefone: %s\n", func->telefone);
    printf("Endereço: %s\n", func->endereco);
  }
}
