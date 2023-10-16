#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

void modulo_funcionarios(void);
void buscar_funcionario(void);
void cadastrar_funcionario(void);
void atualizar_funcionario(void);
void deletar_funcionario(void);

void le_nome(char*);
void le_cpf(char*);
void le_email(char*);
void le_senha(char*);
void le_telefone(char*);
void le_endereco(char*);

struct funcionario {
    char nome[50];
    char cpf[13];
    char email[51];
    char senha[30];
    char telefone[30];
    char endereco[51];
};

#endif