#include <iostream>

using namespace std;

// typedef � mais recomendado para struct complexas
//definindo struct "Data"
typedef struct data
{
	//vari�veis
	unsigned short dia;
	unsigned short mes;
	unsigned int ano;
	
} Data;

//definindo struct "Aniversario"
typedef struct aniversario
{
	//vari�vel
	char nome[50];
	
	//objeto da struct "data"
	Data nascimento;
	
} Aniversario;

int main()
{
	//Inst�ncia
	Aniversario pessoa;
	
	//Setando vari�veis das struct's
	cout << "Digite o nome da pessoa : ";
	cin.getline(pessoa.nome, 50);
	
	cout << "Digite o dia de nascimento : ";
	cin >> pessoa.nascimento.dia;
	
	cout << "Digite o m�s de nascimento : ";
	cin >> pessoa.nascimento.mes;
	
	cout << "Digite o ano de nascimento : ";
	cin >> pessoa.nascimento.ano;
	
	system("pause");
	
	system("cls");
	
	//Pegando valores das vari�veis das structs
	cout << pessoa.nome << " nasceu em " << pessoa.nascimento.dia << " de " << pessoa.nascimento.mes << " de " << pessoa.nascimento.ano << endl;
	
	system("pause"); 
	
	return 0;
}
