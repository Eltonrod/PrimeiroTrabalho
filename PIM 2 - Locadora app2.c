#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "locale.h"

struct veiculos
{
char modelo[14], placa[10];
int perfil;

};
struct veiculos carro [10];

struct cadastro
{
int idade, sexo;
char nome[30];
char cpf[15];
};
struct cadastro cliente [10];

struct funcionario
{
char nome[30], matricula[10];
char unid[20];
};
struct funcionario func [10];

struct unidades
{
char aeroporto[15], sigla[4], cidade[10];
};
struct unidades unid [10];

struct locacao
{
    char modelo[20], cliente[30];
    int perfil, acessorio,seguro, ops[3];
};
struct locacao rent[10];

struct parceiro
{
int desconto, perfil;
char nome[35];
};
struct parceiro parc[10];

struct campanhas
{
int incide, desconto, faixa, op;
char campanha[30], premio[30];
};

struct campanhas camp[10];

struct precos
{
int perfil, acs, seguro, ops;
float pperfil, pacs, pseguro, pops;
};
struct precos preco[40];

cabecalho()
{
    printf("*-----------------------------------------------------------*\n");
    printf("*================== LEGAL RENT A CAR =======================*\n");
    printf("*-----------------------------------------------------------*\n");
}
main()
{

setlocale(LC_ALL,"portuguese");

int i, x, op, senha, diaret, mesret, anoret, diadev, mesdev, anodev;
int somadia, somames,somaano, perfil;
char excluir[20];
int vetcliente[10];
int vetveiculo[10];
int vetfunc[10];
int vetrent[10];
int vetunid[10];
int vetparc[10];
int vetcamp[10];
int vetpreco[10];
int vetperfil [5];
int vetacs[4];
int vetseguro[4];
int vetops[4];

    for(i=0;i<=10;i++)
    {
    vetcliente[i] = 0;
    vetveiculo[i] = 0;
    vetfunc[i] = 0;
    vetrent[i] = 0;
    vetunid[i] = 0;
    vetparc[i] = 0;
    vetcamp[i] = 0;
    vetperfil[i] = 0;
    vetacs[i] = 0;
    vetseguro[i] = 0;
    vetops[i] = 0;
    }
i=0;
x=0;


//BASE DE CLIENTES CADASTRADOS

strcpy(cliente[i].nome, "Elton Rodrigues da Silva");
cliente[i].idade = 34;
cliente[i].sexo = 2;
strcpy(cliente[i].cpf, "297.179.008-84");
vetcliente[i] = 1;

i = i + 1;
strcpy(cliente[i].nome, "Claudia Helena Zoppelli");
cliente[i].idade = 35;
cliente[i].sexo = 1;
strcpy(cliente[i].cpf, "123.123.123-23");
vetcliente[i] = 1;

i = i + 1;
strcpy(cliente[i].nome, "Branca Jairo");
cliente[i].idade = 50;
cliente[i].sexo = 1;
strcpy(cliente[i].cpf, "987.654.321-11");
vetcliente[i] = 1;

i = i + 1;
strcpy(cliente[i].nome, "Veronica Shermann");
cliente[i].idade = 20;
cliente[i].sexo = 1;
strcpy(cliente[i].cpf, "211.122.212-12");
vetcliente[i] = 1;

//BASE DE VEÍCULOS CADASTRADOS

i = 0;
carro[i].perfil = 2;
strcpy(carro[i].modelo, "Hyundai HB20");
strcpy(carro[i].placa, "ABC-2020");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Toyota Prius");
carro[i].perfil = 6;
strcpy(carro[i].placa, "AAA-1278");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Ford Onix");
carro[i].perfil = 1;
strcpy(carro[i].placa, "BBC-9988");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Ford Prisma");
carro[i].perfil = 3;
strcpy(carro[i].placa, "ABC-9088");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Hyundai HB20s");
carro[i].perfil = 2;
strcpy(carro[i].placa, "GGJ-9100");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Ford Prisma");
carro[i].perfil = 3;
strcpy(carro[i].placa, "ABB-3366");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Fiat Doblo");
carro[i].perfil = 5;
strcpy(carro[i].placa, "PQP-1234");
vetveiculo[i] = 1;

i = i + 1;
strcpy(carro[i].modelo, "Toyota Prius");
carro[i].perfil = 6;
strcpy(carro[i].placa, "ABC-9876");
vetveiculo[i] = 1;

//BASE DE FUNCIONÁRIOS CADASTRADOS

i = 0;
strcpy(func[i].nome, "Maria da Silva");
strcpy(func[i].matricula, "mari123");
strcpy(func[i].unid, "Congonhas");
vetfunc[i] = 1;

i = i + 1;
strcpy(func[i].nome, "Claudia Helena");
strcpy(func[i].matricula, "Clau987");
strcpy(func[i].unid, "Guarulhos");
vetfunc[i] = 1;

i = i + 1;
strcpy(func[i].nome, "Veronica Batata Doce");
strcpy(func[i].matricula, "Vero987");
strcpy(func[i].unid, "Congonhas");
vetfunc[i] = 1;

i = i + 1;
strcpy(func[i].nome, "Branca Jairo");
strcpy(func[i].matricula, "Bran224");
strcpy(func[i].unid, "Congonhas");
vetfunc[i] = 1;

i = i + 1;
strcpy(func[i].nome, "Elton Rodrigues");
strcpy(func[i].matricula, "elto123");
strcpy(func[i].unid, "Congonhas");
vetfunc[i] = 1;


//BASE DE UNIDADES CADASTRADOS

i = 0;
strcpy(unid[i].aeroporto, "Guarulhos");
strcpy(unid[i].sigla, "CGR");
strcpy(unid[i].cidade, "São Paulo");
vetunid[i] = 1;

i = i+1;
strcpy(unid[i].aeroporto, "Congonhas");
strcpy(unid[i].sigla, "CGH");
strcpy(unid[i].cidade, "São Paulo");
vetunid[i] = 1;

i = i+1;
strcpy(unid[i].aeroporto, "Santos Dummont");
strcpy(unid[i].sigla, "STD");
strcpy(unid[i].cidade, "Rio de Janeiro");
vetunid[i] = 1;

//BASE DE CAMPANHAS E PROMOÇÕES CADASTRADOS

i = 0;
//op é para desconto ou premio
strcpy(camp[i].campanha, "Melhor idade");
camp[i].op = 1;
camp[i].incide = 1;
camp[i].faixa = 60;
camp[i].desconto = 10;
//strcpy(camp[i].premio, "0");
vetcamp[i] = 1;

i = i + 1;
strcpy(camp[i].campanha, "Tanque Cheio");
camp[i].op = 2;
camp[i].incide = 2;
camp[i].faixa = 7;
//camp[i].desconto = 0;
strcpy(camp[i].premio, "Sai com o tanque cheio de graça");
vetcamp[i] = 1;

i = i + 1;
strcpy(camp[i].campanha, "Ingressos para teatro");
camp[i].op = 2;
camp[i].incide = 3;
camp[i].faixa = 5;
strcpy(camp[i].premio, "Par de ingresso para o teatro");
vetcamp[i] = 1;

i = i + 1;
strcpy(camp[i].campanha, "Plantar arvores");
camp[i].op = 2;
camp[i].incide = 2;
camp[i].faixa = 9;
strcpy(camp[i].premio, "Uma arvore é plantada");
vetcamp[i] = 1;

//BASE DE PARCEIRO CADASTRADOS

i = 0;
strcpy(parc[i].nome, "AACD");
parc[i].desconto = 10;
parc[i].perfil = 1;
vetparc[i] = 1;

i = i + 1;
strcpy(parc[i].nome, "Sociedade Pestalozzi");
parc[i].desconto = 10;
parc[i].perfil = 1;
vetparc[i] = 1;

i = i + 1;
strcpy(parc[i].nome, "Universidade Paulista");
parc[i].desconto = 5;
parc[i].perfil = 2;
vetparc[i] = 1;

i = i + 1;
strcpy(parc[i].nome, "Casas André Luis");
parc[i].desconto = 10;
parc[i].perfil = 1;
vetparc[i] = 1;

//BASE DE PREÇO DOS VEÍCULOS CADASTRADOS

i = 0;
preco[i].perfil = 1;
preco[i].pperfil = 163.47;
vetperfil[i] = 1;

i = i+1;
preco[i].perfil = 2;
preco[i].pperfil = 163.47;
vetperfil[i] = 1;

i = i+1;
preco[i].perfil = 3;
preco[i].pperfil = 178.33;
vetperfil[i] = 1;

i = i+1;
preco[i].perfil = 4;
preco[i].pperfil = 178.09;
vetperfil[i] = 1;

i = i+1;
preco[i].perfil = 5;
preco[i].pperfil = 197.58;
vetperfil[i] = 1;

i = i+1;
preco[i].perfil = 6;
preco[i].pperfil = 208.10;
vetperfil[i] = 1;

//acessórios
i = 0;
preco[i].acs = 7;
preco[i].pacs = 20.00;
vetacs[i] = 1;

i = i+1;
preco[i].acs = 8;
preco[i].pacs = 15.00;
vetacs[i] = 1;

i = i+1;
preco[i].acs = 9;
preco[i].pacs = 20.00;
vetacs[i] = 1;

//SEGURO
i = 0;
preco[i].seguro = 10;
preco[i].pseguro = 58.00;
vetseguro[i] = 1;

i = i+1;
preco[i].seguro = 11;
preco[i].pseguro = 79.00;
vetseguro[i] = 1;

i = i+1;
preco[i].seguro = 12;
preco[i].pseguro = 115.00;
vetseguro[i] = 1;


cabecalho();

printf("\n\n****ÁREA DE LOGIN****\n\n");

//printf("#####LOGIN: ");
//gets(func);
//fflush(stdin);
printf("\nDIGITE A SENHA: ");
scanf("%d",&senha);
system("cls");


while (op != 4)
{
cabecalho();
printf("\n___________________ PAINEL DE CONTROLE ____________________\n\n");
printf("                    1 - CADASTRO\n\n");
printf(" ## EM CONSTRUÇÃO ##  2 - ALUGAR UM VEICULO\n\n");
printf(" ## EM CONSTRUÇÃO ##    3 - RELATÓRIOS\n\n");
printf("                          4 - SAIR\n");
printf("\nESCOLHA UMA OPÇÃO: ");
scanf("%d",& op);

if (op==1)
{
//Opção de cadastro, consulta e exclusão do sistema
while (op != 22)
{
system("cls");
printf("----------------------------------------------------------\n");
printf("********************* CADASTRO GERAL *********************\n");
printf("----------------------------------------------------------\n\n");

printf("                     _________________________________\n");
printf("                    | CADASTRAR | VISUALIZAR | EXLUIR |\n");
printf("                    |---------------------------------|\n");
printf("           ClIENTE  |     1     |      2     |    3   |\n");
printf("           VEÍCULO  |     4     |      5     |    6   |\n");
printf("       FUNCIONÁRIO  |     7     |      8     |    9   |\n");
printf("          UNIDADES  |    10     |     11     |   12   |\n");
printf("         PARCEIROS  |    13     |     14     |   15   |\n");
printf(" PROMOÇÃO/CAMPANHA  |    16     |     17     |   18   |\n");
printf("             PREÇO  |    19     |     20     |   21   |\n");
printf("                    |---------------------------------|\n");
printf("                  22 - SAIR\n\n");

printf("ESCOLHA UMA OPÇÃO: ");
scanf("%d",& op);

    switch (op)
    {

        case 22:
            system("cls");
            break;
//CADASTRAR CLIENTE
        case 1:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("**************** CADASTRAR NOVO CLIENTE ******************\n");
            printf("----------------------------------------------------------\n\n");
            i = 0;
                while(vetcliente[i]!=0)
                {
                    i = i+1;
                }
            fflush(stdin);

            printf("Digite o nome.: ");
            gets(cliente[i].nome);

            fflush(stdin);
            printf("Digite o CPF..: ");
            gets(cliente[i].cpf);

            printf("Digite o sexo ");
            printf("\n(1-F | 2-M)...: ");
            scanf("%d",&cliente[i].sexo);

            printf("Digite a idade: ");
            scanf("%d",&cliente[i].idade);

            vetcliente[i] = 1;
            system("cls");

            printf("----------------------------------------------------------------\n");
            printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
            printf(" ID |      CPF       | SEXO |  IDADE  |         NOME         ");
            printf("\n  %d | " , i + 1);
            printf("%s |  ",cliente[i].cpf);
                if(cliente[i].sexo==1)
                {
                    printf("F   | ");
                }
                else
                {
                    printf("M   | ");
                }
            printf("%d anos | ",cliente[i].idade);
            printf("%s\n",cliente[i].nome);
            getch();
            break;

//VISUALIZAR CLIENTE
        case 2:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** VISUALIZAR CADASTRO *******************\n");
            printf("----------------------------------------------------------\n\n");

            printf("                  RELAÇÃO DE CLIENTES\n");
            printf("                  -------------------\n\n");
            printf(" ID |      CPF       | SEXO |  IDADE  |         NOME         ");
                for(i=0;i<=10;i++)
                {
                    if(vetcliente[i] == 1)
                    {
                        printf("\n  %d | " , i + 1);
                        printf("%s | ",cliente[i].cpf);
                            if(cliente[i].sexo==1)
                            {
                                printf(" F   | ");
                            }
                            else
                            {
                                printf(" M   | ");
                            }
                        printf("%d anos | ",cliente[i].idade);
                        printf("%s",cliente[i].nome);
                    }
                }
            getch();
            break;

//EXCLUIR CLIENTE

        case 3:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR CLIENTE ********************\n");
            printf("----------------------------------------------------------\n\n");

            printf(" ID |      CPF       | SEXO |  IDADE  |         NOME         ");

                for(i=0;i<=10;i++)
                {
                    if(vetcliente[i] == 1)
                    {
                        printf("\n  %d | " , i + 1);
                        printf("%s | ",cliente[i].cpf);
                        if(cliente[i].sexo==1)
                        {
                            printf(" F   | ");
                        }
                        else
                        {
                            printf(" M   | ");
                        }
                        printf("%d anos | ",cliente[i].idade);
                        printf("%s",cliente[i].nome);
                    }
                }
            printf("\n\nFavor informar o ID que deseja excluir: ");
            scanf("%d", &op);
            op = op-1;

                for(i=0;i<=10;i++)
                {
                    if(i==op)
                    {
                        vetcliente[op] = 0;
                    }
                }
            op = 0;
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR CLIENTE ********************\n");
            printf("----------------------------------------------------------\n\n");

            printf(" ID |      CPF       |  IDADE  |         NOME         ");

                for(i=0;i<=10;i++)
                {
                    if(vetcliente[i] == 1)
                    {
                        printf("\n  %d | " , i + 1);
                        printf("%s | ",cliente[i].cpf);
                        printf("%d anos | ",cliente[i].idade);
                        printf("%s",cliente[i].nome);
                    }
                }
            printf("\n\n      Item excluído com sucesso\n");
            getch();
            break;

            system("cls");

//CADASTRAR VEÍCULOS
        case 4:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** CADASTRAR VEICULOS ********************\n");
            printf("----------------------------------------------------------\n\n");
            i = 0;
                while(vetveiculo[i]!=0)
                {
                    i = i+1;
                }

            printf("             PERFIL DO AUTOMÓVEL ");
            printf("\n\n  1 - GRUPO A: Sandero/Onix/Etios/Uno/Gol e similares");
//            printf("\n      *Econômico/1.0/ com ar condicionado/portas elétricas com travas,");
 //           printf("\n       e direção hidraúlica.");
            printf("\n\n  2 - GRUPO B: HB20 - HB205");
//            printf("\n      *Econômico/1.0/ com Ar condicionado/Portas elétricas com travas,");
//            printf("\n       direção hidraúlica e  freios ABS/Air bag.");
            printf("\n\n  3 - GRUPO C: Prisma, HB20s");
//            printf("\n      *Sedan Completo/1.4/Vidros e portas eletricas com trava/4 malas,");
//            printf("\n       freios ABS e Ar Bag.");
            printf("\n\n  4 - GRUPO D: Hyndai HB20s, Etios, Prisma");
//            printf("\n      *Sedan Automático/1.6/Vidros e Portas Elétricas com trava/4 malas,");
//            printf("\n       freios ABS e Airbag.");
            printf("\n\n  5 - GRUPO E: Doblo, Spin, Mini Pick-up");
//            printf("\n      *Motor 1.8/Vidros e Portas Elétricas com trava/5 lugares,");
//            printf("\n       freios ABS/Air Bag e Cambio Automático.");
            printf("\n\n  6 - GRUPO F: Prius Toyota (Híbrido)");
//            printf("\n      *Completo/2.0/Vidros e Portas Elétricas com trava/Freios ABS,");
//            printf("\n       Air Bag/Câmbio Automático e Híbrido - 2 motores combustão e elétrico.");

            printf("\n\nFavor classificar o perfil do veículo: ");
            scanf("%d",&carro[i].perfil);

            fflush(stdin);
            printf("\n\nQual o modelo do veículo.: ");
            gets(carro[i].modelo);

            printf("\n\nInforme a Placa..........: ");
            gets(carro[i].placa);

            vetveiculo[i] = 1;
            system("cls");

            printf("----------------------------------------------------------------\n");
            printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
            printf(" ID | PERFIL |   PLACA   | MODELO");
            printf("\n  %d | " , i + 1);
                if(carro[i].perfil==1)
                {
                    printf("   A   |  ");
                }
                if(carro[i].perfil==2)
                {
                    printf("   B   |  ");
                }
                if(carro[i].perfil==3)
                {
                    printf("   C   |  ");
                }
                if(carro[i].perfil==4)
                {
                    printf("   D   |  ");
                }
                if(carro[i].perfil==5)
                {
                    printf("   E   |  ");
                }
                if(carro[i].perfil==6)
                {
                    printf("   F   |  ");
                }

            printf("%s |",carro[i].placa);
            printf("  %s ",carro[i].modelo);
            getch();
            break;

//VISUALIZAR VEÍCULOS
        case 5:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** VISUALIZAR CADASTRO *******************\n");
            printf("----------------------------------------------------------\n\n");

            printf("           RELAÇÃO DE VEÍCULOS\n");
            printf("           -------------------\n\n");
            printf(" ID | PERFIL |   PLACA   | MODELO");
                for(i=0;i<=10;i++)
                {
                    if(vetveiculo[i] == 1)
                    {
                        if(carro[i].perfil==1)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   A   |  ");
                        }
                        if(carro[i].perfil==2)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   B   |  ");
                        }
                        if(carro[i].perfil==3)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   C   |  ");
                        }
                        if(carro[i].perfil==4)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   D   |  ");
                        }
                        if(carro[i].perfil==5)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   E   |  ");
                        }
                        if(carro[i].perfil==6)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   F   |  ");
                        }

                        printf("%s |",carro[i].placa);
                        printf("  %s ",carro[i].modelo);
                    }
                }
            getch();
            break;

//EXCLUIR VEÍCULOS

        case 6:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR VEÍCULO ********************\n");
            printf("----------------------------------------------------------\n\n");

            printf(" ID | PERFIL |   PLACA   | MODELO");

            for(i=0;i<=10;i++)
            {
                if(vetveiculo[i] == 1)
                {
                        if(carro[i].perfil==1)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   A   |  ");
                        }
                        if(carro[i].perfil==2)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   B   |  ");
                        }
                        if(carro[i].perfil==3)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   C   |  ");
                        }
                        if(carro[i].perfil==4)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   D   |  ");
                        }
                        if(carro[i].perfil==5)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   E   |  ");
                        }
                        if(carro[i].perfil==6)
                        {
                            printf("\n  %d | " , i + 1);
                            printf("   F   |  ");
                        }

                    printf("%s |",carro[i].placa);
                    printf("  %s ",carro[i].modelo);
                }
            }
            printf("\n\nInforme o ID do veículo que deseja excluir: ");
            scanf("%d", &op);
            op = op-1;

                for(i=0;i<=10;i++)
                {
                    if(i==op)
                    {
                        vetveiculo[op] = 0;
                    }
                }
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR VEICULO ********************\n");
            printf("----------------------------------------------------------\n\n");


            printf(" ID | PERFIL |   PLACA   | MODELO");
                for(i=0;i<=10;i++)
                {
                    if(vetveiculo[i] == 1)
                    {

                if(carro[i].perfil==1)
                {
                    printf("\n  %d | " , i + 1);
                    printf("   A   |  ");
                }
                if(carro[i].perfil==2)
                {
                    printf("\n  %d | " , i + 1);
                    printf("   B   |  ");
                }
                if(carro[i].perfil==3)
                {
                    printf("\n  %d | " , i + 1);
                    printf("   C   |  ");
                }
                if(carro[i].perfil==4)
                {
                    printf("\n  %d | " , i + 1);
                    printf("   D   |  ");
                }
                if(carro[i].perfil==5)
                {
                    printf("\n  %d | " , i + 1);
                    printf("   E   |  ");
                }
                if(carro[i].perfil==6)
                {
                    printf("\n  %d | " , i + 1);
                    printf("   F   |  ");
                }

            printf("%s |",carro[i].placa);
            printf("  %s ",carro[i].modelo);
                    }
                }
            printf("\n\n      Item excluído com sucesso\n");
            getch();

            break;
            system("cls");

    //CADASTRAR FUNCIONÁRIO
        case 7:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("************** CADASTRAR NOVO FUNCIONÁRIO ****************\n");
            printf("----------------------------------------------------------\n\n");
            i = 0;
                while(vetfunc[i]!=0)
                {
                    i = i+1;
                }
            fflush(stdin);

            printf("Digite o nome.................: ");
            gets(func[i].nome);

            fflush(stdin);
            printf("Digite o número da matricula..: ");
            gets(func[i].matricula);

            printf("Irá atuar na unidade de.......:");
            gets(func[i].unid);

            vetfunc[i] = 1;
            system("cls");

            printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                        printf("\nID: %d - " , i + 1);
                        printf("%s",func[i].nome);
                        printf("\n        MATRICULA: %s - ",func[i].matricula);
                        printf("UNIDADE: %s\n",func[i].unid);
            getch();
            break;

//VISUALIZAR FUNCIONÁRIO
        case 8:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** VISUALIZAR CADASTRO *******************\n");
            printf("----------------------------------------------------------\n");

            printf("\n\n                  RELAÇÃO DE FUNCIONÁRIOS\n");
            printf("                      -----------------------\n");
                for(i=0;i<=10;i++)
                {
                    if(vetfunc[i] == 1)
                    {
                        printf("\nID: %d | " , i + 1);
                        printf("%s",func[i].nome);
                        printf("\n        MATRICULA: %s | ",func[i].matricula);
                        printf("UNIDADE: %s\n",func[i].unid);

                    }
                }
            getch();
            break;

//EXCLUIR FUNCIONÁRIO

        case 9:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("******************* EXCLUIR FUNCIONÁRIO ******************\n");
            printf("----------------------------------------------------------\n\n");

                for(i=0;i<=10;i++)
                {
                    if(vetfunc[i] == 1)
                    {
                        printf("\n %d - " , i + 1);
                        printf("%s",func[i].nome);
                        printf("\n        MATRICULA: %s - ",func[i].matricula);
                        printf("UNIDADE: %s\n",func[i].unid);
                    }
                }
            printf("\n\nFavor informar o ID que deseja excluir: ");
            scanf("%d", &op);
            op = op-1;

                for(i=0;i<=10;i++)
                {
                    if(i==op)
                    {
                        vetfunc[op] = 0;
                    }
                }
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("******************* EXCLUIR FUNCIONÁRIO ******************\n");
            printf("----------------------------------------------------------\n\n");

                for(i=0;i<=10;i++)
                {
                    if(vetfunc[i] == 1)
                    {
                        printf("\n %d | " , i + 1);
                        printf("%s",func[i].nome);
                        printf("\n        MATRICULA: %s | ",func[i].matricula);
                        printf("UNIDADE: %s\n",func[i].unid);
                    }
                }
            printf("\n\n      Item excluído com sucesso\n");
            getch();
            break;
            system("cls");

//CADASTRAR UNIDADES
        case 10:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("**************** CADASTRAR NOVA UNIDADE ******************\n");
            printf("----------------------------------------------------------\n\n");
            i = 0;
                while(vetunid[i] !=0)
                {
                    i = i+1;
                }
            fflush(stdin);
            printf("Digite o nome do aeroporto.: ");
            gets(unid[i].aeroporto);

            printf("Digite a sigla da unidade..: ");
            gets(unid[i].sigla);

            printf("Digite a cidade............: ");
            gets(unid[i].cidade);

            vetunid[i] = 1;
            system("cls");

            printf("----------------------------------------------------------------\n");
            printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
            printf(" ID | SIGLA    AEROPORTO/CIDADE\n");
            printf("  %d |" , i + 1);
            printf("  %s ",unid[i].sigla);
            printf("    %s",unid[i].aeroporto);
            printf(" - %s\n\n",unid[i].cidade);

            getch();
            break;

//VISUALIZAR UNIDADES
        case 11:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** VISUALIZAR UNIDADES *******************\n");
            printf("----------------------------------------------------------\n\n");

            printf("                UNIDADES DE TRABALHO\n");
            printf("                  -------------------\n\n");
            printf(" ID | SIGLA    AEROPORTO/CIDADE\n");

                for(x=0;x<=10;x++)
                {
                    if(vetunid[x] == 1)
                    {
                        printf("  %d |" , x + 1);
                        printf("  %s ",unid[x].sigla);
                        printf("    %s",unid[x].aeroporto);
                        printf(" - %s\n",unid[x].cidade);
                    }
                }
            getch();
            break;

//EXCLUIR UNIDADES

        case 12:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR UNIDADE ********************\n");
            printf("----------------------------------------------------------\n\n");

            printf(" ID | SIGLA    AEROPORTO/CIDADE\n");

                for(x=0;x<=10;x++)
                {
                    if(vetunid[x] == 1)
                    {
                        printf("  %d |" , x + 1);
                        printf("  %s ",unid[x].sigla);
                        printf("    %s",unid[x].aeroporto);
                        printf(" - %s\n",unid[x].cidade);
                    }
                }
            printf("\n\nFavor informar o ID que deseja excluir: ");
            scanf("%d", &op);
            op = op-1;

                for(x=0;x<=10;x++)
                {
                    if(x==op)
                    {
                        vetunid[op] = 0;
                    }
                }
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR UNIDADE ********************\n");
            printf("----------------------------------------------------------\n\n");

            printf(" ID | SIGLA    AEROPORTO/CIDADE\n");

                for(x=0;x<=10;x++)
                {
                    if(vetunid[x] == 1)
                    {
                        printf("  %d |" , x + 1);
                        printf("  %s ",unid[x].sigla);
                        printf("    %s",unid[x].aeroporto);
                        printf(" - %s\n",unid[x].cidade);
                    }
                }
            printf("\n\n      Unidade excluída com sucesso\n");
            getch();
            op = 0;
            break;
            system("cls");


//CADASTRAR PARCEIRO
        case 13:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("************* CADASTRAR DESCONTO PARCERIA ****************\n");
            printf("----------------------------------------------------------\n\n");
            i = 0;
                while(vetparc[i]!=0)
                {
                    i = i+1;
                }

            fflush(stdin);
            printf("        Digite a razão social..: ");
            gets(parc[i].nome);

            printf("\n\nQual a classificação da instituição?\n");
            printf("           1-ONG's | 2-PARCEIRO: ");
            scanf("%d",&parc[i].perfil);

            printf("\n\nDigite o perceitual de desconto: ");
            scanf("%d",&parc[i].desconto);

            vetparc[i] = 1;
            system("cls");

            printf("----------------------------------------------------------------\n");
            printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
            printf("ID %d - " , i + 1);
            printf("%s ",parc[i].nome);
            printf("\n       %d",parc[i].desconto);
            printf("%%");
            printf(" DE DESCONTO");
printf(" - PERFIL: ");

                if(parc[i].perfil==1)
                {
                    printf("ONG");
                }
                else
                {
                    printf("PARCEIRO");
                }

            getch();
            break;

//VISUALIZAR PARCEIRO
        case 14:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("***************** VISUALIZAR PARCEIROS *******************\n");
            printf("----------------------------------------------------------\n\n");

                for(i=0;i<=10;i++)
                {
                    if(vetparc[i] == 1)
                    {
                        printf("ID %d - " , i + 1);
                        printf("%s ",parc[i].nome);
                        printf("\n       %d",parc[i].desconto);
                        printf("%%");
                        printf(" DE DESCONTO");
                        printf(" - PERFIL: ");

                            if(parc[i].perfil==1)
                            {
                                printf("ONG\n\n");
                            }
                            else
                            {
                                printf("PARCEIRO\n\n");
                            }
                    }
                }
            getch();
            op=0;
            break;

//EXCLUIR PARCEIRO

        case 15:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR PARCEIRO *******************\n");
            printf("----------------------------------------------------------\n\n");


                for(i=0;i<=10;i++)
                {
                    if(vetparc[i] == 1)
                    {
                        printf("ID %d - " , i + 1);
                        printf("%s ",parc[i].nome);
                        printf("\n       %d",parc[i].desconto);
                        printf("%%");
                        printf(" DE DESCONTO");
                        printf(" - PERFIL: ");

                            if(parc[i].perfil==1)
                            {
                                printf("ONG\n\n");
                            }
                            else
                            {
                                printf("PARCEIRO\n\n");
                            }
                    }
                }
            printf("\n\nFavor informar o ID que deseja excluir: ");
            scanf("%d", &op);
            op = op-1;

                for(x=0;x<=10;x++)
                {
                    if(x==op)
                    {
                        vetparc[op] = 0;
                    }
                }
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR PARCEIRO ********************\n");
            printf("----------------------------------------------------------\n\n");

                for(i=0;i<=10;i++)
                {
                    if(vetparc[i] == 1)
                    {
                        printf("ID %d - " , i + 1);
                        printf("%s ",parc[i].nome);
                        printf("\n       %d",parc[i].desconto);
                        printf("%%");
                        printf(" DE DESCONTO");
                        printf(" - PERFIL: ");

                            if(parc[i].perfil==1)
                            {
                                printf("ONG\n\n");
                            }
                            else
                            {
                                printf("PARCEIRO\n\n");
                            }
                    }
                }
            printf("\n\n      Item excluído com sucesso\n");
            getch();
            op = 0;
            break;
            system("cls");


//CADASTRAR PROMOÇÕES
        case 16:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("*********** CADASTRAR PROMOÇÕES\CAMPANHAS ****************\n");
            printf("----------------------------------------------------------\n\n");
            i = 0;
                while(vetcamp[i]!=0)
                {
                    i = i+1;
                }

            fflush(stdin);
            printf(" Digite o nome da campanha..: ");
            gets(camp[i].campanha);

            printf("\n\n Em qual parâmetro a campanha irá se basear?\n\n");
            printf(" 1-IDADE | 2-DIAS DE LOCAÇÃO | 3-QUANTIDADE DE LOCAÇÕES: ");
            scanf("%d",&camp[i].incide);
                if(camp[i].incide == 1)
                {
                    printf("Digite a idade para o programa: ");
                    scanf("%d",&camp[i].faixa);
                }
                if(camp[i].incide == 2)
                {
                    printf("Quantos dias para ter direito ao programa: ");
                    scanf("%d",&camp[i].faixa);
                }
                if(camp[i].incide == 3)
                {
                    printf("Qual o total locações para ter direito ao programa: ");
                    scanf("%d",&camp[i].faixa);
                }
            printf("\n\n Qual o beneficio da campanha?");
            printf("\n 1-DESCONTO | 2-PRÊMIO: ");
            scanf("%d",&camp[i].op);
                if(camp[i].op==1)
                {
            printf("\n\n Digite o percentual de desconto: ");
            scanf("%d",&camp[i].desconto);
                }
                if(camp[i].op==2)
                {
            fflush(stdin);
            printf("\n\n Digite qual o premio o cliente irá ganhar: ");
            gets(camp[i].premio);
                }

            vetcamp[i] = 1;
            system("cls");

            printf("----------------------------------------------------------------\n");
            printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
            printf("                   ID: %d\n" , i + 1);
            printf("             CAMPANHA: %s\n",camp[i].campanha);
            printf("            PARÂMETRO: ");

                if(camp[i].incide==1)
                {
                    printf("A partir de %d anos\n",camp[i].faixa);
                }
                if(camp[i].incide==2)
                {
                    printf("A partir de %d dias\n",camp[i].faixa);
                }
                if(camp[i].incide==3)
                {
                    printf("A partir de %d locações\n",camp[i].faixa);
                }
            printf("            BENEFICIO: ");
                if(camp[i].op==1)
                {
                    printf("%d%% de desconto\n",camp[i].desconto);
                }
                if(camp[i].op==2)
                {
                    printf("%s\n\n",camp[i].premio);
                }

            getch();
            break;

//VISUALIZAR PROMOÇÕES E CAMPANHAS
        case 17:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("************ VISUALIZAR PROMOÇÕES\CAMPANHAS **************\n");
            printf("----------------------------------------------------------\n\n");

                for(x=0;x<=10;x++)
                {
                    if(vetcamp[x] == 1)
                    {
                        printf("                   ID: %d\n" , x + 1);
                        printf("             CAMPANHA: %s\n",camp[x].campanha);
                        printf("            PARÂMETRO: ");

                            if(camp[x].incide==1)
                            {
                                printf("A partir de %d anos\n",camp[x].faixa);
                            }
                            if(camp[x].incide==2)
                            {
                                printf("A partir de %d dias\n",camp[x].faixa);
                            }
                            if(camp[x].incide==3)
                            {
                                printf("A partir de %d locações\n",camp[x].faixa);
                            }
                        printf("            BENEFICIO: ");
                            if(camp[x].op==1)
                            {
                                printf("%d%% de desconto\n\n",camp[x].desconto);
                            }
                            if(camp[x].op==2)
                            {
                                printf("%s\n\n",camp[x].premio);
                            }
                    }
                }
            getch();
            op=0;
            break;

//EXCLUIR PARCEIRO

        case 18:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("************** EXCLUIR PROMOÇÕES\CAMPANHAS ***************\n");
            printf("----------------------------------------------------------\n\n");


                for(x=0;x<=10;x++)
                {
                    if(vetcamp[x] == 1)
                    {
                        printf("                   ID: %d\n" , x + 1);
                        printf("             CAMPANHA: %s\n",camp[x].campanha);
                        printf("            PARÂMETRO: ");
                            if(camp[x].incide==1)
                            {
                                printf("A partir de %d anos\n",camp[x].faixa);
                            }
                            if(camp[x].incide==2)
                            {
                                printf("A partir de %d dias\n",camp[x].faixa);
                            }
                            if(camp[x].incide==3)
                            {
                                printf("A partir de %d locações\n",camp[x].faixa);
                            }
                        printf("            BENEFICIO: ");
                            if(camp[x].op==1)
                            {
                                printf("%d%% de desconto\n\n",camp[x].desconto);
                            }
                            if(camp[x].op==2)
                            {
                                printf("%s\n\n",camp[x].premio);
                            }
                        }
                }
            printf("\n\nFavor informar o ID que deseja excluir: ");
            scanf("%d", &op);
            op = op-1;

                for(x=0;x<=10;x++)
                {
                    if(x==op)
                    {
                        vetcamp[op] = 0;
                    }
                }
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* EXCLUIR PARCEIRO ********************\n");
            printf("----------------------------------------------------------\n\n");

                for(x=0;x<=10;x++)
                {
                    if(vetcamp[x] == 1)
                    {
                        printf("                  ID: %d\n" , x + 1);
                        printf("            CAMPANHA: %s\n",camp[x].campanha);
                         printf("          PARÂMETRO: ");
                            if(camp[x].incide==1)
                            {
                                printf("A partir de %d anos\n",camp[x].faixa);
                            }
                            if(camp[x].incide==2)
                            {
                                printf("A partir de %d dias\n",camp[x].faixa);
                            }
                            if(camp[x].incide==3)
                            {
                                printf("A partir de %d locações\n",camp[x].faixa);
                            }
                        printf("           BENEFICIO: ");
                            if(camp[x].op==1)
                            {
                                printf("%d%% de desconto\n\n",camp[x].desconto);
                            }
                            if(camp[x].op==2)
                            {
                                printf("%s\n\n",camp[x].premio);
                            }
                        }
                }
            printf("\n\n      Item excluído com sucesso\n");
            getch();
            op = 0;
            break;
            system("cls");

//CADASTRAR PREÇO
            case 19:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************** CADASTRAR PREÇO *******************\n");
            printf("----------------------------------------------------------\n\n");

            printf("                    1 - VEICULOS\n\n");
            printf("                      2 - ACESSÓRIOS\n\n");
            printf("                        3 - SEGURO\n\n");
            printf("                          4 - OPCIONAIS\n");
            printf("Favor digitar a opção desejada: ");
            scanf("\n%d",&op);

                if(op == 1)
                {

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************** CADASTRAR PREÇO *******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("\n\n  1 - GRUPO A");
                    printf("\n  2 - GRUPO B");
                    printf("\n  3 - GRUPO C");
                    printf("\n  4 - GRUPO D");
                    printf("\n  5 - GRUPO E");
                    printf("\n  6 - GRUPO F\n");
                    printf("\nFavor digitar a opção desejada: ");
                    scanf("\n%d",&op);

                    for(i=0;i<=5;i++)
                    {
                    if(preco[i].perfil == op)
                    {

                    printf("\n\n Informe o custo de locação: ");
                    scanf("%f",&preco[i].pperfil);

                    system("cls");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf(" PERFIL DO VEÍCULO: ");
                         if(preco[i].perfil==1)
                        {
                            printf("A ");
                        }
                        if(preco[i].perfil==2)
                        {
                            printf("B ");
                        }
                        if(preco[i].perfil==3)
                        {
                            printf("C ");
                        }
                        if(preco[i].perfil==4)
                        {
                            printf("D ");
                        }
                        if(preco[i].perfil==5)
                        {
                            printf("E ");
                        }
                        if(preco[i].perfil==6)
                        {
                            printf("F ");
                        }
                    printf("\n         CUSTO DE LOCAÇÃO: %.2f",preco[i].pperfil);
                    }
                    }
                    vetperfil[i] = 1;
                    getch();
                    break;
                    }

                //CADASTRAR ACESSORIOS
                if(op==2)
                {
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************** CADASTRAR PREÇO *******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("\n  7 - CADEIRINHA DE BEBÊ");
                    printf("\n  8 - GPS");
                    printf("\n  9 - WIFI\n");
                    printf("\n\nFavor digitar a opção desejada: ");
                    scanf("%d",&op);

                    for(i=0;i<=9;i++)
                    {
                    if(preco[i].acs == op)
                    {
                    printf("\n\n Informe o custo do acessório: ");
                    scanf("%f",&preco[i].pacs);

                    system("cls");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf(" ACESSÓRIO CADASTRADO: ");

                         if(preco[i].acs == 7)
                        {
                            printf("CADEIRINHA DE BEBÊ");
                        }
                        if(preco[i].acs == 8)
                        {
                            printf("GPS");
                        }
                        if(preco[i].acs == 9)
                        {
                            printf("WIFI");
                        }
                    printf("\n     CUSTO DO ACESSÓRIO: %.2f",preco[i].pacs);
                    }
                    }
                    vetpreco[i] = 1;
                    getch();
                    break;
                }

                //CADASTRAR SEGURO
                if(op==3)
                {
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************** CADASTRAR PREÇO *******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("\n  10 - GRUPO A OU B");
                    printf("\n  11 - GRUPO C OU D");
                    printf("\n  12 - GRUPO E OU F\n");
                    printf("\n\nFavor digitar a opção desejada: ");
                    scanf("%d",&op);

                    for(i=0;i<=12;i++)
                    {
                    if(preco[i].seguro == op)
                    {
                    printf("\n\n Informe o custo do acessório: ");
                    scanf("%f",&preco[i].pseguro);

                    system("cls");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf(" SEGURO CADASTRADO: ");

                         if(preco[i].seguro == 10)
                        {
                            printf("BASIC");
                        }
                        if(preco[i].seguro == 11)
                        {
                            printf("FLEX");
                        }
                        if(preco[i].seguro == 12)
                        {
                            printf("PLUS");
                        }
                    printf("\n     CUSTO DO SEGURO: %.2f",preco[i].pseguro);
                    }
                    }
                    vetseguro[i] = 1;
                    getch();
                    break;
                }


//CADASTRAR VISUALIZAR PREÇOS CADASTRADOS

            case 20:

            system("cls");
            printf("----------------------------------------------------------\n");
            printf("********************* VISUALIZAR PREÇOS ******************\n");
            printf("----------------------------------------------------------\n\n");

            printf("TABELA DOS VEÍCULOS: \n\n");
            for(x=0;x<=5;x++)
            {
                if (vetperfil[x] == 1)
                {
                printf("Grupo %d: %.2f\n",preco[x].perfil, preco[x].pperfil);
                }
            }
            printf("\n\nTABELA DOS ACESSÓRIOS: \n\n");
            for(x=0;x<=2;x++)
            {
                if (vetacs[x] == 1)
                {
                    if(preco[x].acs == 7)
                    {
                    printf("ASSENTO DE BEBÊ");
                    printf(": %.2f\n",preco[x].pacs);
                    }
                    if(preco[x].acs == 8)
                    {
                    printf("            GPS");
                    printf(": %.2f\n",preco[x].pacs);
                    }
                    if(preco[x].acs == 9)

                    {
                    printf("           WIFI");
                    printf(": %.2f\n",preco[x].pacs);
                    }

                }
            }

                        printf("\n\nTABELA DOS SEGUROS: \n\n");
            for(x=0;x<=3;x++)
            {
                if (vetseguro[x] == 1)
                {
                    if(preco[x].seguro == 10)
                    {
                    printf("     BASIC");
                    printf(": %.2f\n",preco[x].pseguro);
                    }
                    if(preco[x].seguro == 11)
                    {
                    printf("      FLEX");
                    printf(": %.2f\n",preco[x].pseguro);
                    }
                    if(preco[x].seguro == 12)
                    {
                    printf("      PLUS");
                    printf(": %.2f\n",preco[x].pseguro);
                    }

                }
            }
            getch();
            break;


    }
    }//While principal de CLIENTE

//////////////////////////////////////////////////////////////////////////////////////
           if (op == 2)//PROCESSO DE LOCAÇÃO DE VEÍCULO
           {
            printf("----------------------------------------------------------\n");
            printf("****************** PROCESSO DE LOCAÇÃO *******************\n");
            printf("----------------------------------------------------------\n");

//            printf("Digite o nome do cliente: ");
//            gets(rent[op].cliente);

//                for(op=0;op<=10;op++)
//                {
//                    if(strcmp (cadastro[op].nome, rent[op].cliente))
//                    {
//                        printf("CLIENTE NÃO POSSUI CADASTRO.\n\n");
//                    }
//                    else
//                    {
//                        printf("Olá prezado cliente. Iremos iniciar o processo, ok? \n\n");
//
//                    }
//                }


            getch();
            system("cls");
            //Definindo o periodo de locação
            printf("\n\n");
            printf("****ALUGANDO UM VEICULO***\n\n");
            printf("RETIRADA DO VEICULO?\n");
            printf("Dia: ");
            scanf("%d",&diaret);
            printf("Mês: ");
            scanf("%d",&mesret);
            printf("Ano: ");
            scanf("%d",&anoret);
            printf("\nDEVOLUÇÃO DO VEICULO?\n\n");
            printf("Dia: ");
            scanf("%d",&diadev);
            printf("Mês: ");
            scanf("%d",&mesdev);
            printf("Ano: ");
            scanf("%d",&anodev);

            somadia = diadev - diaret;
            somames = mesdev - mesret;
            somaano = anodev - anoret;

            printf("***O PERIODO DE LOCAÇÃO É DE %d dias, %d mês e %d anos***\n",somadia,somames,somaano);
            getch();
            system("cls");

            //escolha do veiculo
            printf("----------------------------------------------------------\n");
            printf("****************** PROCESSO DE LOCAÇÃO *******************\n");
            printf("----------------------------------------------------------\n");

            while(vetrent[i]!=0)
                    {
                        i = i+1;
                    }

            printf("Escolha o perfil do veículo: \n");
            printf("1-Basic | 2-Flex | 3-Plus: ");
            scanf("%d",&rent[i].perfil);
            //completar etapa

            //ACESSÓRIOS
            printf("\n\nACESSÓRIOS:\n");

            printf("1 - Cadeirinha de bebê | 2 GPS | 3 - Sistema wifi : ");
            scanf("%d",&rent[i].ops[x]);
            printf("\n\nMais algum? 1 - sim | 2 - Não: ");
            scanf("%d",&op);
            while(op==1)
            {
            x = x+1;
            printf("\n\nESCOLHA UMA NOVA OPÇÃO:\n");
            printf("1 - Cadeirinha de bebê | 2 GPS\n");
            printf("3 - Sistema wifi : ");
            scanf("%d",&rent[i].ops[x]);
            printf("\n\nDeseja escolher mais algum? (1 - sim | 2 - Não): ");
            scanf("%d",&op);
            }
            //SEGURO
            system("cls");
            cabecalho();

            printf("\n\nSEGURO:\n");

            printf("1 - Básico | 2 Flex | 3 - mega\n");
            scanf("%d",&rent[i].seguro);

            getch();
            system("cls");

           //ETAPA DE FINALIZAÇÃO DA LOCAÇÃO
           cabecalho();

            printf("----------------------------------------------------------\n");
            printf("**************** DEMONSTRATIVO DE LOCAÇÃO ****************\n");
            printf("----------------------------------------------------------\n");

            printf("Periodo de locação: %d dias, %d meses, %d anos\n\n",somadia,somames,somaano);
            printf("Perfil do veículo.: %d - ",rent[i].perfil);
            if(rent[i].perfil == 1)
            {
                printf(" Basic\n\n");
            }
            if(rent[i].perfil == 2)
            {
                printf(" Flex\n\n");
            }
            if(rent[i].perfil == 3)
            {
                printf(" Plus\n\n");
            }
            for (op = 0; op<=x;op++)
            {
                printf("%d",rent[i].ops[op]);
                if(rent[i].ops[op] == 1)
            {
                printf(" Acessórios...: ");
                printf(" Bebê Conforto\n\n");
            }
            if(rent[i].ops[op]== 2)
            {
                printf(" Acessórios...: ");
                printf(" GPS\n\n");
            }
            if(rent[i].ops[op] == 3)
            {
                printf(" Acessórios...: ");
                printf(" Sistema wifi\n\n");
            }
            if(rent[i].ops[op] == 4)
            {
                printf(" Acessórios...: ");
                printf(" Equipamento de som\n\n");
            }
            }
            getch();
            vetrent[i] = i + 1;
            system("cls");
           }


        } // while do menu principal
           if (op == 4)//Sair
           {
            system("cls");
            printf("\n\n\n**** SISTEMA ENCERRADO ****");
            getch();
           }


}//main
}
