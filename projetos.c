#include <stdio.h>
#include <stdlib.h>
#include "projetos.h"
#include "funcionarios.h"
#include "departamentos.h"
#include <string.h>
#include <time.h>

void modulo_projetos(void) {
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
        printf("|||                          Módulo Projetos                                |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            1. Buscar Projeto                                            |||\n");
        printf("|||            2. Cadastrar Projeto                                         |||\n");
        printf("|||            3. Atualizar Projeto                                         |||\n");
        printf("|||            4. Deletar Projeto                                           |||\n");
        printf("|||            5. Listar Projetos                                           |||\n");
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
            buscar_projeto();
            break;
        case '2':
            cadastrar_projeto();
            break;
        case '3':
            atualizar_projeto();
            break;
        case '4':
            deletar_projeto();
            break;
        case '5':
            lista_projetos();
            break;
        default:
            break;
        }
    }while(op != '0');
}


void buscar_projeto(void) {
    int id_projeto;
    Projeto* prjt;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                         Busca de Projeto                                |||\n\n");
    printf("Digite o ID do projeto: ");
    scanf("%d", &id_projeto);
    getchar();
    prjt = buscaProjeto(id_projeto);
    exibeProjeto(prjt);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void cadastrar_projeto(void) {
    Projeto* prjt;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Cadastro de Projetos                             |||\n");
    prjt = preencheProjeto();
    gravaProjeto(prjt);
    free(prjt);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void atualizar_projeto(void) {;
    char cpf[13];
    int id_projeto, id_departamento;
    system("clear||cls");
    printf("\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            = = = =  Sistema de Gestão de Funcionários  = = = =          |||\n");
    printf("|||            = = = = = = = = = = = = = = = = = = = = = = = = = =          |||\n");
    printf("|||            ===================================================          |||\n");
    printf("|||            Developed by @joaosantosmedeiros -- since Ago, 2023          |||\n");
    printf("|||                                                                         |||\n");
    printf("|||                        Atualização de Projetos                          |||\n\n");
    printf("Digite o id do projeto: ");
    scanf("%d", &id_projeto);
    getchar();
    printf("Digite o id do departamento: ");
    scanf("%d", &id_departamento);
    getchar();
    le_cpf(cpf);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void deletar_projeto(void) {
    Projeto* prjt;
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
    printf("|||                         Remoção de Projetos                             |||\n\n");
    printf("Digite o id do projeto: ");
    scanf("%d", &id);
    getchar();
    prjt = buscaProjeto(id);
    excluiProjeto(prjt);
    free(prjt);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void lista_projetos(void) {
  FILE* fp;
  Projeto* prjt;
  printf("\n = Lista de Projetos = \n"); 
  prjt = (Projeto*) malloc(sizeof(Projeto));
  fp = fopen("projetos.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(prjt, sizeof(Projeto), 1, fp)) {
    if (prjt->status == 1) {
      exibeProjeto(prjt);
    }
  }
  fclose(fp);
  free(prjt);
  getchar();
}


Projeto* preencheProjeto(void) {
    Projeto* prjt;
    prjt = (Projeto*) malloc(sizeof(Projeto));
    le_cpf(prjt->cpf_funcionario);
    printf("\nDigite o ID do departamento: ");
    scanf("%d", &prjt->id_dept);
    prjt->status = 1;
    
    size_t len = strlen(prjt->cpf_funcionario);
    if (len > 0 && prjt->cpf_funcionario[len - 1] == '\n') {
        prjt->cpf_funcionario[len - 1] = '\0';
    }

    unsigned int semente = (unsigned int)time(NULL);
    srand(semente);
    prjt->id = rand();

    return prjt;
}

void gravaProjeto(Projeto* prjt) {
  FILE* fp;
  Departamento* dept;
  Funcionario* func;
  fp = fopen("projetos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  
  dept = buscaDepartamentoPorId(prjt->id_dept);
  func = buscaFuncionario(prjt->cpf_funcionario);

  if(dept == NULL){
    printf("\nErro! Departamento não existente!");
  }else if(func == NULL){
    printf("\nErro! Funcionário não existente!");
  }else{
    fwrite(prjt, sizeof(Projeto), 1, fp);
  }
  getchar();
  fclose(fp);
}

Projeto* buscaProjeto(int id) {
  FILE* fp;
  Projeto* prjt;
  prjt = (Projeto*) malloc(sizeof(Projeto));
  fp = fopen("projetos.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(prjt, sizeof(Projeto), 1, fp);
    if (prjt->id == id && prjt->status == 1) {
      fclose(fp);
      return prjt;
    }
  }
  fclose(fp);
  return NULL;
}

void exibeProjeto(Projeto* prjt) {
  if (prjt == NULL || prjt->status == 0) {
    printf("= = = Projeto Inexistente = = =\n");
  } else {
    printf("= = = Projeto Cadastrado = = =\n");
    printf("Id: %d\n", prjt->id);
    printf("CPF Funcionário: %s\n", prjt->cpf_funcionario);
    printf("Id Departamento: %d\n", prjt->id_dept);
    printf("Status: %d\n", prjt->status);
  }
}


void excluiProjeto(Projeto* prjtLido) {
  FILE* fp;
  Projeto* prjtArq;
  int achou = 0;
  if (prjtLido == NULL) {
    printf("Ops! O projeto informado não existe!\n");
  }
  else {
    prjtArq = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(prjtArq, sizeof(Projeto), 1, fp);
      if ((prjtArq->id == prjtLido->id) && (prjtArq->status == 1)) {
        achou = 1;
        prjtArq->status = 0;
        fseek(fp, -1*sizeof(Projeto), SEEK_CUR);
        fwrite(prjtArq, sizeof(Projeto), 1, fp);
        printf("\nProjeto excluído com sucesso!!!\n");
      }
    }
    if (!achou) {
      printf("\nProjeto não encontrado!\n");
    }
    fclose(fp);
    free(prjtArq);
  }
}