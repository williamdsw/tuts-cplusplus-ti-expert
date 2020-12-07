#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
	char letra;
	
	cout << "Digite qualquer caracter : ";
	
	//getchar() = pega caracter inserido pelo usu�rio
	letra = getchar();
	
	//alfanum�rico
	if(isalnum(letra))
		cout << "� alfa num�rico" << endl;
	
	//alfab�tico	
	if(isalpha(letra))
		cout << "� alfab�tico" << endl;
		
	//dig�to
	if(isdigit(letra))
		cout << "� um digito" << endl;
		
	//pontua��o
	if(ispunct(letra))
		cout << "� uma pontua��o" << endl;
		
	//espa�o em branco
	if(isspace(letra))
		cout << "� um espa�o em branco" << endl;
		
	//min�sculo
	if(islower(letra))
		cout << "� minusculo" << endl;
		
	//mai�sculo
	if(isupper(letra))
		cout << "� maiusculo" << endl;
		
	//caracter de comando
	if(iscntrl(letra))
		cout << "� um caracter de comando" << endl;
		
	//hexadecimal
	if(isxdigit(letra))
		cout << "� um hexadecimal" << endl;
		
	system("pause");
	
	return EXIT_SUCCESS;
}
