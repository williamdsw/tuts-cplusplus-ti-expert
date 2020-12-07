#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//uma string feita de array de char's
	char palavra1[50], palavra2[50];
	
	//uma string utilizando a biblioteca
	//string palavra2;
	
	system("color F");
	
	cout << "Digite qualquer palavra : " << endl;
	
	//Pega só até o primeiro espaço que aparecer
	//cin >> palavra1;
	
	//Pega o conteúdo e o tamanho total
	cin.getline(palavra1, 50);
	
	cout << "Digite outra palavra : " << endl;
	
	cin.getline(palavra2, 50);
	
	//Mesmo problema..
	//cin >> palavra2;
	
	system("cls");
	
	cout << "Sua palavra : " << palavra1 << endl;

	//strlen() = string length
	cout << "Numero de caracteres dela : " << strlen(palavra1) << endl;
	
	cout << "Sua outra palavra : " << palavra2 << endl;
	
	//strcmp() = string compare
	if(strcmp(palavra1, palavra2) == 0)
		cout << palavra1 << "e igual a " << palavra2 << endl;
	else
		cout << palavra1 << "e diferente de " << palavra2 << endl;
		
	cout << "Copiando strings..." << endl;
	system("pause"); 
	
	//strcpy = string copy
	strcpy(palavra2, palavra1);
	
	cout << "palavra 1 = " << palavra1 << endl;
	cout << "palavra 2 = " << palavra2 << endl;
	
	cout << "Concatenando strings..." << endl;
	system("pause");
	
	//strcat = string concat
	strcat(palavra1, palavra2);
	
	cout << palavra1 << endl;
	
	system("pause");
	
	return 0;
}
