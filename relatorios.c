#include"relatorios.h"
#include<stdio.h>
#include"funcionarios.h"
#include"projetos.h"
#include"departamentos.h"
#include <stdlib.h>

void modulo_relatorios(){
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
        printf("|||                           Relatórios                                    |||\n");
        printf("|||                                                                         |||\n");
        printf("|||            1. Relatório Funcionários                                    |||\n");
        printf("|||            2. Relatório Funcionários Inativos                           |||\n");
        printf("|||            3. Relatório Funcionários Ordenados                          |||\n");
        printf("|||            4. Relatório Departamentos                                   |||\n");
        printf("|||            5. Relatório Projetos                                        |||\n");
        printf("|||            6. Relatório Projetos com Funcionário                        |||\n");
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
                lista_funcionarios();
                break;
            case '2':
                lista_funcionarios_inativos();
                break;
            case '3':
                lista_funcionarios_ordenados();
                break;
            case '4':
                lista_departamentos();
                break;
            case '5':
                lista_projetos();
                break;
            case '6':
                lista_projetos_com_funcionarios();
                break;

        }
    }while(op != '0');
}