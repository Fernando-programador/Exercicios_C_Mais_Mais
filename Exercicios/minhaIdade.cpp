#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	int dias, anos;
	
	cout << "INFORME QUANTOS DIAS VOCÊ JÁ VIVEU: ";
	cin >> dias;
	
	anos = dias / 365;
	
	cout <<"VOCÊ TEM " << anos << "ANOS."<< endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}
