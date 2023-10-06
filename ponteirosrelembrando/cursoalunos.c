#include <stdio.h>
#include <stdlib.h>

typedef struct Curso{
    int id;
    char* nomeDoCurso;
    char nomeDoCordeador[100];
    int duracao;
} Curso;

typedef struct Aluno{
    int registroAcademico;
    char aluno[100];
    int dia;
    int mes;
    int ano;
    struct Curso *curso;
} Aluno;

typedef struct No{
    struct Aluno *aluno;
    struct No *prox;   
    
} No;

typedef No *pt_No;
typedef Aluno *pt_Aluno;

int main(){
    pt_No lista;
    pt_Aluno aluno1;
    lista = (pt_No) malloc(sizeof(No));
    aluno1 = (pt_Aluno) malloc(sizeof(Aluno));
    Curso *medicina = (Curso*) malloc(sizeof(Curso));
    
    medicina->nomeDoCurso = 'medicina';
    aluno1->curso = medicina;

    lista->aluno = aluno1;

    printf("\n\n\n%s\n\n\n", aluno1->curso->nomeDoCurso);

}

