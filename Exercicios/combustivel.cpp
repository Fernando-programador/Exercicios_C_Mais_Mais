#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	double qntDin, valComb, qntLitro;
	
	cout << "Qual o valor do combustível? R$ ";
	cin >> valComb;
	
	cout << "Quanto você quer pagar? R$ ";
	cin >> qntDin;
	
	qntLitro = qntDin / valComb;
	
	cout << fixed << setprecision(2);
	cout << "Com R$ " << qntDin << " você irá abastecer com " << qntLitro << " de litros. " << endl;
		
	
	
	
	
	
	
	system("pause");
	return 0;
}
