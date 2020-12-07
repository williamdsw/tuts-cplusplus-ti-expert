#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
	char letra;
	
	cout << "Digite qualquer caracter : ";
	
	//getchar() = pega caracter inserido pelo usuário
	letra = getchar();
	
	//alfanumérico
	if(isalnum(letra))
		cout << "É alfa numérico" << endl;
	
	//alfabético	
	if(isalpha(letra))
		cout << "É alfabético" << endl;
		
	//digíto
	if(isdigit(letra))
		cout << "É um digito" << endl;
		
	//pontuação
	if(ispunct(letra))
		cout << "É uma pontuação" << endl;
		
	//espaço em branco
	if(isspace(letra))
		cout << "É um espaço em branco" << endl;
		
	//minúsculo
	if(islower(letra))
		cout << "É minusculo" << endl;
		
	//maiúsculo
	if(isupper(letra))
		cout << "É maiusculo" << endl;
		
	//caracter de comando
	if(iscntrl(letra))
		cout << "É um caracter de comando" << endl;
		
	//hexadecimal
	if(isxdigit(letra))
		cout << "É um hexadecimal" << endl;
		
	system("pause");
	
	return EXIT_SUCCESS;
}
