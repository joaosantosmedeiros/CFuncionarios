#ifndef PROJETOS_H
#define PROJETOS_H

void modulo_projetos(void);
void buscar_projeto(void);
void cadastrar_projeto(void);
void atualizar_projeto(void);
void deletar_projeto(void);
void lista_projetos(void);
void lista_projetos_inativos(void);

typedef struct projeto Projeto;

struct projeto {
    int id;
    char cpf_funcionario[13];
    int id_dept;
    unsigned short int status;
};

Projeto* preencheProjeto(void);
void gravaProjeto(Projeto*);

Projeto* buscaProjeto(int);
void exibeProjeto(Projeto*);
void exibeProjetoInativo(Projeto*);

void excluiProjeto(Projeto*);

void atualizaProjeto(Projeto*);
#endif