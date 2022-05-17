#include <iostream>
#include <locale>

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	

	int idade, dias ;
	
	cout << "PARA SABER QUANTOS DIAS VOCÊ JÁ VIVEU DIGITE A SUA IDADE: "; 
	cin >> idade;	
	
	dias = idade * 356;
	
	cout << "VOCÊ JÁ VIVEU EM MÉDIA " << dias << " DIAS." << endl;

	
	
	
	
	
	system("pause");
	return 0;
}
