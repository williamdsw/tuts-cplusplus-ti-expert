#include <iostream>

using namespace std;

//Estrutura de dados � um dado que cont�m outras vari�veis, � como uma vari�vel tivesse outras
struct Data
{
	int dia, mes, ano;
};

int main()
{
	//Inst�ncia
	Data hoje;
	
	//Setando vari�veis
	hoje.dia = 5;
	hoje.mes = 9;
	hoje.ano = 2017;
	
	//Pegando e pritando suas vari�veis
	cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
	
	system("pause");
	
	return 0;
}
