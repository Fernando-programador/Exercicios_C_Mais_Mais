#include <iostream>
#include <locale>

using namespace std;

int main() {
setlocale(LC_ALL, "ptb");

	int cubo, quadrado, num;
	
	cout << "DIGITE UM NÚMERO PARA CALCULAR: " <<endl;
	cin >> num ;
	
	cubo = num*num*num;
	
	quadrado = num*num;
		
	cout << "O NÚMERO "<< num << " ELEVADO AO QUADRADO É " << quadrado << endl;
	cout << "O NÚMERO "<< num << " ELEVADO AO CUBO É " << cubo << endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}

