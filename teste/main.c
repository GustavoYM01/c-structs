#include <stdio.h>
#include <stdlib.h>

//struct exemplo {
//    int a;
//    int b;
//    int c;
//};

struct datas {
    int h;
    int m;
    int s;
};

struct datas2 {
    int d;
    int m;
    int a;
};

struct datas3 {
//  Pensar sobre...
};

struct dados {
    char nome[20];
    int idade;
    char endereco[60];
};

struct dadosAluno {
    char nomeAluno[60];
    int numMatr;
    char curso[60];
};


//struct ex {
//    int a;
//    char b;
//    float c;
//};

main()
{
//    int v[3] = {9,6,7};
//    int *p = v;
//    printf("%d", v[0]);

// =============**=============

//    struct exemplo e;
//
//    e.a = 3764238823746;
//    e.b = 356423534;
//    e.c = 736423;
//
//    printf("%d\n", e.a);
//    printf("%d\n", e.b);
//    printf("%d\n", e.c);

// =============**=============

//      struct ex e;
//
//      printf("Informe o valor de a: \n");
//      scanf("%d", &e.a);
//      printf("Informe o valor de b: \n");
//      fflush(stdin);
//      scanf("%c", &e.b);
//      printf("Informe o valor de c: \n\n");
//      scanf("%f", &e.c);
//
//      printf("Valores digitados: %d %c %.2lf\n\n", (e.a), (e.b), (e.c));

// =============**=============


//      EXERCÍCIO 2
//        struct dados d;
//
//        printf("Digite o seu nome: \n");
//        fflush(stdin);
//        gets(d.nome);
//
//        printf("Digite a sua idade: \n");
//        scanf("%d", &d.idade);
//
//        printf("E por fim, digite o seu endereco: \n");
//        fflush(stdin);
//        gets(d.endereco);
//
//        printf("\n%s, %d anos e %s\n\n", (d.nome), (d.idade), (d.endereco));


// =============**=============

//      EXERCÍCIO 3

//        struct dadosAluno da;
//
//        for(int i = 0; i < 2; i++){
//            printf("\nDigite o nome do %d° aluno: \n", (i+1));
//            fflush(stdin);
//            gets(da.nomeAluno);
//
//            printf("\nDigite o n° da matricula do %d° aluno: \n", (i+1));
//            scanf("%d", &da.numMatr);
//
//            printf("\nE por fim, digite o nome do curso do %d aluno: \n", (i+1));
//            fflush(stdin);
//            gets(da.curso);
//        }
//
//        for(int i = 0; i < 2; i++) {
//            printf("Aluno: %s\n\n", da.nomeAluno);
//            printf("Numero da matricula: %d\n\n", da.numMatr);
//            printf("Curso: %s\n\n", da.curso);
//        }
}
