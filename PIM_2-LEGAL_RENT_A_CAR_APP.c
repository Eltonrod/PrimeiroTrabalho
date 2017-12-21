#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "locale.h"


struct veiculos
{
    char modelo[14], placa[10];
    int perfil, id;
};
struct veiculos carro [20];

struct cadastro
{
    int idade, sexo, parceiro, op;
    char nome[30];
    char cpf[15];
};
struct cadastro cliente [20];

struct funcionario
{
    char nome[30], matricula[10], cpf[20], unid[20];
    int senha;
};
struct funcionario func [10];

struct unidades
{
    char aeroporto[15], sigla[4], cidade[10];
};
struct unidades unid [10];

struct locacao
{
    char cliente[30];
    int modelo, perfil, opseguro, opacs, acessorio,seguro, diae,mese,anoe,diad,mesd,anod, ops[3];
    int diad2, mesd2, anod2;
    float vtotal
};
struct locacao rent[20];

struct parceiro
{
    int desconto, perfil;
    char nome[35];
};
struct parceiro parc[10];

struct campanhas
{
    int incide, desconto, faixaid, faixadias, faixaloc, op;
    char campanha[30], premio[50];
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

    int i, x, y, op, qtdveiculo, qtdseguro, qtdacs, senha;
    int somadia, total;
    float desconto, ttveiculo, ttacs, ttdesconto, ttseguro, faturamento, arredonda, ttarredonda, ttestorno, ttmulta;
    char matricula[10];
    char locatario[10];
    int vetcliente[10];
    int vetveiculo[20];
    int vetfunc[10];
    int vetrent[20];
    int vetunid[10];
    int vetparc[10];
    int vetcamp[10];
    int vetpreco[10];
    int vetperfil [5];
    int vetacs[4];
    int vetseguro[4];
    int vetops[4];
    int vetmes[12];
    vetmes[0] = 0;
    vetmes[1] = 31;
    vetmes[2] = 28;
    vetmes[3] = 31;
    vetmes[4] = 30;
    vetmes[5] = 31;
    vetmes[6] = 30;
    vetmes[7] = 31;
    vetmes[8] = 31;
    vetmes[9] = 30;
    vetmes[10] = 31;
    vetmes[11] = 30;
    vetmes[12] = 31;
    desconto = 0;
    ttveiculo = 0;
    ttacs = 0;
    ttdesconto = 0;
    ttseguro = 0;
    faturamento = 0;
    qtdveiculo = 0;
    qtdseguro = 0;
    qtdacs = 0;
    arredonda = 0;
    ttarredonda = 0;
    ttestorno = 0;
    ttmulta = 0;

    for(i=0; i<=20; i++)
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
    cliente[i].op = 2;
    cliente[i].parceiro = 0;
    cliente[i].sexo = 2;
    strcpy(cliente[i].cpf, "297.179.008-84");
    vetcliente[i] = 1;

    i = i + 1;
    strcpy(cliente[i].nome, "Claudia Helena Zoppelli");
    cliente[i].idade = 35;
    cliente[i].sexo = 1;
    cliente[i].op = 1;
    cliente[i].parceiro = 1;
    strcpy(cliente[i].cpf, "123.123.123-23");
    vetcliente[i] = 1;

    i = i + 1;
    strcpy(cliente[i].nome, "Branca Jairo");
    cliente[i].idade = 50;
    cliente[i].sexo = 1;
    cliente[i].op = 1;
    cliente[i].parceiro = 3;
    strcpy(cliente[i].cpf, "987.654.321-11");
    vetcliente[i] = 1;

    i = i + 1;
    strcpy(cliente[i].nome, "Veronica Shermann");
    cliente[i].idade = 20;
    cliente[i].sexo = 1;
    cliente[i].op = 2;
    cliente[i].parceiro = 0;
    strcpy(cliente[i].cpf, "211.122.212-12");
    vetcliente[i] = 1;

//BASE DE VE�CULOS CADASTRADOS

    i = 0;
    carro[i].perfil = 2;
    carro[i].id = 1;
    strcpy(carro[i].modelo, "Hyundai HB20");
    strcpy(carro[i].placa, "ABC-2020");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 2;
    strcpy(carro[i].modelo, "Toyota Prius");
    carro[i].perfil = 6;
    strcpy(carro[i].placa, "AAA-1278");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 3;
    strcpy(carro[i].modelo, "Ford Onix");
    carro[i].perfil = 1;
    strcpy(carro[i].placa, "BBC-9988");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 4;
    strcpy(carro[i].modelo, "Ford Prisma");
    carro[i].perfil = 3;
    strcpy(carro[i].placa, "ABC-9088");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 5;
    strcpy(carro[i].modelo, "Hyundai HB20s");
    carro[i].perfil = 2;
    strcpy(carro[i].placa, "GGJ-9100");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 6;
    strcpy(carro[i].modelo, "Ford Prisma");
    carro[i].perfil = 3;
    strcpy(carro[i].placa, "ABB-3366");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 7;
    strcpy(carro[i].modelo, "Fiat Doblo");
    carro[i].perfil = 5;
    strcpy(carro[i].placa, "PQP-1234");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 8;
    strcpy(carro[i].modelo, "Toyota Prius");
    carro[i].perfil = 6;
    strcpy(carro[i].placa, "ABC-9876");
    vetveiculo[i] = 1;

    i = i + 1;
    carro[i].id = 9;
    strcpy(carro[i].modelo, "Ford Siena");
    carro[i].perfil = 4;
    strcpy(carro[i].placa, "PHP-9966");
    vetveiculo[i] = 1;

//BASE DE FUNCION�RIOS CADASTRADOS

    i = 0;
    strcpy(func[i].nome, "Camila Sousa");
    strcpy(func[i].cpf, "123.456.789-10");
    strcpy(func[i].matricula, "cami123");
    func[i].senha = 1234;
    strcpy(func[i].unid, "Congonhas");
    vetfunc[i] = 1;

        i = i + 1;
    strcpy(func[i].nome, "Rogerio Silva");
    strcpy(func[i].cpf, "123.456.789-10");
    strcpy(func[i].matricula, "roge123");
    func[i].senha = 1234;
    strcpy(func[i].unid, "Guarulhos");
    vetfunc[i] = 1;

    i = i + 1;
    strcpy(func[i].nome, "Claudia Helena");
    strcpy(func[i].cpf, "171.171.171-71");
    strcpy(func[i].matricula, "clau171");
    func[i].senha = 1234;
    strcpy(func[i].unid, "Guarulhos");
    vetfunc[i] = 1;

    i = i + 1;
    strcpy(func[i].nome, "Veronica Batata Doce");
    strcpy(func[i].cpf, "987.987.987-98");
    strcpy(func[i].matricula, "vero987");
    func[i].senha = 1234;
    strcpy(func[i].unid, "Congonhas");
    vetfunc[i] = 1;

    i = i + 1;
    strcpy(func[i].nome, "Branca Jairo");
    strcpy(func[i].cpf, "123.123.123-12");
    strcpy(func[i].matricula, "bran123");
    func[i].senha = 1234;
    strcpy(func[i].unid, "Congonhas");
    vetfunc[i] = 1;

    i = i + 1;
    strcpy(func[i].nome, "Elton Rodrigues");
    strcpy(func[i].cpf, "297.179.008-00");
    strcpy(func[i].matricula, "elto297");
    func[i].senha = 1010;
    strcpy(func[i].unid, "Congonhas");
    vetfunc[i] = 1;


//BASE DE UNIDADES CADASTRADOS

    i = 0;
    strcpy(unid[i].aeroporto, "Guarulhos");
    strcpy(unid[i].sigla, "CGR");
    strcpy(unid[i].cidade, "S�o Paulo");
    vetunid[i] = 1;

    i = i+1;
    strcpy(unid[i].aeroporto, "Congonhas");
    strcpy(unid[i].sigla, "CGH");
    strcpy(unid[i].cidade, "S�o Paulo");
    vetunid[i] = 1;

    i = i+1;
    strcpy(unid[i].aeroporto, "Santos Dummont");
    strcpy(unid[i].sigla, "STD");
    strcpy(unid[i].cidade, "Rio de Janeiro");
    vetunid[i] = 1;

//BASE DE CAMPANHAS E PROMO��ES CADASTRADOS

    i = 0;
//op � para desconto ou premio
    strcpy(camp[i].campanha, "Melhor idade");
    camp[i].op = 1;
    camp[i].incide = 1;
    camp[i].faixaid = 60;
    camp[i].desconto = 10;
    vetcamp[i] = 1;

    i = i + 1;
    strcpy(camp[i].campanha, "Tanque Cheio");
    camp[i].op = 2;
    camp[i].incide = 2;
    camp[i].faixadias = 7;
    strcpy(camp[i].premio, "Tanque cheio de gra�a");
    vetcamp[i] = 1;

    i = i + 1;
    strcpy(camp[i].campanha, "SOS Mata Atl�ntica");
    camp[i].op = 2;
    camp[i].incide = 3;
    camp[i].faixaloc = 3;
    strcpy(camp[i].premio, "Uma arvore ser� plantada");
    vetcamp[i] = 1;

    strcpy(camp[i].campanha, "Ingressos para teatro");
    i = i + 1;
    camp[i].op = 2;
    camp[i].incide = 3;
    camp[i].faixaloc = 5;
    strcpy(camp[i].premio, "Par de ingresso para o teatro");
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
    strcpy(parc[i].nome, "SESC");
    parc[i].desconto = 5;
    parc[i].perfil = 2;
    vetparc[i] = 1;

//BASE DE PRE�O DOS VE�CULOS CADASTRADOS

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

//acess�rios
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
    while (i!=0)
    {
        printf("\n\n          ****�REA DE LOGIN****\n\n");
        printf("                    LOGIN: ");
        gets(matricula);
        for(x=0; x<=10; x++)
        {
            i = strcmp(matricula, func[x].matricula);
            if (i == 0)
            {
                printf("           !!!   MATR�CULA V�LIDA   !!!\n");
                break;
            }

        }
        if (i != 0)
        {
            printf("     !!   LOGIN INV�LIDO   !!\n");
            getch();
            system("cls");
        }


    }
    while (y!=0)
    {

        printf("                 __________________________\n");
        printf("                   SENHA: ");
        scanf("%d",&senha);

//        op = strcmp(senha, func[x].senha);

        if (senha == func[x].senha)
        {
            printf("          !!!   SENHA V�LIDA   !!!\n");
            y = 0;
            getch();
            system("cls");
            break;
        }

        if (senha != func[x].senha)
        {
            printf("       !!   SENHA INV�LIDA   !!\n");
            getch();
        }


    }

    while (op != 5)
    {

        cabecalho();
        printf("\n___________________ PAINEL DE CONTROLE ____________________\n\n");
        printf("                    1 - CADASTRO\n\n");
        printf("                      2 - ALUGAR VEICULO\n\n");
        printf("                        3 - DEVOLU��O DE VE�CULO\n\n");
        printf("                          4 - RELAT�RIOS\n\n");
        printf("                            5 - SAIR\n");
        printf("\nESCOLHA UMA OP��O: ");
        scanf("%d",& op);
        while(op<1||op>5)
        {
            if(op<1 || op>5)
            {
                system("cls");
                cabecalho();
                printf("\n\n               OP��O INV�LIDA!\n\n");
                printf("\n___________________ PAINEL DE CONTROLE ____________________\n\n");
                printf("                    1 - CADASTRO\n\n");
                printf("                      2 - ALUGAR VEICULO\n\n");
                printf("                        3 - DEVOLU��O DE VE�CULO\n\n");
                printf("                          4 - RELAT�RIOS\n\n");
                printf("                            5 - SAIR\n");
                printf("\n\nESCOLHA UMA OP��O V�LIDA:");
                scanf("%d",& op);
            }
        }

        if (op==1)
        {
            //Op��o de cadastro, consulta e exclus�o do sistema
            while (op != 21)//||op<0||op>21)
            {
                system("cls");
                printf("----------------------------------------------------------\n");
                printf("********************* CADASTRO GERAL *********************\n");
                printf("----------------------------------------------------------\n\n");
                printf("                     _________________________________\n");
                printf("                    | CADASTRAR | VISUALIZAR | EXLUIR |\n");
                printf("                    |---------------------------------|\n");
                printf("           ClIENTE  |     1     |      2     |    3   |\n");
                printf("           VE�CULO  |     4     |      5     |    6   |\n");
                printf("       FUNCION�RIO  |     7     |      8     |    9   |\n");
                printf("          UNIDADES  |    10     |     11     |   12   |\n");
                printf("      PARCEIRO/ONG  |    13     |     14     |   15   |\n");
                printf(" PROMO��O/CAMPANHA  |    16     |     17     |   18   |\n");
                printf("             PRE�O  |    19     |     20     |        |\n");
                printf("                    |---------------------------------|\n");
                printf("             SAIR - 21\n\n");
                printf("ESCOLHA UMA OP��O: ");
                scanf("%d",& op);

                /*        if(op<1 || op>21)
                    {
                        printf("\n\nOP��O INV�LIDA!");
                        printf("\n\nESCOLHA UMA OP��O V�LIDA:");
                        scanf("%d",& op);
                        system("cls");
                    }*/

                switch (op)
                {

                case 21:
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

                    printf("Atua em empresas ou ONG's parceiras?\n");
                    printf("(1 - SIM e 2 - N�O): ");
                    scanf("%d",&cliente[i].op);

                    if(cliente[i].op == 1)
                    {
                        printf("\n");
                        for(x=0; x<=9; x++)
                        {
                            if(vetparc[x] == 1)
                            {
                                printf("  ID %d - ", x + 1);
                                printf("%s ",parc[x].nome);
                                printf("\n       %d",parc[x].desconto);
                                printf("%%");
                                printf(" DE DESCONTO");
                                printf(" - PERFIL: ");

                                if(parc[x].perfil==1)
                                {
                                    printf("ONG\n");
                                }
                                else
                                {
                                    printf("PARCEIRO\n");
                                }
                            }
                        }
                        printf("\nDigite o n�mero da empresa ou ONG: ");
                        scanf("%d",&cliente[x].parceiro);
                    }
                    if(cliente[i].op == 2)
                    {
                        cliente[i].parceiro = 0;
                    }



                    vetcliente[i] = 1;
                    system("cls");

                    printf("----------------------------------------------------------------\n");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf(" ID |      CPF       | SEXO |  IDADE  | PARCEIRO |       NOME         ");
                    printf("\n  %d | ", i + 1);
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
                    if(cliente[i].op==1)
                    {
                        printf("   SIM   | ");
                    }
                    else
                    {
                        printf("   N�O   | ");
                    }
                    printf("%s\n",cliente[i].nome);
                    getch();
                    break;

//VISUALIZAR CLIENTE
                case 2:
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("****************** VISUALIZAR CADASTRO *******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("                  RELA��O DE CLIENTES\n");
                    printf("                  -------------------\n\n");
                    printf(" ID |      CPF       | SEXO |  IDADE  | PARCEIRO |       NOME         ");
                    for(i=0; i<=9; i++)
                    {
                        if(vetcliente[i] == 1)
                        {
                            printf("\n  %d | ", i + 1);
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
                            if(cliente[i].op==1)
                            {
                                printf("   SIM   | ");
                            }
                            else
                            {
                                printf("   N�O   | ");
                            }
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

                    printf(" ID |      CPF       | SEXO |  IDADE  | PARCEIRO |       NOME         ");

                    for(i=0; i<=9; i++)
                    {
                        if(vetcliente[i] == 1)
                        {
                            printf("\n  %d | ", i + 1);
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
                            if(cliente[i].op==1)
                            {
                                printf("   SIM   | ");
                            }
                            else
                            {
                                printf("   N�O   | ");
                            }

                            printf("%s",cliente[i].nome);
                        }
                    }
                    printf("\n\nFavor informar o ID que deseja excluir: ");
                    scanf("%d", &op);
                    op = op-1;

                    for(i=0; i<=10; i++)
                    {
                        if(i==op)
                        {
                            vetcliente[op] = 2;
                        }
                    }
                    op = 0;
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* EXCLUIR CLIENTE ********************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf(" ID |      CPF       | SEXO |  IDADE  | PARCEIRO |       NOME         ");

                    for(i=0; i<=9; i++)
                    {
                        if(vetcliente[i] == 1)
                        {
                            printf("\n  %d | ", i + 1);
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
                            if(cliente[i].op==1)
                            {
                                printf("   SIM   | ");
                            }
                            else
                            {
                                printf("   N�O   | ");
                            }
                            printf("%s",cliente[i].nome);
                        }
                    }
                    printf("\n\n      Item exclu�do com sucesso\n");
                    getch();
                    break;

                    system("cls");

//CADASTRAR VE�CULOS
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

                    printf("             PERFIL DO AUTOM�VEL ");
                    printf("\n\n  1 - GRUPO A - Econ�mico/1.0/ ar condicionado/ portas ");
                    printf("\n                el�tricas com travas, e dire��o hidra�lica.");
                    printf("\n\n  2 - GRUPO B - Econ�mico/1.0/ com Ar condicionado/Portas");
                    printf("\n                el�tricas com travas, dire��o hidra�lica e ");
                    printf("\n                freios ABS/Air bag.");
                    printf("\n\n  3 - GRUPO C - Sedan Completo/1.4/Vidros e portas eletricas");
                    printf("\n                com trava/4 malas, freios ABS e Ar Bag.");
                    printf("\n\n  4 - GRUPO D - Sedan Autom�tico/1.6/Vidros e Portas El�tricas");
                    printf("\n                com trava/4 malas, freios ABS e Airbag.");
                    printf("\n\n  5 - GRUPO E -  Motor 1.8/Vidros e Portas El�tricas com trava");
                    printf("\n                 5 lugares/ freios ABS/Air Bag e Autom�tico.");
                    printf("\n\n  6 - GRUPO F - Ve�culos hibridos/ luxo");

                    printf("\n\nFavor classificar o perfil do ve�culo: ");
                    scanf("%d",&carro[i].perfil);

                    fflush(stdin);
                    printf("\n\nQual o modelo do ve�culo.: ");
                    gets(carro[i].modelo);

                    printf("\n\nInforme a Placa..........: ");
                    gets(carro[i].placa);

                    carro[i].id = i + 1;
                    vetveiculo[i] = 1;
                    system("cls");

                    printf("----------------------------------------------------------------\n");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf(" ID | PERFIL |   PLACA   | MODELO");
                    printf("\n  %d | ",carro[i].id);
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

//VISUALIZAR VE�CULOS
                case 5:
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("****************** VISUALIZAR CADASTRO *******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("           RELA��O DE VE�CULOS\n");
                    printf("           -------------------\n\n");
                    printf(" ID | PERFIL |   PLACA   | MODELO");
                    for(i=0; i<=19; i++)
                    {
                        if(vetveiculo[i] == 1)
                        {
                            if(carro[i].perfil==1)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   A   |  ");
                            }
                            if(carro[i].perfil==2)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   B   |  ");
                            }
                            if(carro[i].perfil==3)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   C   |  ");
                            }
                            if(carro[i].perfil==4)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   D   |  ");
                            }
                            if(carro[i].perfil==5)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   E   |  ");
                            }
                            if(carro[i].perfil==6)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   F   |  ");
                            }

                            printf("%s |",carro[i].placa);
                            printf("  %s",carro[i].modelo);

                        }

                    }
                    getch();
                    break;

//EXCLUIR VE�CULOS

                case 6:

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* EXCLUIR VE�CULO ********************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf(" ID | PERFIL |   PLACA   | MODELO");

                    for(i=0; i<=20; i++)
                    {
                        if(vetveiculo[i] == 1)
                        {
                            if(carro[i].perfil==1)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   A   |  ");
                            }
                            if(carro[i].perfil==2)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   B   |  ");
                            }
                            if(carro[i].perfil==3)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   C   |  ");
                            }
                            if(carro[i].perfil==4)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   D   |  ");
                            }
                            if(carro[i].perfil==5)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   E   |  ");
                            }
                            if(carro[i].perfil==6)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   F   |  ");
                            }

                            printf("%s |",carro[i].placa);
                            printf("  %s ",carro[i].modelo);
                        }
                    }
                    printf("\n\nInforme o ID do ve�culo que deseja excluir: ");
                    scanf("%d", &op);
                    op = op-1;

                    for(i=0; i<=10; i++)
                    {
                        if(i==op)
                        {
                            vetveiculo[op] = 2;
                        }
                    }
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* EXCLUIR VEICULO ********************\n");
                    printf("----------------------------------------------------------\n\n");


                    printf(" ID | PERFIL |   PLACA   | MODELO");
                    for(i=0; i<=20; i++)
                    {
                        if(vetveiculo[i] == 1)
                        {

                            if(carro[i].perfil==1)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   A   |  ");
                            }
                            if(carro[i].perfil==2)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   B   |  ");
                            }
                            if(carro[i].perfil==3)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   C   |  ");
                            }
                            if(carro[i].perfil==4)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   D   |  ");
                            }
                            if(carro[i].perfil==5)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   E   |  ");
                            }
                            if(carro[i].perfil==6)
                            {
                                printf("\n  %d | ", carro[i].id);
                                printf("   F   |  ");
                            }

                            printf("%s |",carro[i].placa);
                            printf("  %s ",carro[i].modelo);
                        }
                    }
                    printf("\n\n      Item exclu�do com sucesso\n");
                    getch();

                    break;
                    system("cls");

                //CADASTRAR FUNCION�RIO
                case 7:

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("************** CADASTRAR NOVO FUNCION�RIO ****************\n");
                    printf("----------------------------------------------------------\n\n");
                    i = 0;
                    while(vetfunc[i]!=0)
                    {
                        i = i+1;
                    }
                    fflush(stdin);

                    printf("Digite o nome.................: ");
                    gets(func[i].nome);

                    for(x=0; x<=3; x++)
                    {
                        func[i].matricula[x] = func[i].nome[x];
                    }

                    printf("Digite o CPF..................: ");
                    gets(func[i].cpf);

                    for(x=0; x<=2; x++)
                    {
                        func[i].matricula[x+4] = func[i].cpf[x];
                    }

                    printf("Ir� atuar na unidade de.......:");
                    gets(func[i].unid);

                    printf("Escolha uma senha n�merica....:");
                    scanf("d",&func[i].senha);

                    vetfunc[i] = 1;
                    system("cls");

                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf("\nID: %d - ", i + 1);
                    printf("%s",func[i].nome);
                    printf("\n        MATRICULA: %s - ",func[i].matricula);
                    printf("UNIDADE: %s\n",func[i].unid);
                    printf("        CPF: %s",func[i].cpf);
                    getch();
                    break;

//VISUALIZAR FUNCION�RIO
                case 8:
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("****************** VISUALIZAR CADASTRO *******************\n");
                    printf("----------------------------------------------------------\n");

                    printf("\n\n                  RELA��O DE FUNCION�RIOS\n");
                    printf("                      -----------------------\n");
                    for(i=0; i<=9; i++)
                    {
                        if(vetfunc[i] == 1)
                        {
                            printf("\nID: %d | ", i + 1);
                            printf("%s",func[i].nome);
                            printf("\n        MATRICULA: %s | ",func[i].matricula);
                            printf("UNIDADE: %s\n",func[i].unid);
                            printf("        CPF: %s\n",func[i].cpf);

                        }
                    }
                    getch();
                    break;

//EXCLUIR FUNCION�RIO

                case 9:

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("******************* EXCLUIR FUNCION�RIO ******************\n");
                    printf("----------------------------------------------------------\n\n");

                    for(i=0; i<=9; i++)
                    {
                        if(vetfunc[i] == 1)
                        {
                            printf("\n %d - ", i + 1);
                            printf("%s",func[i].nome);
                            printf("\n        MATRICULA: %s - ",func[i].matricula);
                            printf("UNIDADE: %s\n",func[i].unid);
                            printf("        CPF: %s\n",func[i].cpf);
                        }
                    }
                    printf("\n\nFavor informar o ID que deseja excluir: ");
                    scanf("%d", &op);
                    op = op-1;

                    for(i=0; i<=9; i++)
                    {
                        if(i==op)
                        {
                            vetfunc[op] = 2;
                        }
                    }
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("******************* EXCLUIR FUNCION�RIO ******************\n");
                    printf("----------------------------------------------------------\n\n");

                    for(i=0; i<=9; i++)
                    {
                        if(vetfunc[i] == 1)
                        {
                            printf("\n %d | ", i + 1);
                            printf("%s",func[i].nome);
                            printf("\n        MATRICULA: %s | ",func[i].matricula);
                            printf("UNIDADE: %s\n",func[i].unid);
                            printf("        CPF: %s\n",func[i].cpf);
                        }
                    }
                    printf("\n\n      Item exclu�do com sucesso\n");
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
                    printf("  %d |", i + 1);
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

                    for(x=0; x<=9; x++)
                    {
                        if(vetunid[x] == 1)
                        {
                            printf("  %d |", x + 1);
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

                    for(x=0; x<=10; x++)
                    {
                        if(vetunid[x] == 1)
                        {
                            printf("  %d |", x + 1);
                            printf("  %s ",unid[x].sigla);
                            printf("    %s",unid[x].aeroporto);
                            printf(" - %s\n",unid[x].cidade);
                        }
                    }
                    printf("\n\nFavor informar o ID que deseja excluir: ");
                    scanf("%d", &op);
                    op = op-1;

                    for(x=0; x<=10; x++)
                    {
                        if(x==op)
                        {
                            vetunid[op] = 2;
                        }
                    }
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* EXCLUIR UNIDADE ********************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf(" ID | SIGLA    AEROPORTO/CIDADE\n");

                    for(x=0; x<=10; x++)
                    {
                        if(vetunid[x] == 1)
                        {
                            printf("  %d |", x + 1);
                            printf("  %s ",unid[x].sigla);
                            printf("    %s",unid[x].aeroporto);
                            printf(" - %s\n",unid[x].cidade);
                        }
                    }
                    printf("\n\n      Unidade exclu�da com sucesso\n");
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
                    printf("        Digite a raz�o social..: ");
                    gets(parc[i].nome);

                    printf("\n\nQual a classifica��o da institui��o?\n");
                    printf("           1-ONG's | 2-PARCEIRO: ");
                    scanf("%d",&parc[i].perfil);

                    printf("\n\nDigite o perceitual de desconto: ");
                    scanf("%d",&parc[i].desconto);

                    vetparc[i] = 1;
                    system("cls");

                    printf("----------------------------------------------------------------\n");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf("ID %d - ", i + 1);
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

                    for(i=0; i<=9; i++)
                    {
                        if(vetparc[i] == 1)
                        {
                            printf("ID %d - ", i + 1);
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


                    for(i=0; i<=10; i++)
                    {
                        if(vetparc[i] == 1)
                        {
                            printf("ID %d - ", i + 1);
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

                    for(x=0; x<=10; x++)
                    {
                        if(x==op)
                        {
                            vetparc[op] = 2;
                        }
                    }
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* EXCLUIR PARCEIRO ********************\n");
                    printf("----------------------------------------------------------\n\n");

                    for(i=0; i<=10; i++)
                    {
                        if(vetparc[i] == 1)
                        {
                            printf("ID %d - ", i + 1);
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
                    printf("\n\n      Item exclu�do com sucesso\n");
                    getch();
                    op = 0;
                    break;
                    system("cls");


//CADASTRAR PROMO��ES
                case 16:

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("*********** CADASTRAR PROMO��ES\CAMPANHAS ****************\n");
                    printf("----------------------------------------------------------\n\n");
                    i = 0;
                    while(vetcamp[i]!=0)
                    {
                        i = i+1;
                    }

                    fflush(stdin);
                    printf(" Digite o nome da campanha..: ");
                    gets(camp[i].campanha);

                    printf("\n\n Em qual par�metro a campanha ir� se basear?\n\n");
                    printf(" 1-IDADE | 2-DIAS DE LOCA��O | 3-QUANTIDADE DE LOCA��ES: ");
                    scanf("%d",&camp[i].incide);
                    if(camp[i].incide == 1)
                    {
                        printf("Digite a idade para o programa: ");
                        scanf("%d",&camp[i].faixaid);
                    }
                    if(camp[i].incide == 2)
                    {
                        printf("Quantos dias para ter direito ao programa: ");
                        scanf("%d",&camp[i].faixadias);
                    }
                    if(camp[i].incide == 3)
                    {
                        printf("Qual o total loca��es para ter direito ao programa: ");
                        scanf("%d",&camp[i].faixaloc);
                    }
                    printf("\n\n Qual o beneficio da campanha?");
                    printf("\n 1-DESCONTO | 2-PR�MIO: ");
                    scanf("%d",&camp[i].op);
                    if(camp[i].op==1)
                    {
                        printf("\n\n Digite o percentual de desconto: ");
                        scanf("%d",&camp[i].desconto);
                    }
                    if(camp[i].op==2)
                    {
                        fflush(stdin);
                        printf("\n\n Digite qual o premio o cliente ir� ganhar: ");
                        gets(camp[i].premio);
                    }

                    vetcamp[i] = 1;
                    system("cls");

                    printf("----------------------------------------------------------------\n");
                    printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                    printf("                   ID: %d\n", i + 1);
                    printf("             CAMPANHA: %s\n",camp[i].campanha);
                    printf("            PAR�METRO: ");

                    if(camp[i].incide==1)
                    {
                        printf("A partir de %d anos\n",camp[i].faixaid);
                    }
                    if(camp[i].incide==2)
                    {
                        printf("A partir de %d dias\n",camp[i].faixadias);
                    }
                    if(camp[i].incide==3)
                    {
                        printf("A partir de %d loca��es\n",camp[i].faixaloc);
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

//VISUALIZAR PROMO��ES E CAMPANHAS
                case 17:
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("************ VISUALIZAR PROMO��ES\CAMPANHAS **************\n");
                    printf("----------------------------------------------------------\n\n");

                    for(x=0; x<=9; x++)
                    {
                        if(vetcamp[x] == 1)
                        {
                            printf("                   ID: %d\n", x + 1);
                            printf("             CAMPANHA: %s\n",camp[x].campanha);
                            printf("            PAR�METRO: ");

                            if(camp[x].incide==1)
                            {
                                printf("A partir de %d anos\n",camp[x].faixaid);
                            }
                            if(camp[x].incide==2)
                            {
                                printf("A partir de %d dias\n",camp[x].faixadias);
                            }
                            if(camp[x].incide==3)
                            {
                                printf("A partir de %d loca��es\n",camp[x].faixaloc);
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
                    printf("************** EXCLUIR PROMO��ES\CAMPANHAS ***************\n");
                    printf("----------------------------------------------------------\n\n");


                    for(x=0; x<=10; x++)
                    {
                        if(vetcamp[x] == 1)
                        {
                            printf("                   ID: %d\n", x + 1);
                            printf("             CAMPANHA: %s\n",camp[x].campanha);
                            printf("            PAR�METRO: ");
                            if(camp[x].incide==1)
                            {
                                printf("A partir de %d anos\n",camp[x].faixaid);
                            }
                            if(camp[x].incide==2)
                            {
                                printf("A partir de %d dias\n",camp[x].faixadias);
                            }
                            if(camp[x].incide==3)
                            {
                                printf("A partir de %d loca��es\n",camp[x].faixaloc);
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

                    for(x=0; x<=10; x++)
                    {
                        if(x==op)
                        {
                            vetcamp[op] = 2;
                        }
                    }
                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* EXCLUIR PARCEIRO ********************\n");
                    printf("----------------------------------------------------------\n\n");

                    for(x=0; x<=10; x++)
                    {
                        if(vetcamp[x] == 1)
                        {
                            printf("                  ID: %d\n", x + 1);
                            printf("            CAMPANHA: %s\n",camp[x].campanha);
                            printf("          PAR�METRO: ");
                            if(camp[x].incide==1)
                            {
                                printf("A partir de %d anos\n",camp[x].faixaid);
                            }
                            if(camp[x].incide==2)
                            {
                                printf("A partir de %d dias\n",camp[x].faixadias);
                            }
                            if(camp[x].incide==3)
                            {
                                printf("A partir de %d loca��es\n",camp[x].faixaloc);
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
                    printf("\n\n      Item exclu�do com sucesso\n");
                    getch();
                    op = 0;
                    break;
                    system("cls");

//CADASTRAR PRE�O
                case 19:

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************** CADASTRAR PRE�O *******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("            1 - VEICULOS\n\n");
                    printf("              2 - OPCIONAIS\n\n");
                    printf("                3 - SEGURO\n\n");
                    printf("   Favor digitar a op��o desejada: ");
                    scanf("%d",&op);

                    if(op == 1)
                    {

                        system("cls");
                        printf("----------------------------------------------------------\n");
                        printf("********************** CADASTRAR PRE�O *******************\n");
                        printf("----------------------------------------------------------\n\n");

                        printf("\n\n  1 - GRUPO A");
                        printf("\n  2 - GRUPO B");
                        printf("\n  3 - GRUPO C");
                        printf("\n  4 - GRUPO D");
                        printf("\n  5 - GRUPO E");
                        printf("\n  6 - GRUPO F\n");
                        printf("\nFavor digitar a op��o desejada: ");
                        scanf("\n%d",&op);

                        for(i=0; i<=5; i++)
                        {
                            if(preco[i].perfil == op)
                            {

                                printf("\n\n Informe o custo de loca��o: ");
                                scanf("%f",&preco[i].pperfil);

                                system("cls");
                                printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                                printf(" PERFIL DO VE�CULO: ");
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
                                printf("\n         CUSTO DE LOCA��O: %.2f",preco[i].pperfil);
                            }
                        }
                        vetperfil[i] = 1;
                        getch();
                        break;
                    }

                    //CADASTRAR OS OPCIONAIS
                    if(op==2)
                    {
                        system("cls");
                        printf("----------------------------------------------------------\n");
                        printf("********************** CADASTRAR PRE�O *******************\n");
                        printf("----------------------------------------------------------\n\n");

                        printf("\n  7 - CADEIRINHA DE BEB�");
                        printf("\n  8 - GPS");
                        printf("\n  9 - WIFI\n");
                        printf("\n\nFavor digitar a op��o desejada: ");
                        scanf("%d",&op);

                        for(i=0; i<=9; i++)
                        {
                            if(preco[i].acs == op)
                            {
                                printf("\n\n Informe o custo do acess�rio: ");
                                scanf("%f",&preco[i].pacs);

                                system("cls");
                                printf("                     CADASTRO REALIZADO COM SUCESSO\n\n");
                                printf(" OPCIONAL CADASTRADO: ");

                                if(preco[i].acs == 7)
                                {
                                    printf("CADEIRINHA DE BEB�");
                                }
                                if(preco[i].acs == 8)
                                {
                                    printf("GPS");
                                }
                                if(preco[i].acs == 9)
                                {
                                    printf("WIFI");
                                }
                                printf("\n     CUSTO DO ACESS�RIO: %.2f",preco[i].pacs);
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
                        printf("********************** CADASTRAR PRE�O *******************\n");
                        printf("----------------------------------------------------------\n\n");

                        printf("\n  10 - GRUPO A OU B");
                        printf("\n  11 - GRUPO C OU D");
                        printf("\n  12 - GRUPO E OU F\n");
                        printf("\n\nQual o grupo que deseja alterar? ");
                        scanf("%d",&op);

                        for(i=0; i<=2; i++)
                        {
                            if(preco[i].seguro == op)
                            {
                                printf("\n\n Informe o novo valor do seguro: ");
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


//CADASTRAR VISUALIZAR PRE�OS CADASTRADOS

                case 20:

                    system("cls");
                    printf("----------------------------------------------------------\n");
                    printf("********************* PAINEL DE VALORES ******************\n");
                    printf("----------------------------------------------------------\n\n");

                    printf("                       CUSTO DA LOCA��O \n\n");
                    for(x=0; x<=2; x++)
                    {
                        if (vetperfil[x] == 1)
                        {
                            printf("  Grupo ");
                            if(preco[x].perfil == 1)
                            {
                                printf("A:");
                            }
                            if(preco[x].perfil == 2)
                            {
                                printf("B:");
                            }
                            if(preco[x].perfil == 3)
                            {
                                printf("C:");
                            }
                            printf(" %.2f   ", preco[x].pperfil);
                        }
                    }
                    printf("\n\n");
                    for(x=3; x<=5; x++)
                    {
                        if (vetperfil[x] == 1)
                        {
                            printf("  Grupo ");

                            if(preco[x].perfil == 4)
                            {
                                printf("D:");
                            }
                            if(preco[x].perfil == 5)
                            {
                                printf("E:");
                            }
                            if(preco[x].perfil == 6)
                            {
                                printf("F:");
                            }
                            printf(" %.2f   ", preco[x].pperfil);
                        }
                    }
                    printf("\n\n\n                          OPCIONAIS \n\n");
                    for(x=0; x<=2; x++)
                    {
                        if (vetacs[x] == 1)
                        {
                            if(preco[x].acs == 7)
                            {
                                printf("   ASSENTO DE BEB�");
                                printf(": %.2f",preco[x].pacs);
                            }
                            if(preco[x].acs == 8)
                            {
                                printf("    GPS");
                                printf(": %.2f",preco[x].pacs);
                            }
                            if(preco[x].acs == 9)

                            {
                                printf("    WIFI");
                                printf(": %.2f\n",preco[x].pacs);
                            }

                        }
                    }

                    printf("\n\n                           SEGUROS \n\n");
                    for(x=0; x<=3; x++)
                    {
                        if (vetseguro[x] == 1)
                        {
                            if(preco[x].seguro == 10)
                            {
                                printf("      BASIC");
                                printf(": %.2f",preco[x].pseguro);
                            }
                            if(preco[x].seguro == 11)
                            {
                                printf("      FLEX");
                                printf(": %.2f",preco[x].pseguro);
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
        } // while do menu principal
        if (op == 2)//PROCESSO DE LOCA��O DE VE�CULO
        {
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** PROCESSO DE LOCA��O *******************\n");
            printf("----------------------------------------------------------\n");
            i = 0;
            y = 0;
            while(vetrent[y]!=0)
            {
                y = y+1;
            }
            x=1;
            op=1;
            while(x!=0)
            {
                printf("\n                   DADOS DO CLIENTE\n\n");
                fflush(stdin);
                printf("Identifique o cliente (nome, CPF): ");
                gets(locatario);
                for(i=0; i<=20; i++)
                {
                    x = strcmp(locatario, cliente[i].nome);
                    op = strcmp(locatario, cliente[i].cpf);
                    if(x==0 || op==0)
                    {
                        system("cls");
                        cabecalho();
                        printf("\n                DADOS DO CLIENTE\n\n");
                        printf(" CLIENTE: %s",cliente[i].nome);
                        printf(" - CPF: %s\n",cliente[i].cpf);
                        strcpy(rent[y].cliente, cliente[i].nome);
                    //    if(cliente[i].op == 1);
                       // {
                            if(cliente[i].op == 1)
                            {
                                printf(" PARCEIRO: ");
                                printf("%s ",parc[i].nome);
                                printf(" %d",parc[i].desconto);
                                printf("%%");
                                printf(" DE DESCONTO ");
                                getch();
                                break;
                            }//if
                        //}//for
                        if(cliente[i].op == 2);
                        {
                            printf("PARCEIRO: N�O\n");
                            x=0;
                            break;
                        }
                    }//if
                }//for
                if(x!= 0 && op!=0)
                {
                    printf(" CLIENTE N�O LOCALIZADO! TENTE NOVAMENTE");
                    getch();
                    system("cls");
                }
            }
            //Definindo o periodo de loca��o
            printf("\n\n");
            printf(" ****ALUGANDO UM VEICULO***\n\n");
            printf(" RETIRADA DO VEICULO?\n");
            printf(" Dia: ");
            scanf("%d",&rent[y].diae);
            while(rent[y].diae < 1 || rent[y].diae > 31)
            {
                printf("\n ATEN��O! Digite um valor v�lido.");
                printf("\n Dia: ");
                scanf("%d",&rent[y].diae);
            }
            printf(" M�s: ");
            scanf("%d",&rent[y].mese);
            while(rent[y].mese < 1 || rent[y].mese > 12)
            {
                printf("\n ATEN��O! Digite um valor v�lido.");
                printf("\n M�s: ");
                scanf("%d",&rent[y].mese);
            }
            printf(" Ano: ");
            scanf("%d",&rent[y].anoe);
            printf("\n DEVOLU��O DO VEICULO?\n\n");
            printf(" Dia: ");
            scanf("%d",&rent[y].diad);
            while(rent[y].diad < 1 || rent[y].diad > 31)
            {
                printf("\n ATEN��O! Digite um valor v�lido.");
                printf("\n Dia: ");
                scanf("%d",&rent[y].diad);
            }
            printf(" M�s: ");
            scanf("%d",&rent[y].mesd);
            while(rent[y].mesd < 1 || rent[y].mesd > 31)
            {
                printf("\n ATEN��O! Digite um valor v�lido.");
                printf("\n M�s: ");
                scanf("%d",&rent[y].mesd);
            }
            printf(" Ano: ");
            scanf("%d",&rent[y].anod);

            if(rent[y].anoe % 4 == 0 || rent[y].anod % 4 == 0)
            {
                vetmes[2] = 29;
            }
            if(rent[y].mese == rent[y].mesd && rent[y].anoe == rent[y].anod)
            {
                total = rent[y].diad-rent[y].diae;
            }
            op = rent[y].mesd - rent[y].mese;
            if(op >0)
            {
                total = vetmes[rent[y].mese] - rent[y].diae;

                for(x-0; x==op; x++)
                {
                    total = total + vetmes[rent[y].mese+1];

                }
                total=total+rent[y].diad;
            }
            printf("\n ***O PER�ODO DE LOCA��O: %d DIAS.",total);
            getch();
            system("cls");

            //escolha do veiculo
            printf("----------------------------------------------------------\n");
            printf("****************** PROCESSO DE LOCA��O *******************\n");
            printf("----------------------------------------------------------\n");
            printf("\n -----------------------------------------------------------");
            printf("\n      Custo: %.2f", preco[0].pperfil);
            printf("\n  1 - GRUPO A - Econ�mico/1.0/ar condicionado/ portas ");
            printf("\n                el�tricas com travas, e dire��o hidra�lica.");
            printf("\n -----------------------------------------------------------");
            printf("\n      Custo: %.2f", preco[1].pperfil);
            printf("\n  2 - GRUPO B - Econ�mico/1.0/ar condicionado/Portas el�tricas");
            printf("\n                dire��o hidra�lica e freios ABS/Air bag.");
            printf("\n -----------------------------------------------------------");
            printf("\n      Custo: %.2f", preco[2].pperfil);
            printf("\n  3 - GRUPO C - Sedan Completo/1.4/Vidros e portas eletricas");
            printf("\n                com trava/4 malas, freios ABS e Ar Bag.");
            printf("\n -----------------------------------------------------------");
            printf("\n      Custo: %.2f", preco[3].pperfil);
            printf("\n  4 - GRUPO D - Sedan Autom�tico/1.6/Vidros e Portas El�tricas");
            printf("\n                com trava/4 malas, freios ABS e Airbag.");
            printf("\n -----------------------------------------------------------");
            printf("\n      Custo: %.2f", preco[4].pperfil);
            printf("\n  5 - GRUPO E -  Motor 1.8/Vidros e Portas El�tricas com trava");
            printf("\n                 5 lugares/ freios ABS/Air Bag e Autom�tico.");
            printf("\n -----------------------------------------------------------");
            printf("\n      Custo: %.2f", preco[5].pperfil);
            printf("\n  6 - GRUPO F - Ve�culos hibridos/ luxo");
            printf("\n -----------------------------------------------------------");
            printf("\n Qual o grupo de ve�culo que deseja alugar: ");
            scanf("%d",&rent[y].perfil);
            op = rent[y].perfil - 1;
            rent[y].vtotal = rent[y].vtotal + preco[op].pperfil*total;
            system("cls");
            cabecalho();
            printf("           MODELOS DISPON�VEIS\n");
            printf("           -------------------\n\n");
            printf(" ID | PERFIL |   PLACA   | MODELO");
            for(x=0; x<=19; x++)
            {
                if(vetveiculo[x] == 1)
                {
                    if(rent[y].perfil == carro[x].perfil)
                    {
                        if(carro[x].perfil==1)
                        {
                            printf("\n  %d | ", carro[x].id);
                            printf("   A   |  ");
                        }
                        if(carro[x].perfil==2)
                        {
                            printf("\n  %d | ", carro[x].id);
                            printf("   B   |  ");
                        }
                        if(carro[x].perfil==3)
                        {
                            printf("\n  %d | ", carro[x].id);
                            printf("   C   |  ");
                        }
                        if(carro[x].perfil==4)
                        {
                            printf("\n  %d | ", carro[x].id);
                            printf("   D   |  ");
                        }
                        if(carro[x].perfil==5)
                        {
                            printf("\n  %d | ", carro[x].id);
                            printf("   E   |  ");
                        }
                        if(carro[x].perfil==6)
                        {
                            printf("\n  %d | ", carro[x].id);
                            printf("   F   |  ");
                        }
                        printf("%s |",carro[x].placa);
                        printf("  %s ",carro[x].modelo);

                    }
                }
            }
            printf("\n\n Escolha o ve�culo: ");
            scanf("%d",&rent[y].modelo);
            op = rent[y].modelo - 1;
            vetveiculo[op] = 3;

            //SEGURO
            printf("\n\n                   SEGURO\n\n");
            if(rent[y].perfil == 1 ||rent[y].perfil == 2)
            {
                printf(" Temos o seguro ideal para o perfil de ve�culo escolhido: BASIC");
                printf("\n Gostaria de aderir ao custo de R$$ %.2f",preco[0].pseguro);
                printf("\n <1-SIM ou 2-N�o>: ");
                scanf("%d",&rent[y].opseguro);
                while(rent[y].opseguro < 1 || rent[y].opseguro > 2)
                {
                    printf("ATEN��O! Escolha uma op��o v�lida\n");
                    printf("\n <1-SIM ou 2-N�o>: ");
                    scanf("%d",&rent[y].opseguro);
                }
                if(rent[y].opseguro == 1)
                {
                    rent[y].seguro = 1;
                    rent[y].vtotal = rent[y].vtotal + preco[0].pseguro;
                }

            }
            if(rent[y].perfil == 3 || rent[y].perfil == 4)
            {
                printf("Temos o seguro ideal para o perfil do ve�culo escolhido: FLEX");
                printf("\nGostaria de aderir ao custo de: R$$ %.2f",preco[1].pseguro);
                printf("\n<1-SIM ou 2-N�o>: ");
                scanf("%d",&rent[y].opseguro);
                while(rent[y].opseguro < 1 || rent[y].opseguro > 2)
                {
                    printf("ATEN��O! Escolha uma op��o v�lida\n");
                    printf("\n <1-SIM ou 2-N�o>: ");
                    scanf("%d",&rent[y].opseguro);
                }
                if(rent[y].opseguro == 1)
                {
                    rent[y].seguro = 2;
                    rent[y].vtotal = rent[y].vtotal + preco[1].pseguro;
                }
            }
            if(rent[y].perfil == 5 || rent[y].perfil == 6)
            {
                printf("Temos o seguro ideal para o perfil do ve�culo escolhido: PLUS");
                printf("\nGostaria de aderir ao custo de: R$$ %.2f",preco[2].pseguro);
                printf("\n<1-SIM ou 2-N�o>: ");
                scanf("%d",&rent[y].opseguro);
                while(rent[y].opseguro < 1 || rent[y].opseguro > 2)
                {
                    printf("ATEN��O! Escolha uma op��o v�lida\n");
                    printf("\n <1-SIM ou 2-N�o>: ");
                    scanf("%d",&rent[y].opseguro);
                }
                if(rent[y].opseguro == 1)
                {
                    rent[y].seguro = 3;
                    rent[y].vtotal = rent[y].vtotal + preco[2].pseguro;
                }
            }

            //ACESS�RIOS
            system("cls");
            x = 0;
            printf("\n\n                  OPCIONAIS\n\n");
            printf("Deseja fazer uso de algum dos produtos opcionais?");
            printf("\n                                 (1-SIM | 2-N�O): ");
            scanf("%d",&rent[y].opacs);
            while(rent[y].opacs < 1 || rent[y].opacs > 2)
            {
                printf(" ATEN��O! Escolha uma op��o v�lida: ");
                scanf("%d",&rent[y].opacs);
            }

            if(rent[y].opacs==1)
            {
                printf("\n\n                  OPCIONAIS\n\n");

                printf("      7 - CADEIRINHA DE BEB� | 8 - GPS | 9 - WIFI\n");
                printf("                %.2f        |  %.2f  |    %.2f\n", preco[0].pacs, preco[1].pacs, preco[2].pacs);
                printf("\n Qual op��o escolhida: ");
                scanf("%d",&rent[y].ops[x]);
                while(rent[y].ops[x] < 7 || rent[y].ops[x] > 9)
                {
                    printf(" ATEN��O! Escolha uma op��o v�lida: ");
                    scanf("%d",&rent[y].ops[x]);
                }
                rent[y].vtotal = rent[y].vtotal + preco[x].pacs;
                printf("\n\n Gostaria de escolher mais algum?");
                printf("\n                   (1 - sim | 2 - N�o): ");
                scanf("%d",&op);
                while(op < 1 || op > 2)
                {
                    printf(" ATEN��O! Escolha uma op��o v�lida: ");
                    scanf("%d",&op);
                }
                while(op==1)
                {
                    x = x+1;
                    printf("\n      7 - CADEIRINHA DE BEB� | 8 - GPS | 9 - WIFI\n");
                    printf("                %.2f        |  %.2f  |    %.2f\n", preco[0].pacs, preco[1].pacs, preco[2].pacs);
                    printf("\n Qual op��o deseja agora: ");
                    scanf("%d",&rent[y].ops[x]);
                    while(rent[y].ops[x] < 7 || rent[y].ops[x] > 9)
                    {
                        printf(" ATEN��O! Escolha uma op��o v�lida: ");
                        scanf("%d",&rent[y].ops[x]);
                    }
                    rent[y].vtotal = rent[y].vtotal + preco[x].pacs;
                    printf("\n\n Deseja escolher mais algum? (1 - sim | 2 - N�o): ");
                    scanf("%d",&op);
                    while(op < 1 || op > 2)
                    {
                        printf(" ATEN��O! Escolha uma op��o v�lida\n");
                        printf("\n <1-SIM ou 2-N�o>: ");
                        scanf("%d",&op);
                    }
                }
            }
            system("cls");

            //ETAPA DE FINALIZA��O DA LOCA��O
            printf(" ----------------------------------------------------------\n");
            printf(" **************** DEMONSTRATIVO DE LOCA��O ****************\n");
            printf(" ----------------------------------------------------------\n");

            printf(" CLIENTE: %s",cliente[i].nome);
            printf("   CPF: %s\n",cliente[i].cpf);
            if(cliente[i].op == 1);
            {
                if(cliente[i].parceiro > 0)
                {
                    printf(" EMPRESA/ONG: ");
                    printf("%s ",parc[i].nome);
                    printf("- DESCONTO %d",parc[i].desconto);
                    printf("%%");
                }
            }
            printf("\n\n    PER�ODO DE LOCA��O: %d",total);

            printf("\n\n PERFIL DO VE�CULO: ");
            if(rent[y].perfil == 1)
            {
                printf("\n\n CATEGORIA          VALOR UNIT�RIO         VALOR TOTAL");
                printf("\n      A ............... R$ %.2f .............R$ %.2f",preco[0].pperfil,preco[0].pperfil*total);
                qtdveiculo = qtdveiculo+1;
                ttveiculo = ttveiculo + preco[0].pperfil*total;
            }
            if(rent[y].perfil == 2)
            {
                printf("\n\n CATEGORIA          VALOR UNIT�RIO         VALOR TOTAL");
                printf("\n      B ............... R$ %.2f .............R$ %.2f",preco[1].pperfil,preco[1].pperfil*total);
                qtdveiculo = qtdveiculo+1;
                ttveiculo = ttveiculo +preco[1].pperfil*total;
            }
            if(rent[y].perfil == 3)
            {
                printf("\n\n CATEGORIA          VALOR UNIT�RIO         VALOR TOTAL");
                printf("\n      C ............... R$ %.2f .............R$ %.2f",preco[2].pperfil,preco[2].pperfil*total);
                qtdveiculo = qtdveiculo+1;
                ttveiculo = ttveiculo +preco[2].pperfil*total;
            }
            if(rent[y].perfil == 4)
            {
                printf("\n\n CATEGORIA          VALOR UNIT�RIO         VALOR TOTAL");
                printf("\n      D ............... R$ %.2f .............R$ %.2f",preco[3].pperfil,preco[3].pperfil*total);
                qtdveiculo = qtdveiculo+1;
                ttveiculo = ttveiculo +preco[3].pperfil*total;
            }
            if(rent[y].perfil == 5)
            {
                printf("\n\n CATEGORIA          VALOR UNIT�RIO         VALOR TOTAL");
                printf("\n      E ............... R$ %.2f .............R$ %.2f",preco[4].pperfil,preco[4].pperfil*total);
                qtdveiculo = qtdveiculo+1;
                ttveiculo = ttveiculo +preco[4].pperfil*total;
            }
            if(rent[y].perfil == 6)
            {
                printf("\n\n CATEGORIA          VALOR UNIT�RIO         VALOR TOTAL");
                printf("\n      F ............... R$ %.2f .............R$ %.2f",preco[5].pperfil,preco[5].pperfil*total);
                qtdveiculo = qtdveiculo+1;
                ttveiculo = ttveiculo +preco[5].pperfil*total;
            }
            for(x=0; x<=20; x++)
            {
                if(rent[y].modelo == carro[x].id)
                {
                    printf("\n        MODELO: %s / ",carro[x].modelo);
                    printf("%s ",carro[x].placa);
                    break;
                }
            }
            printf("\n");
            printf("\n  ACESS�RIOS:");
            if(rent[y].opacs == 1)
            {
                for (op = 0; op<=x; op++)
                {
                    if(rent[y].ops[op] == 7)
                    {
                        printf("\n   CADEIRINHA DE BEB�............................R$ %.2f",preco[0].pacs);
                        qtdacs = qtdacs+1;
                        ttacs = ttacs + preco[0].pacs;
                    }
                    if(rent[y].ops[op]== 8)
                    {
                        printf("\n         GPS.....................................R$ %.2f",preco[1].pacs);
                        qtdacs = qtdacs+1;
                        ttacs = ttacs + preco[1].pacs;
                    }
                    if(rent[y].ops[op] == 9)
                    {
                        printf("\n        WIFI.....................................R$ %.2f",preco[2].pacs);
                        qtdacs = qtdacs+1;
                        ttacs = ttacs + preco[2].pacs;
                    }
                }
            }
            printf("\n\n  SEGURO: ");
            if(rent[y].opseguro==1)
            {
                if(rent[y].seguro == 1)
                {
                    printf("\n       BASIC....................................R$ %.2f",preco[0].pseguro);
                    qtdseguro = qtdseguro+1;
                    ttseguro = ttseguro + preco[0].pseguro;
                }
                if(rent[y].seguro == 2)
                {
                    printf("\n        FLEX....................................R$ %.2f",preco[1].pseguro);
                    qtdseguro = qtdseguro+1;
                    ttseguro = ttseguro + preco[1].pseguro;
                }
                if(rent[y].seguro == 3)
                {
                    printf("\n        PLUS...................................R$ %.2f",preco[2].pseguro);
                    qtdseguro = qtdseguro+1;
                    ttseguro = ttseguro + preco[2].pseguro;
                }
            }
            printf("\n\n ----------------------------------------------------------");
            printf("\n SUB-TOTAL.....................................R$ %.2f",rent[y].vtotal);
            printf("\n ----------------------------------------------------------");
            //desconto sobre a idade
            for(x=0; x<=9; x++)
            {
                if(cliente[i].idade >=camp[x].faixaid && camp[x].faixaid > 18)
                {
                    desconto = camp[x].desconto;
                    desconto = desconto/100;
                    printf("\n\n CAMPANHA: '%s' = %d%% de desconto",camp[x].campanha,camp[x].desconto);
                    printf("\n VALOR DO DESCONTO..............................R$ - %.2f",desconto*rent[y].vtotal);
                    ttdesconto = ttdesconto + desconto*rent[y].vtotal;
                    break;
                }
            }
            //Desconto sobre os dias alugados
            for(x=0; x<=9; x++)
            {
                if(camp[x].incide == 2 && camp[x].op == 2)
                {
                    if(total >= camp[x].faixadias && camp[x].faixaloc !=3)
                    {
                        printf("\n\n Cliente Atende a promo��o '%s'",camp[x].campanha);
                        printf("\n        PR�MIO...................%s",camp[x].premio);
                        break;
                    }
                }
            }
            //desconto sobre PARCEIRO
            if(cliente[i].op == 1)
            {
                if(cliente[i].parceiro > 0)
                {
                    desconto = parc[i].desconto;
                    desconto = desconto/100;
                    printf("\n\n CLIENTE � PARCEIRO: %s",parc[i].nome);
                    printf("\n DESCONTO..........................................-%.2f",desconto*rent[y].vtotal);
                    //  rent[y].vtotal = rent[y].vtotal - (desconto*rent[y].vtotal);
                    ttdesconto = ttdesconto + desconto*rent[y].vtotal;
                }
            }
            rent[y].vtotal = rent[y].vtotal - desconto*rent[y].vtotal;
            faturamento = faturamento + rent[y].vtotal;
            printf("\n\n -----------------------------------------------------------");
            printf("\n VALOR TOTAL....................................R$ %.2f",rent[y].vtotal);
            printf("\n -----------------------------------------------------------");
            getch();
            system("cls");
            printf(" ----------------------------------------------------------\n");
            printf(" **************** DEMONSTRATIVO DE LOCA��O ****************\n");
            printf(" ----------------------------------------------------------\n");
            printf("\n\n A LEGAL RENT A CAR TEM UM PROGRAMA CHAMADO ARREDONDA E VOC�");
            printf("\n PODE COLABORAR. BASTA ARREDONDAR O VALOR DA SUA COMPRA QUE");
            printf("\n O VALOR SER� DESTINADO INTEGRALMENTE AO PROJETO ARRAST�O E");
            printf("\n PARA O INSTITUTO GIRASSOL.");
            printf("\n\n DESEJA ARREDONDAR O VALOR DE R$ %.2f E AJUDAR NO PROJETO?",rent[y].vtotal);
            printf("\n (1-SIM ou 2-N�O) ");
            scanf("%d",&op);
            while(op < 1 || op > 2)
            {
                printf("ATEN��O! Escolha uma op��o v�lida: ");
                scanf("%d",&op);
            }
            if(op==1)
            {
                printf(" PARA QUANTO DESEJA ARREDONDAR NA SUA FATURA? ");
                scanf("%f",&arredonda);
                while(arredonda < rent[y].vtotal)
                {
                    printf("\n    ATEN��O! Informe um valor superior a %.2f. ",rent[y].vtotal);
                    printf("\n\n PARA QUANTO DESEJA ARREDONDAR NA SUA FATURA? ");
                    scanf("%f",&arredonda);
                }
                arredonda = arredonda - rent[y].vtotal;
                ttarredonda = ttarredonda + arredonda;
                printf(" ----------------------------------------------------------\n");
                printf(" ************** RESUMO FINANCEIRO DA LOCA��O **************\n");
                printf(" ----------------------------------------------------------\n");

                printf("\n -----------------------------------------------------------");
                printf("\n VALOR REFERENTE A LOCA��O.......................R$ %.2f",rent[y].vtotal);
                printf("\n -----------------------------------------------------------");
                printf("\n VALOR DESTINADO AO PROJETO ARREDONDAR...........R$  %.2f",arredonda);
                printf("\n -----------------------------------------------------------");
                printf("\n VALOR TOTAL DA FATURA...........................R$ %.2f",rent[y].vtotal+arredonda);
                printf("\n -----------------------------------------------------------");
                printf("\n\n A LEGAL RENT A CAR AGRADECE PELA ESCOLHA DOS NOSSOS SERVI�OS");
                printf("\n E CONVIDA A TODOS A CONHECER MAIS DOS PROJETOS SOCIAIS");
                printf("\n ACESSANDO A NOSSA PAGINA");

            }
            if(op==2)
            {
                printf("\n\n A LEGAL RENT A CAR AGRADECE PELA ESCOLHA DOS NOSSOS SERVI�OS!");

            }
            rent[y].vtotal = 0;
            desconto=0;
            arredonda = 0;
            op=0;
            getch();
            system("cls");
        }//While da op��o 2
        //ETAPA DE DEVOLU��O DO VEICULO
        if (op == 3)//Sair
        {
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("***************** PROCESSO DE DEVOLU��O ******************\n");
            printf("----------------------------------------------------------\n");

            x=1;
            op=1;
            while(x!=0)
            {
                printf("\n                              DADOS DO CLIENTE\n\n");
                fflush(stdin);
                printf("Identifique o cliente (nome, CPF): ");
                gets(locatario);

                for(i=0; i<=20; i++)
                {
                    x = strcmp(locatario, cliente[i].nome);
                    op = strcmp(locatario, cliente[i].cpf);
                    if(x==0 || op==0)
                    {
                        system("cls");
                        cabecalho();
                        printf("\n                    DADOS DO CLIENTE\n\n");
                        printf(" CLIENTE: %s",cliente[i].nome);
                        printf(" - CPF: %s\n",cliente[i].cpf);

                        if(cliente[i].op == 1);
                        {
                            if(cliente[i].parceiro > 0)
                            {
                                printf(" PARCEIRO: ");
                                printf("%s ",parc[i].nome);
                                printf(" %d",parc[i].desconto);
                                printf("%%");
                                printf(" DE DESCONTO ");
                                break;
                            }//if
                        }//for
                        if(cliente[i].op == 2);
                        {
                            printf("PARCEIRO: N�O\n");
                            x=0;
                            break;
                        }

                    }

                }//if
            }//for

            //VOLTAR O VE�CULO PARA O P�TIO

            for(x=0; x<=10; x++)
            {
                if(rent[i].modelo - 1 == vetveiculo[x]);
                {
                    rent[i].perfil = 0;
                    op = rent[i].modelo - 1;
                    vetveiculo[x] = 1;
                }
            }

            for(x=0; x<=19; x++)
            {
                y = strcmp(cliente[i].nome,rent[x].cliente);
                if(y!=0)
                {
                    printf("\n\nCLIENTE N�O TEM VE�CULO ALUGADO!");
                    getch();
                    system("cls");
                    break;
                }
                if(y==0)
                {
                    for(op=0; op<=19; op++)
                    {
                        if (rent[x].modelo == carro[op].id)
                        {
                            system("cls");
                            cabecalho();
                            printf("\n\n        CLIENTE POSSUI VE�CULO ALUGADO CONOSCO:");
                            printf("\n\n                    MODELO: %s",carro[op].modelo);
                            printf("\n                     PLACA: %s",carro[op].placa);
                            getch();
                            y = carro[op].id;
                            break;
                        }
                    }
                }
                printf("\n\n        PROCESSO DE DEVOLU��O DO VE�CULO \n\n");
                printf("            DATA DE DEVOLU��O\n\n");
                printf("                   Dia: ");
                scanf("%d",&rent[x].diad2);
                printf("                   M�s: ");
                scanf("%d",&rent[x].mesd2);
                printf("                   Ano: ");
                scanf("%d",&rent[x].anod2);

                if(rent[x].diad == rent[x].diad2)
                {
                    printf("\n\n           Ve�culo entregue na data acordada.");
                    printf("\n\nA LEGAL RENT A CAR AGRADECE PELA PREFER�NCIA. VOLTE SEMPRE!");
                }
                y=carro[i].perfil;
                if(rent[x].diad < rent[x].diad2)
                {
                    op = rent[x].diad2 - rent[x].diad;
                    printf("\n\n       Ve�culo entregue com atraso de %d dias",op);
                    printf("\n O VALOR REFERENTE AO DIA E MULTA � R$ %.2f",op*preco[i].pperfil);
                    ttmulta = ttmulta + op*preco[i].pperfil;
                    faturamento = faturamento + ttmulta;
                }
                if(rent[x].diad > rent[x].diad2)
                {
                    op = rent[x].diad - rent[x].diad2;
                    printf("\n\n       Ve�culo entregue com anteced�ncia de %d dias",op);
                    printf("\n\n CLIENTE OBTER� UMA RESTITUI��O DE R$ %.2f REFERENTE",op*(preco[i].pperfil*0.75));
                    printf("\n A 75%% DO VALOR PAGO PELO PERIODO");
                    ttestorno = ttestorno + op*(preco[i].pperfil*0.75);
                    faturamento = faturamento - op*(preco[i].pperfil*0.75);
                }

                getch();
                system("cls");
                break;


            }
        }

        //RELAT�RIO
        if (op == 4)//Sair
        {
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("****************** RELAT�RIO GERENCIAL *******************\n");
            printf("----------------------------------------------------------\n");
            printf("              SITUA��O DOS VE�CULOS\n");
            printf(" ID |   STATUS   | PERFIL |   PLACA   | MODELO");
            for(i=0; i<=19; i++)
            {
                if(vetveiculo[i] == 1)
                {
                    if(carro[i].perfil==1)
                    {
                        printf("\n  %d | DISPON�VEL | ", carro[i].id);
                        printf("   A   |  ");
                    }
                    if(carro[i].perfil==2)
                    {
                        printf("\n  %d | DISPON�VEL | ", carro[i].id);
                        printf("   B   |  ");
                    }
                    if(carro[i].perfil==3)
                    {
                        printf("\n  %d | DISPON�VEL | ", carro[i].id);
                        printf("   C   |  ");
                    }
                    if(carro[i].perfil==4)
                    {
                        printf("\n  %d | DISPON�VEL | ", carro[i].id);
                        printf("   D   |  ");
                    }
                    if(carro[i].perfil==5)
                    {
                        printf("\n  %d | DISPON�VEL | ", carro[i].id);
                        printf("   E   |  ");
                    }
                    if(carro[i].perfil==6)
                    {
                        printf("\n  %d | DISPON�VEL | ", carro[i].id);
                        printf("   F   |  ");
                    }

                    printf("%s |",carro[i].placa);
                    printf("  %s",carro[i].modelo);
                }
            }
            printf("\n\n----------------------------------------------------------\n");
            printf("\n ID |   STATUS   | PERFIL |   PLACA   | MODELO");
            for(i=0; i<=19; i++)
            {
                if(vetveiculo[i] == 3)
                {
                    if(carro[i].perfil==1)
                    {
                        printf("\n  %d |INDISPON�VEL|", carro[i].id);
                        printf("   A    |  ");
                    }
                    if(carro[i].perfil==2)
                    {
                        printf("\n  %d |INDISPON�VEL|", carro[i].id);
                        printf("   B    |  ");
                    }
                    if(carro[i].perfil==3)
                    {
                        printf("\n  %d |INDISPON�VEL|", carro[i].id);
                        printf("   C    |  ");
                    }
                    if(carro[i].perfil==4)
                    {
                        printf("\n  %d |INDISPON�VEL|", carro[i].id);
                        printf("   D    |  ");
                    }
                    if(carro[i].perfil==5)
                    {
                        printf("\n  %d |INDISPON�VEL|", carro[i].id);
                        printf("   E    |  ");
                    }
                    if(carro[i].perfil==6)
                    {
                        printf("\n  %d |INDISPON�VEL|", carro[i].id);
                        printf("   F    |  ");
                    }
                    printf("%s |",carro[i].placa);
                    printf("  %s",carro[i].modelo);
                }
            }
            printf("\n\n              MOVIMENTA��O FINANCEIRA\n");
            printf("\n       DESCRI��O                 QTD              TOTAL");
            printf("\n   VE�CULOS ALUGADOS............. %d ............R$ %.2f",qtdveiculo,ttveiculo);
            printf("\n    SEGUROS VENDIDOS............. %d ............R$  %.2f",qtdseguro,ttseguro);
            printf("\n ACESS�RIOS VENDIDOS............. %d ............R$  %.2f",qtdacs,ttacs);
            printf("\n  MULTAS POR ATRASOS............................R$  %.2f",ttmulta);
            printf("\n----------------------------------------------------------");
            printf("\n   TOTAL EM DESCONTO...........................-R$ %.2f",ttdesconto);
            printf("\n   TOTAL EM ESTORNO............................-R$ %.2f",ttestorno);
            printf("\n\n FATURAMENTO TOTAL............................. R$ %.2f",faturamento);
            printf("\n----------------------------------------------------------\n");

            printf("\n PROJETO ARREDONDA...............................R$ %.2f",ttarredonda);

            getch();
            system("cls");

        }
        if (op == 5)//Sair
        {
            system("cls");
            printf("\n\n\n**** ENCERRANDO ACESSO ****");
            getch();

            system("cls");
            cabecalho();
            printf("\n");
        }


    }//main

}
