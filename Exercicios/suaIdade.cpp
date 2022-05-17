#include <iostream>

 using namespace std;
 
 
int main()
{
	
	int anoAtual, anoNasc, idade;
	
	
	cout << ("Digite o ano que voce nasceu: ");
	cin >> anoNasc;
	
	cout << ("Digite o ano que estamos no momento: ");
	cin >> anoAtual;
	
	idade = anoAtual - anoNasc;
	
	cout << "Ao fim desse ano a sua idade eh ou sera, " << idade << " anos." ;
	cout << " ";
	
	system("pause")	;
	
	
	
	
	
	
	
	
	
	return 0;
}

