#include <iostream>

using namespace std;

int main()
{
	//definindo cor das letras
	system("color F");
	
	//definindo t�tulo da janela
	system("title EXEMPLOS DE COMANDOS");
	
	cout << "Programa executado em : " << endl;
	
	//mostrando a pasta de origem
	system("cd");
	cout << endl;
		
	cout << "Rodando em sistema : " << endl; 
	
	//mostrando a vers�o do sistema operacional
	system("ver");
	cout << endl;
	
	cout << "No volume : " << endl; 
	
	//Mostrando o disco rig�do usado
	system("vol");
	cout << endl;
	
	cout << "Verificando mem�ria... " << endl;
	
	//Mostrando a mem�ria utilizada (n�o funciona)
	system("mem");
	cout << endl;
	
	//"aperte enter para continuar..."
	system("pause");
	
	//limpando a tela de comando
	system("cls");
	
	//Mudando a cor de fundo?
	system("color 80");
	
	cout << "Programa completamente executado em : " << endl;
	
	//Mostrando s� a data
	system("date/t");
	
	//Mostrando s� a hora
	system("time/t");
	
	system("pause");
		
	return 0;
}
