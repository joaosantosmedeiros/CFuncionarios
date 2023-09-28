#include <stdio.h>
#include "helpers.h"
#include <ctype.h>
#include <string.h>

int valida_nome(char *nome)
{
    int tam;

    tam = strlen(nome);
    for (int i = 0; i < tam - 1; i++)
    {
        if (!eh_letra(nome[i]))
        {
            return 0;
        }
    }
    return 1;
}

int eh_letra(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else if (c == ' ' || c == 13)
    {
        return 1;
    }
    return 0;
}

void le_nome(char *nome){
    printf("|||                    Digite o nome do funcionário: ");
    fgets(nome, 51, stdin);
    while (!valida_nome(nome)){
        printf("|||                    Caracteres inválidos\n");
        printf("|||                    Informe o nome novamente\n|||\n");
        printf("|||                    Digite o nome do funcionário: ");
        fgets(nome, 51, stdin);
    }
}

int valida_cpf(char *cpf) {
    if (strlen(cpf) != 11) {
        return 0;
    }

    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }

    int numerosCPF[11];
    for (int i = 0; i < 11; i++) {
        numerosCPF[i] = cpf[i] - '0';
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += numerosCPF[i] * (10 - i);
    }
    int primeiroDigito = 11 - (soma % 11);
    if (primeiroDigito >= 10) {
        primeiroDigito = 0;
    }

    if (numerosCPF[9] != primeiroDigito) {
        return 0;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += numerosCPF[i] * (11 - i);
    }
    int segundoDigito = 11 - (soma % 11);
    if (segundoDigito >= 10) {
        segundoDigito = 0;
    }

    if (numerosCPF[10] != segundoDigito) {
        return 0;
    }

    return 1;
}

void le_cpf(char *cpf){
    printf("|||                    Digite o CPF do funcionário: ");
    fgets(cpf, 12, stdin);
    cpf[strcspn(cpf, "\n")] = 0;
    while (!valida_cpf(cpf)){
        if( strchr(cpf, '\n') == NULL )
        while (getchar() != '\n')
            continue;
        printf("|||                    CPF inválido\n");
        printf("|||                    Digite o CPF do funcionário: ");
        fgets(cpf, 12, stdin);
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
}

int valida_email(char *email) {
    int tamanho = strlen(email);
    int temArroba = 0;

    // Verifica se o e-mail é vazio ou muito curto
    if (tamanho == 0 || tamanho < 5) {
        return 0;
    }

    for (int i = 0; i < tamanho; i++) {
        // Verifica se o caractere é um "@" e se é o único encontrado
        if (email[i] == '@') {
            if (temArroba) {
                return 0; // Mais de um "@" encontrado
            }
            temArroba = 1;
        } else if (email[i] == '.') {
            // Verifica se há um ponto "." após o "@"
            if (!temArroba) {
                return 0;
            }
        }
    }

    if (email[0] == '@' || email[tamanho - 1] == '@') {
        return 0;
    }

    return temArroba;
}