#include <iostream>
#include <locale>

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	

	int idade, dias ;
	
	cout << "PARA SABER QUANTOS DIAS VOC� J� VIVEU DIGITE A SUA IDADE: "; 
	cin >> idade;	
	
	dias = idade * 356;
	
	cout << "VOC� J� VIVEU EM M�DIA " << dias << " DIAS." << endl;

	
	
	
	
	
	system("pause");
	return 0;
}
