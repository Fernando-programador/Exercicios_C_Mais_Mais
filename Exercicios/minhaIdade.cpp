#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	int dias, anos;
	
	cout << "INFORME QUANTOS DIAS VOC� J� VIVEU: ";
	cin >> dias;
	
	anos = dias / 365;
	
	cout <<"VOC� TEM " << anos << "ANOS."<< endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}
