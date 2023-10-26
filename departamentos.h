#ifndef DEPARTAMENTOS_H
#define DEPARTAMENTOS_H

void modulo_departamentos(void);
void buscar_departamento(void);
void cadastrar_departamento(void);
void atualizar_departamento(void);
void deletar_departamento(void);


void le_id(char*);
void le_nome_dpt(char*);
void le_sigla(char*);

typedef struct departamento Departamento;

struct departamento {
    int id;
    char sigla[10];
    char nome[51];
};


#endif