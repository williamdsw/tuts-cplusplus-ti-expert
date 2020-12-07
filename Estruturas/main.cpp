#include <iostream>

using namespace std;

//Estrutura de dados é um dado que contém outras variáveis, é como uma variável tivesse outras
struct Data
{
	int dia, mes, ano;
};

int main()
{
	//Instância
	Data hoje;
	
	//Setando variáveis
	hoje.dia = 5;
	hoje.mes = 9;
	hoje.ano = 2017;
	
	//Pegando e pritando suas variáveis
	cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
	
	system("pause");
	
	return 0;
}
