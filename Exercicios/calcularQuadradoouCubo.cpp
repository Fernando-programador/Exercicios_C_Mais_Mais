#include <iostream>
#include <locale>

using namespace std;

int main() {
setlocale(LC_ALL, "ptb");

	int cubo, quadrado, num;
	
	cout << "DIGITE UM N�MERO PARA CALCULAR: " <<endl;
	cin >> num ;
	
	cubo = num*num*num;
	
	quadrado = num*num;
		
	cout << "O N�MERO "<< num << " ELEVADO AO QUADRADO � " << quadrado << endl;
	cout << "O N�MERO "<< num << " ELEVADO AO CUBO � " << cubo << endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}

