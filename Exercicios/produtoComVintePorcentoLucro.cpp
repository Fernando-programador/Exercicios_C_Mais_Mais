#include <iostream>
#include <locale>

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	double valor, total, porcentagem;

	cout << "DIGITE O VALOR DO PRODUTO: R$ ";
	cin >> valor;
	
	porcentagem = (valor*20)/100;
	total = valor + porcentagem;
	
	cout << "O VALOR DO PRODUTO COM 20% PARA VENDA É: R$ " << total << endl;
	
	
	
	
	
	system("pause");
	return 0;
}
