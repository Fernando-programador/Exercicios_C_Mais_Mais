#include <iostream>
#include <locale>

using namespace std;



int main() {
	setlocale(LC_ALL, "ptb");
	
	int x, res;
	
	
	
	cout << "DIGITE UM N�MERO INTEIRO PARA SABER O SEU VALOR AO QUADRADO: ";
	cin >> x;
	
	res = x*x;
	
	if(res>25){
		cout<<"O SEU RESULTADO � " << res <<" ELE � MAIOR QUE 25"<< endl;
	}
	
	else {
	cout << "O SEU RESULTADO � "<< res<<" ELE � MENOR QUE 25"<<endl;
	}
	
	
	
	
	system("pause");
	
	
	return 0;
}
