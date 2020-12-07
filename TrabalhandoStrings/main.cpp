#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main1()
{
	//variáveis
	char letra;
	
	cout << "Digite uma letra : ";
	cin >> letra;
	
	//Função para ignorar o ENTER
	cin.ignore();
	
	//toUpper() = coloca em maiúsculo
	letra = toupper(letra);
	
	cout << "Seu caracter em MAIUSCULO : " << letra << endl;
	
	//toLower() = coloca em minísculo
	letra = tolower(letra);
	
	cout << "Seu caracter em MINUSCULO : " << letra << endl;
	
	//Comando 'pause' do sistema para aparecer 'Pressione Enter'
	system("pause");
	
	return EXIT_SUCCESS;
}
