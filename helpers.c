#include <stdio.h>
#include "helpers.h"
#include <ctype.h>
#include <string.h>

// Helpers Funcionários
int valida_nome(char *nome){
    int tam;

    tam = strlen(nome);
    if(tam < 5){
        return 0;
    }
    for (int i = 0; i < tam - 1; i++){
        if (!eh_letra(nome[i])){
            return 0;
        }
    }
    return 1;
}

int eh_letra(char c)
{
    if (c >= 'A' && c <= 'Z'){
        return 1;
    }
    else if (c >= 'a' && c <= 'z'){
        return 1;
    }
    else if (c == ' ' || c == 13){
        return 1;
    }
    return 0;
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


int valida_cpf(char *cpf) {
    if (strlen(cpf) != 12) {
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


int valida_telefone(char* telefone){
    int tamanho = strlen(telefone);
    if (tamanho != 12) {
        return 0;
    }

    for (int i = 0; i < tamanho - 1; i++) {
        if (!isdigit(telefone[i])) {
            return 0;
        }
    }

    return 1;
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


// Helpers Dpt.
int valida_id(char* id){
    int tamanho = strlen(id);
    if (tamanho < 2 || tamanho > 5) {
        return 0;
    }

    for (int i = 0; i < tamanho - 1; i++) {
        if (!isdigit(id[i])) {
            return 0;
        }
    }

    return 1;
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


int valida_nome_dpt(char *nome){
    int tam;

    tam = strlen(nome);
    if(tam < 5){
        return 0;
    }
    for (int i = 0; i < tam - 1; i++){
        if (!eh_letra(nome[i])){
            return 0;
        }
    }
    return 1;
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