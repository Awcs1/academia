#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define QT 100

// aluno
struct tipo_aluno
{
char nome[50];
char ddd[2];
long int tel;
char cpf[11];
float peso;
float altura;
char sexo[9];
int idade;
};

// funcionario
struct tipo_funcionario
{
char nome[50];
char ddd[2];
long int tel;
char cpf[11];
int idade;
char funcao[50];
char sexo[50];
char horario[50];

};
struct tipo_planos
{
char nome[50];
float preco;
long int tempo;

};
//
struct tipo_aluno paluno[QT];
struct tipo_funcionario pfuncionario[QT];
struct tipo_planos plano[3];

//

 /*variaveis*/

int continuar;
int cont=0;
float imc;

/* funções  */
void menu_inicial();

/* funções aluno */
int alunos();
void cadastro();
void consulta();
int alterar();
void excluir();
void pagamentos();


/* funções funcionario */
int funcionarios();
void fcadastro();
void fconsulta();
int falterar();
void fexcluir();

/* funções planos */
int planos();
int cadastraplanos();
int consultaplanos();
int excluirplanos();

/*--main--*/
int main()
{
	setlocale(LC_ALL, "portuguese" );
	system("color 1F");
	int x,y,w;
//
	for(x=0; x<QT; x++)
	{
	paluno[x].tel=000001;  /*cadastro aluno */
	}
//
//
	for(y=0; y<QT; y++)
	{
	pfuncionario[y].tel=000001;  /*cadastro funcionario */
	}
//
//
	for(w=0; w<3; w++)
	{
	plano[w].tempo=000001;  /*cadastro plano */
	}
//

	printf("iniciando\n\n"); Sleep(2);
	menu_inicial();

	return 0;

}/*colchete final*/

/*função do menu inicial*/
void menu_inicial()
{	fflush(stdin);
	int escolha,a;
	do
	{
	system ("cls");
	system("color 1F");
	printf("Menu inicial\n\n");
	printf("1- Aluno\n\n");
	printf("2- Fucionario\n\n");
	printf("0- sair\n\n");
	printf("digite a opção que voçe deseja %c ",26);
	fflush(stdin);
	scanf("%i", &escolha);
	switch(escolha)
	{
	case 1:fflush(stdin); alunos(); break;
	case 2:fflush(stdin); funcionarios(); break;
	case 0:fflush(stdin); system ("cls"); printf("saindo do programa\n\n"); Sleep(2); exit(0); break;
	default:fflush(stdin); printf("opção invalida\n\n");

	}/*colchete final do switch*/

	}while(escolha!=0); system("cls");/*colchete final do do while*/




}/*colchete final do menu*/

/*funções do aluno*/

/*menu do aluno*/
int alunos()
{	fflush(stdin);
	int  escolha_aluno;

	do
	{
	system ("cls");
	system("color 1F");
	printf("Aba cliente\n\n");
	printf("1- CADASTRO\n\n");
	printf("2- CONSULTAR\n\n");
	printf("3- ALTERAR\n\n");
	printf("4- EXCLUIR\n\n");
	printf("5- PLANOS\n\n");
	printf("6- VOLTAR AO MENU PRINCIPAL\n\n");
	printf("0- SAIR\n");
	printf("INFORME A OPERAÇÃO DESEJADA DE ACORDO COM O NUMERO %c  ",26);
	fflush(stdin);
	scanf("%i", &escolha_aluno);
	switch(escolha_aluno)
	{
	case 1: cadastro(); break;
	case 2: consulta(); break;
	case 3: alterar();  break;
	case 4: excluir();  break;
	case 5: consultaplanos();  break;
	case 6: system ("cls"); printf("voltando ao menu principal\n\n"); Sleep(2); return(0); break;
	case 0: system ("cls"); printf("saindo do programa\n\n"); Sleep(2); exit(0); break;
	default:fflush(stdin); printf("");

	}/*colchete final do switch*/

	}while(escolha_aluno!=0); system("cls");/*colchete final do do while*/

}/*colchete final do menu aluno*/

/*cadastro do aluno*/
void cadastro()
{ 	fflush(stdin);
	system("cls");
	int i;

	if(cont < QT)
	{
    for(i=0; i<QT; i++)
	{
	if(paluno[i].tel==000001)
	{
	printf("Cadastrar\n\n");
	printf("Por favor, preencha os campos abaixo.\n\n");
//

//
	fflush(stdin);
	printf("Nome: ");
	gets(paluno[i].nome);
//
	fflush(stdin);
	printf("Sexo: ");
	gets(paluno[i].sexo);
//
	fflush(stdin);
	do
	{
	printf("Cpf: ");
	gets(paluno[i].cpf);
	if(strlen(paluno[i].cpf) != 11)
	{
	printf("Digite um cpf Valido: \n");
	}/*colchete do if*/
	}while (strlen(paluno[i].cpf) != 11); /*colchete do do while*/
//
	fflush(stdin);

	do
	{
	printf("Idade: ");
	scanf("%i",&paluno[i].idade);
	if(paluno[i].idade<01)
	{
	printf("Digite uma idade Valida: \n");
	} /*colchete do if*/
	}while(paluno[i].idade<01);

 //
	fflush(stdin);
	do
	{
	printf("DDD: ");
	scanf("%s",&paluno[i].ddd);
	if(strlen(paluno[i].ddd) != 2)
	{
	printf("Digite um DDD Valido: \n");
	}/*colchete do if*/
	}while (strlen(paluno[i].ddd) != 2); /*colchete do do while*/
//
	fflush(stdin);

	printf("Telefone: ");
	do
	{
	scanf("%i",&paluno[i].tel);
	}while(paluno[i].tel==000001);	/*colchete do do while*/
//
	fflush(stdin);
	printf("Peso: ");
	scanf("%f", &paluno[i].peso);
//
	fflush(stdin);
	printf("Altura: ");
	scanf("%f", &paluno[i].altura);
//
	system("cls");
	fflush(stdin);
	cont++;
	break;
	}/*colchete final do if 2*/
	}/*colchete final do for */
	}/*colchete final do if 1*/

	if(cont < QT)
	{
	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	cadastro();
	}/*colchete final do if 4*/

	}/*colchete final do if 3*/


	if(cont == QT)
	{
	system ("cls");
	printf("No momento, não a vagas na academia!\n\n");
	system("pause");
	} /*colchete final do if 5*/


}/*colchete final do cadastro*/

/*consultar do aluno*/
void consulta()
{	fflush(stdin);
	int i;
	char buscar[50];
	int nt=1;

	system("cls");
	printf("Consulta\n\n");
	fflush(stdin);
	printf(" Informe o <CPF> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(paluno[i].tel!=000001)
	{
	if(strcmp(paluno[i].cpf,buscar)==0)
	{

	system("cls");
	printf("Consulta de cadastro do  cliente: %c\n\n",26);

	printf("Nome: %s\n\n",paluno[i].nome);
	printf("Sexo: %s\n\n",paluno[i].sexo);
	printf("Cpf: %s\n\n",paluno[i].cpf);
	printf("Idade: %i\n\n",paluno[i].idade);
	printf("ddd: %c%c \n\n",paluno[i].ddd[0],paluno[i].ddd[1]);
	printf("Telefone: %i\n\n",paluno[i].tel);
	printf("Peso: %.2f\n\n",paluno[i].peso);
	printf("altura: %.2f\n\n",paluno[i].altura);
	printf("Seu Imc é: %.2f\n\n",imc=paluno[i].peso/(paluno[i].altura*paluno[i].altura));
	printf("\n");


	nt=0;
	}/*colchete final do if 2*/

	}/*colchete final do if 1*/

	}/*colchete final do for*/
	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o cpf esteja correto\n\n");

	}/*colchete final do if 3*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	consulta();
	} /*colchete final do if 4*/


	system("cls");
}/*colchete final da consulta*/

/*alterar do aluno*/
int alterar()
{	fflush(stdin);
	int i,alt;
	char buscar[50];
	int nt=1;
	system("cls");
	printf("Alterar\n\n");
	fflush(stdin);
	printf(" Informe o <CPF> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(paluno[i].tel!=000001)
	{
	if(strcmp(paluno[i].cpf,buscar)==0)
	{
	do
	{
	system("cls");
	printf("Alterar\n\n");
	printf("1- Peso\n\n");
	printf("2- Idade\n\n");
	printf("3- ddd\n\n");
	printf("4- Telefone\n\n");
	printf("0- Menu\n\n");
	scanf("%i",&alt);
	switch(alt)
	{

	case 1:printf(" Informe o novo peso: "); fflush(stdin); scanf("%f", &paluno[i].peso); break;

	case 2:printf(" Informe a nova idade: "); fflush(stdin); scanf("%i",&paluno[i].idade); break;

	case 3:printf(" Informe o novo ddd: "); fflush(stdin); scanf("%s",&paluno[i].ddd); break;

	case 4:printf(" Informe o novo telefone: "); fflush(stdin); scanf("%i",&paluno[i].tel); break;

	case 0:fflush(stdin); system ("cls"); printf("voltando ao menu do aluno\n\n"); Sleep(2); return(0); break;

	default:fflush(stdin); printf("");

	}/*colchete final do switch*/
	}while(alt!=0);system ("cls"); /*colchete final do do while*/

	nt=0;

	}/*colchete final do if 2*/

	}/*colchete final do if 1*/

	}/*colchete final do for*/
	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o cpf esteja correto\n\n");

	}/*colchete final do if 3*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	alterar();
	} /*colchete final do if 4*/


}/*colchete final do alterar*/

/*exclur do aluno*/
void excluir()
{	fflush(stdin);
	int i;
	char buscar[50];
	int nt=1;
	system("cls");
	printf("EXCLUIR\n\n");
	fflush(stdin);
	printf(" Informe o <CPF> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(strcmp(paluno[i].cpf,buscar)==0)
	{
    memset(&paluno[i].nome,0,sizeof(paluno[i].nome));
	memset(&paluno[i].cpf,0,sizeof(paluno[i].cpf));
	memset(&paluno[i].peso,0,sizeof(paluno[i].peso));
	memset(&paluno[i].idade,0,sizeof(paluno[i].idade));
	memset(&paluno[i].ddd,0,sizeof(paluno[i].ddd));
	memset(&paluno[i].tel,0,sizeof(paluno[i].tel));
	memset(&imc,0,sizeof(imc));
	nt=0;
	system("cls");
	printf("Exclusão concluida com sucesso!\n\n");


	}/*colchete final do if 1*/

	}/*colchete final do for*/

	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o cpf esteja correto\n\n");

	}/*colchete final do if 2*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	excluir();
	} /*colchete final do if 3*/


}/*colchete final do excluir*/


/*funções do funcionario*/

/*menu do funcionario*/
int funcionarios()
{	fflush(stdin);
	int  escolha_funcionario;

	do
	{
	system ("cls");
	system("color 1F");
	printf("Aba funcionario\n\n");
	printf("1- CADASTRO\n\n");
	printf("2- CONSULTAR\n\n");
	printf("3- ALTERAR\n\n");
	printf("4- EXCLUIR\n\n");
	printf("5- PLANOS\n\n");
	printf("6- VOLTAR AO MENU PRINCIPAL\n\n");
	printf("0- SAIR\n");
	printf("INFORME A OPERAÇÃO DESEJADA DE ACORDO COM O NUMERO %c  ",26);
	fflush(stdin);
	scanf("%i", &escolha_funcionario);
	switch(escolha_funcionario)
	{
	case 1: fcadastro(); break;
	case 2: fconsulta(); break;
	case 3: falterar();  break;
	case 4: fexcluir();  break;
	case 5: planos();  break;
	case 6: system ("cls"); printf("voltando ao menu principal\n\n"); Sleep(2); return(0); break;
	case 0: system ("cls"); printf("saindo do programa\n\n"); Sleep(2); exit(0); break;
	default:fflush(stdin); printf("");

	}/*colchete final do switch*/

	}while(escolha_funcionario!=0); system("cls");/*colchete final do do while*/

}/*colchete final do menu funcionario*/

/*cadastro do funcionario*/
void fcadastro()
{ 	fflush(stdin);
	system("cls");
	int i;


	if(cont < QT)
	{
    for(i=0; i<QT; i++)
	{
	if(pfuncionario[i].tel==000001)
	{
	printf("Cadastrar\n\n");
	printf("Por favor, preencha os campos abaixo.\n\n");
//

//
	fflush(stdin);
	printf("Nome: ");
	gets(pfuncionario[i].nome);
//
	fflush(stdin);
	do
	{
	printf("Cpf: ");
	gets(pfuncionario[i].cpf);
	if(strlen(pfuncionario[i].cpf) != 11)
	{
	printf("Digite um cpf Valido: \n");
	}/*colchete do if*/
	}while (strlen(pfuncionario[i].cpf) != 11); /*colchete do do while*/
//
	fflush(stdin);
	do
	{
	printf("Idade: ");
	scanf("%i",&pfuncionario[i].idade);
	if(pfuncionario[i].idade<01)
	{
	printf("Digite uma idade Valida: \n");
	} /*colchete do if*/
	}while(pfuncionario[i].idade<01);

 //
	fflush(stdin);
	do
	{
	printf("DDD: ");
	scanf("%s",&pfuncionario[i].ddd);
	if(strlen(pfuncionario[i].ddd) != 2)
	{
	printf("Digite um DDD Valido: \n");
	}/*colchete do if*/
	}while (strlen(pfuncionario[i].ddd) != 2); /*colchete do do while*/
//
	fflush(stdin);

	printf("Telefone: ");
	do
	{
	scanf("%i",&pfuncionario[i].tel);
	}while(pfuncionario[i].tel==000001);	/*colchete do do while*/
//
	fflush(stdin);
	printf("Horario: ");
	gets(pfuncionario[i].horario);
//
	fflush(stdin);
	printf("Função: ");
	gets(pfuncionario[i].funcao);
//
	system("cls");
	fflush(stdin);
	cont++;
	break;
	}/*colchete final do if 2*/
	}/*colchete final do for */
	}/*colchete final do if 1*/

	if(cont < QT)
	{
	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	fcadastro();
	}/*colchete final do if 4*/

	}/*colchete final do if 3*/


	if(cont == QT)
	{
	system ("cls");
	printf("No momento, não a vagas na academia para funciorio!\n\n");
	system("pause");
	} /*colchete final do if 5*/


}/*colchete final do cadastro*/

/*consultar do funcionario*/
void fconsulta()
{	fflush(stdin);
	int i;
	char buscar[50];
	int nt=1;

	system("cls");
	printf("Consultar\n\n");
	fflush(stdin);
	printf(" Informe o <CPF> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(pfuncionario[i].tel!=000001)
	{
	if(strcmp(pfuncionario[i].cpf,buscar)==0)
	{

	system("cls");
	printf("Consulta de cadastro do  funcionario: %c\n\n",26);

	printf("Nome: %s\n\n",pfuncionario[i].nome);
	printf("Cpf: %s\n\n",pfuncionario[i].cpf);
	printf("Idade: %i\n\n",pfuncionario[i].idade);
	printf("ddd: %c%c \n\n",pfuncionario[i].ddd[0],pfuncionario[i].ddd[1]);
	printf("Telefone: %i\n\n",pfuncionario[i].tel);
	printf("Horario: %s\n\n",pfuncionario[i].horario);
	printf("Função: %s\n\n",pfuncionario[i].funcao);

	nt=0;
	}/*colchete final do if 2*/

	}/*colchete final do if 1*/

	}/*colchete final do for*/
	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o cpf esteja correto\n\n");

	}/*colchete final do if 3*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	fconsulta();
	} /*colchete final do if 4*/


	system("cls");
}/*colchete final da consulta*/

/*alterar do funcionario*/
int falterar()
{	fflush(stdin);
	int i,alt;
	char buscar[50];
	int nt=1;
	system("cls");
	printf("Alterar\n\n");
	fflush(stdin);
	printf(" Informe o <CPF> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(pfuncionario[i].tel!=000001)
	{
	if(strcmp(pfuncionario[i].cpf,buscar)==0)
	{
	do
	{
	system("cls");
	printf("Alterar\n\n");
	printf("1- Horario\n\n");
	printf("2- Idade\n\n");
	printf("3- ddd\n\n");
	printf("4- Telefone\n\n");
	printf("5- Função\n\n");
	printf("0- Menu\n\n");
	scanf("%i",&alt);
	switch(alt)
	{

	case 1:printf(" Informe o novo horario: "); fflush(stdin); scanf("%f", &pfuncionario[i].horario); break;

	case 2:printf(" Informe a nova idade: "); fflush(stdin); scanf("%i",&pfuncionario[i].idade); break;

	case 3:printf(" Informe o novo ddd: "); fflush(stdin); scanf("%s",&pfuncionario[i].ddd); break;

	case 4:printf(" Informe o novo telefone: "); fflush(stdin); scanf("%i",&pfuncionario[i].tel); break;

	case 5:printf(" Informe a nova função: "); fflush(stdin); gets(pfuncionario[i].funcao); break;

	case 0:fflush(stdin); system ("cls"); printf("voltando ao menu do funcionario\n\n"); Sleep(2); return(0); break;

	default:fflush(stdin); printf("");

	}/*colchete final do switch*/
	}while(alt!=0);system ("cls"); /*colchete final do do while*/

	nt=0;

	}/*colchete final do if 2*/

	}/*colchete final do if 1*/

	}/*colchete final do for*/
	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o cpf esteja correto\n\n");

	}/*colchete final do if 3*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	falterar();
	} /*colchete final do if 4*/


}/*colchete final do alterar*/

/*exclur do funcionario*/
void fexcluir()
{	fflush(stdin);
	int i;
	char buscar[50];
	int nt=1;
	system("cls");
	printf("EXCLUIR\n\n");
	fflush(stdin);
	printf(" Informe o <CPF> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(strcmp(pfuncionario[i].cpf,buscar)==0)
	{
    memset(&pfuncionario[i].nome,0,sizeof(pfuncionario[i].nome));
	memset(&pfuncionario[i].cpf,0,sizeof(pfuncionario[i].cpf));
	memset(&pfuncionario[i].horario,0,sizeof(pfuncionario[i].horario));
	memset(&pfuncionario[i].idade,0,sizeof(pfuncionario[i].idade));
	memset(&pfuncionario[i].ddd,0,sizeof(pfuncionario[i].ddd));
	memset(&pfuncionario[i].tel,0,sizeof(pfuncionario[i].tel));
	memset(&pfuncionario[i].funcao,0,sizeof(pfuncionario[i].funcao));
	nt=0;
	system("cls");
	printf("Exclusão concluida com sucesso!\n\n");


	}/*colchete final do if 1*/

	}/*colchete final do for*/

	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o cpf esteja correto\n\n");

	}/*colchete final do if 2*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */


	if(continuar==1)
	{
	fexcluir();
	} /*colchete final do if 3*/


}/*colchete final do excluir*/

/*PLANOS*/
int planos()
{	fflush(stdin);
	int  escolha_plano;

	do
	{
	system ("cls");
	system("color 1F");
	printf("Aba planos\n\n");
	printf("1- CADASTRO\n\n");
	printf("2- CONSULTAR\n\n");
	printf("3- EXCLUIR\n\n");
	printf("4- VOLTAR AO MENU PRINCIPAL\n\n");
	printf("0- SAIR\n");
	printf("INFORME A OPERAÇÃO DESEJADA DE ACORDO COM O NUMERO %c  ",26);
	fflush(stdin);
	scanf("%i", &escolha_plano);
	switch(escolha_plano)
	{
	case 1: cadastraplanos(); break;
	case 2: consultaplanos(); break;
	case 3: excluirplanos();  break;
	case 4: system ("cls"); printf("voltando ao menu principal\n\n"); Sleep(2); return(0); break;
	case 0: system ("cls"); printf("saindo do programa\n\n"); Sleep(2); exit(0); break;
	default:fflush(stdin); printf("");

	}/*colchete final do switch*/

	}while(plano!=0); system("cls");/*colchete final do do while*/

}/*colchete final do menu aluno*/

/* cadastro de planos */
int cadastraplanos()
{ 	fflush(stdin);
	system("cls");
	int i;


    if(cont < 3)
	{
    for(i=0; i<3; i++)
	{
	if(plano[i].tempo==000001)
	{
	printf("Cadastrar planos\n\n");
	printf("Por favor, preencha os campos abaixo.\n\n");
//

//
	fflush(stdin);
	printf("Nome: ");
	gets(plano[i].nome);
//
//
	fflush(stdin);
	printf("Valor: ");
	scanf("%f",&plano[i].preco);
//
//
	fflush(stdin);
	printf("duração: ");
	do
	{
	scanf("%i",&plano[i].tempo);
	}while(plano[i].tempo==000001);	/*colchete do do while*/
//


	cont++;
	break;
	}/*colchete final do if 2*/
	}/*colchete final do for */
	}/*colchete final do if 1 */

	if(cont < 3)
	{
	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	cadastraplanos();
	}/*colchete final do if 4*/

	}/*colchete final do if 3*/


	if(cont == 3)
	{
	system ("cls");
	printf("Planos completos!\n\n");
	system("pause");
	} /*colchete final do if 5*/


}/*colchete final do cadastro*/

int consultaplanos()
{
    fflush(stdin);
	int i;
	char buscar[50];
	int nt=1;

	system("cls");
	printf("Consulta\n\n");
	fflush(stdin);
	printf(" Informe o <NOME> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(plano[i].tempo!=000001)
	{
	if(strcmp(plano[i].nome,buscar)==0)
	{

	system("cls");
	printf("Consulta de planos: %c\n\n",26);

	printf("Nome: %s\n\n",plano[i].nome);
	printf("Valor: %.2f reais\n\n",plano[i].preco);
	printf("Duração: %i horas\n\n",plano[i].tempo);

	printf("\n");


	nt=0;
	}/*colchete final do if 2*/

	}/*colchete final do if 1*/

	}/*colchete final do for*/
	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o nome esteja correto\n\n");

	}/*colchete final do if 3*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */

	if(continuar==1)
	{
	consultaplanos();
	} /*colchete final do if 4*/


	system("cls");
}/*colchete final do consultar*/

int excluirplanos()
{
fflush(stdin);
	int i;
	char buscar[50];
	int nt=1;
	system("cls");
	printf("EXCLUIR\n\n");
	fflush(stdin);
	printf(" Informe o <NOME> %c   ",26);
	gets(buscar);

	for(i=0; i<QT; i++)
	{
	if(strcmp(plano[i].nome,buscar)==0)
	{
    memset(&plano[i].nome,0,sizeof(plano[i].nome));
	memset(&plano[i].preco,0,sizeof(plano[i].preco));
	memset(&plano[i].tempo,0,sizeof(plano[i].tempo));

	nt=0;
	system("cls");
	printf("Exclusão concluida com sucesso!\n\n");


	}/*colchete final do if 1*/

	}/*colchete final do for*/

	if(nt==1)
	{

	system("cls");
	printf("nenhuma informação.\n\n");
	printf("Certifique-se de que o nome esteja correto\n\n");

	}/*colchete final do if 2*/

	system("PAUSE");
	system("cls");
	do
	{
	system("cls");
	printf("Deseja continuar? \n\n");
	printf(" 1 - Sim\n\n");
	printf(" 2 - Não\n\n");
	fflush(stdin);
	scanf("%i",&continuar);

	}while(continuar!=1 && continuar!=2);/*colchete final do do while */


	if(continuar==1)
	{
	excluirplanos();
	} /*colchete final do if 3*/


}/*colchete final do excluir*/