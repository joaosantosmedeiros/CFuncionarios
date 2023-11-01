#include <stdio.h>
#include <stdlib.h>
#include "departamentos.h"
#include "helpers.h"
#include <string.h>
#include <time.h>

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
    char sigla[10];
    Departamento* dept;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Busca de Departamento                           |||\n\n");
    le_sigla(sigla);
    getchar();
    dept = buscaDepartamento(sigla);
    exibeDepartamento(dept);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void cadastrar_departamento(void) {
    Departamento* dept;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Cadastro de Departamentos                        |||\n");
    dept = preencheDepartamento();
    gravaDepartamento(dept);
    free(dept);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_departamento(void) {;
    char nome[51], sigla[10];
    int id;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Atualização de Departamentos                     |||\n\n");
    printf("Digite o id do departamento: ");
    scanf("%d", &id);
    getchar();
    le_nome_dpt(nome);
    printf("\n");
    le_sigla(sigla);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_departamento(void) {
    Departamento* dept;
    int id;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Remoção de Departamentos                        |||\n\n");
    printf("Digite o id do departamento: ");
    scanf("%d", &id);
    getchar();
    dept = buscaDepartamentoPorId(id);
    excluiDepartamento(dept);
    free(dept);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void le_nome_dpt(char *nome){
    printf("\nDigite o nome do departamento: ");
    fgets(nome, 51, stdin);
    while (!valida_nome_dpt(nome)){
        printf("Caracteres inválidos\n");
        printf("Informe o nome novamente\n");
        printf("Digite o nome do departamento: ");
        fgets(nome, 51, stdin);
    }
}
void le_sigla(char *sigla){
    printf("Digite a sigla do departamento: ");
    fgets(sigla, 51, stdin);

    while(strlen(sigla) != 4){
        printf("Sigla deve possuir apenas 3 caracteres:\n");
        printf("Digite a sigla do departamento: ");
        fgets(sigla, 51, stdin);
    }

    if( strchr(sigla, '\n') == NULL )
    while (getchar() != '\n')
        continue;
}



Departamento* preencheDepartamento(void) {
    Departamento* dept;
    dept = (Departamento*) malloc(sizeof(Departamento));
    le_nome_dpt(dept->nome);
    printf("\n");
    le_sigla(dept->sigla);
    dept->status = 1;
    
    size_t len = strlen(dept->nome);
    if (len > 0 && dept->nome[len - 1] == '\n') {
        dept->nome[len - 1] = '\0';
    }
    len = strlen(dept->sigla);
    if (len > 0 && dept->sigla[len - 1] == '\n') {
        dept->sigla[len - 1] = '\0';
    }
    
    unsigned int semente = (unsigned int)time(NULL);
    srand(semente);
    dept->id = rand();

    return dept;
}

void gravaDepartamento(Departamento* dept) {
  FILE* fp;
  fp = fopen("departamentos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  if(buscaDepartamento(dept->sigla  ) != NULL){
    printf("Erro! Sigla já cadastrada!\n");
  }else{
    fwrite(dept, sizeof(Departamento), 1, fp);
  }
  fclose(fp);
}

Departamento* buscaDepartamento(char* sigla) {
  size_t len = strlen(sigla);
  if (len > 0 && sigla[len - 1] == '\n') {
    sigla[len - 1] = '\0';
  }
  FILE* fp;
  Departamento* dept;
  dept = (Departamento*) malloc(sizeof(Departamento));
  fp = fopen("departamentos.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(dept, sizeof(Departamento), 1, fp);
    if (strcmp(dept->sigla, sigla) == 0 && dept->status == 1) {
      fclose(fp);
      return dept;
    }
  }
  fclose(fp);
  return NULL;
}

Departamento* buscaDepartamentoPorId(int id) {
  FILE* fp;
  Departamento* dept;
  dept = (Departamento*) malloc(sizeof(Departamento));
  fp = fopen("departamentos.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(dept, sizeof(Departamento), 1, fp);
    if ((dept->id == id) && (dept->status == 1)) {
      fclose(fp);
      return dept;
    }
  }
  fclose(fp);
  return NULL;
}

void exibeDepartamento(Departamento* dept) {
  if (dept == NULL || dept->status == 0) {
    printf("= = = Departamento Inexistente = = =\n");
  } else {
    printf("= = = Departamento Cadastrado = = =\n");
    printf("Id: %d\n", dept->id);
    printf("Nome: %s\n", dept->nome);
    printf("Sigla: %s\n", dept->sigla);
    printf("Status: %d\n", dept->status);
  }
}


void excluiDepartamento(Departamento* deptLido) {
  FILE* fp;
  Departamento* deptArq;
  int achou = 0;
  if (deptLido == NULL) {
    printf("Ops! O departamento informado não existe!\n");
  }
  else {
    deptArq = (Departamento*) malloc(sizeof(Departamento));
    fp = fopen("departamentos.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(deptArq, sizeof(Departamento), 1, fp);
      if ((deptArq->id == deptLido->id) && (deptArq->status == 1)) {
        achou = 1;
        deptArq->status = 0;
        fseek(fp, -1*sizeof(Departamento), SEEK_CUR);
        fwrite(deptArq, sizeof(Departamento), 1, fp);
        printf("\nDepartamento excluído com sucesso!!!\n");
      }
    }
    if (!achou) {
      printf("\nDepartamento não encontrado!\n");
    }
    fclose(fp);
    free(deptArq);
  }
}