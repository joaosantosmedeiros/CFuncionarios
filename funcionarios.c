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
    printf("|||                        Atualização de Funcionários                      |||\n\n");
    func = preencheFuncionario();
    atualizaFuncionario(func);
    free(func);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_funcionario(void) {
    Funcionario* func;
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
    func = buscaFuncionario(cpf);
    excluiFuncionario(func);
    free(func);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void lista_funcionarios(void) {
  FILE* fp;
  Funcionario* func;
  printf("\n = Lista de Funcionários = \n"); 
  func = (Funcionario*) malloc(sizeof(Funcionario));
  fp = fopen("funcionarios.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(func, sizeof(Funcionario), 1, fp)) {
    if (func->status == 1) {
      exibeFuncionario(func);
    }
  }
  fclose(fp);
  free(func);
  getchar();
}
void lista_funcionarios_inativos(void) {
  FILE* fp;
  Funcionario* func;
  printf("\n = Lista de Funcionários Inativos = \n"); 
  func = (Funcionario*) malloc(sizeof(Funcionario));
  fp = fopen("funcionarios.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(func, sizeof(Funcionario), 1, fp)) {
    if (func->status == 0) {
      exibeFuncionarioInativo(func);
    }
  }
  fclose(fp);
  free(func);
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
    func->status = 1;
    
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
    if (strcmp(func->cpf, cpf) == 0 && func->status == 1) {
      fclose(fp);
      return func;
    }
  }
  fclose(fp);
  return NULL;
}

void exibeFuncionario(Funcionario* func) {
  if (func == NULL || func->status == 0) {
    printf("= = = Funcionario Inexistente = = =\n");
  } else {
    printf("= = = Funcionario Cadastrado = = =\n");
    printf("CPF: %s\n", func->cpf);
    printf("Nome: %s\n", func->nome);
    printf("Email: %s\n", func->email);
    printf("Telefone: %s\n", func->telefone);
    printf("Endereço: %s\n", func->endereco);
    printf("Status: %d\n", func->status);
  }
}
void exibeFuncionarioInativo(Funcionario* func) {
  if (func == NULL) {
    printf("= = = Funcionario Inexistente = = =\n");
  } else {
    printf("= = = Funcionario Inativo = = =\n");
    printf("CPF: %s\n", func->cpf);
    printf("Nome: %s\n", func->nome);
    printf("Email: %s\n", func->email);
    printf("Telefone: %s\n", func->telefone);
    printf("Endereço: %s\n", func->endereco);
    printf("Status: %d\n", func->status);
  }
}


void excluiFuncionario(Funcionario* funcLido) {
  FILE* fp;
  Funcionario* funcArq;
  int achou = 0;
  if (funcLido == NULL) {
    printf("Ops! O funcionário informado não existe!\n");
  }
  else {
    funcArq = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(funcArq, sizeof(Funcionario), 1, fp);
      if ((strcmp(funcArq->cpf,funcLido->cpf) == 0) && (funcArq->status == 1)) {
        achou = 1;
        funcArq->status = 0;
        fseek(fp, -1*sizeof(Funcionario), SEEK_CUR);
        fwrite(funcArq, sizeof(Funcionario), 1, fp);
        printf("\nFuncionario excluído com sucesso!!!\n");
      }
    }
    if (!achou) {
      printf("\nFuncionario não encontrado!\n");
    }
    fclose(fp);
    free(funcArq);
  }
}

void atualizaFuncionario(Funcionario* func) {
    FILE* fp;
    Funcionario* funcArq;
    int achou = 0;
    if (func == NULL) {
        printf("Ops! O funcionário informado não existe!\n");
    } else {
        funcArq = (Funcionario*) malloc(sizeof(Funcionario));
        fp = fopen("funcionarios.dat", "r+b");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
        while(!feof(fp)) {
            fread(funcArq, sizeof(Funcionario), 1, fp);
            if ((strcmp(funcArq->cpf, func->cpf) == 0) && (funcArq->status == 1)) {
                achou = 1;
                strcpy(funcArq->nome, func->nome);
                strcpy(funcArq->email, func->email);
                strcpy(funcArq->senha, func->senha);
                strcpy(funcArq->telefone, func->telefone);
                strcpy(funcArq->endereco, func->endereco);
                fseek(fp, -1*sizeof(Funcionario), SEEK_CUR);
                fwrite(funcArq, sizeof(Funcionario), 1, fp);
                printf("\nFuncionário atualizado com sucesso!\n");
                break;
            }
        }
        if (!achou) {
            printf("\nFuncionário não encontrado!\n");
        }
        fclose(fp);
        free(funcArq);
    }
}

void lista_funcionarios_ordenados(void){
    system("clear||cls");
    FILE* file;
    Funcionario* novofun;  
    Funcionario* lista;  


    file = fopen("funcionarios.dat", "rb"); 
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);  
    }

    printf("\n = Lista de Funcionários Ordenados = \n"); 

    lista = NULL; 
    novofun = (Funcionario*)malloc(sizeof(Funcionario));

    if (novofun == NULL) {  
        printf("Erro de alocação de memória\n");
        exit(1); 
      }

    while (fread(novofun, sizeof(Funcionario), 1, file) == 1) {  
      novofun->prox = NULL;  

      if ((lista == NULL) || (strcmp(novofun->nome, lista->nome) < 0)) {  
          novofun->prox = lista;  
          lista = novofun;  
      } else {  
          Funcionario* ant = lista;  
          Funcionario* atual = lista->prox;
          while ((atual != NULL) && strcmp(atual->nome, novofun->nome) < 0) {   
              ant = atual;  
              atual = atual->prox; 
          }
          ant->prox = novofun;  
          novofun->prox = atual; 
      }

      novofun = (Funcionario*)malloc(sizeof(Funcionario));
      if (novofun == NULL) {
          printf("Erro de alocação de memória\n");
          exit(1);
      }
    }

    fclose(file);

    novofun = lista; 
    while (novofun != NULL) {
        if(novofun->status == 1){
            exibeFuncionario(novofun);
        } else{
            exibeFuncionarioInativo(novofun);
        }
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\n");
        novofun = novofun->prox;  
    }

    novofun = lista;  
    while (lista != NULL) {
        lista = lista->prox;  
        free(novofun); 
        novofun = lista; 
    }

    getchar();
} 