#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	int x;
	double y, z;
	// saber se o número é para ou impar
	cout<<"DIGITE UM NÚMERO INTEIRO PARA SABER SE ELE É PAR OU IMPAR : "<<endl;
	cin >> x;
	
	y = x%2;
	
	if(y == 0) {
		cout<<"SEU NÚMERO É PAR." <<endl;
	}
	else {
		cout<<"SEU NÚMERO É IMPAR." << endl;
		
		
	}
	 
	 // saber se o número é positivo ou negativo
	cout<<""<<endl;
	cout<<"DIGITE UM NÚMERO INTEIRO PARA SABER SE ELE É POSITIVO OU NEGATIVO : "<<endl;
	cin >> x;
	
	
	if(x > 0) {
		cout<<"SEU NÚMERO É POSIIVO." <<endl;
	}
	else {
		cout<<"SEU NÚMERO É NEGATIVO." << endl;
		
		
	}
	//saber se o seu salário é maior que o salario mínimo
	cout<<""<<endl;
	cout<<"DIGITE O SEU SALÁRIO: R$ ";
	cin >> z;
	
	 
	
	if(z > 1045) {
		cout<<"SEU SALÁRIO É MAIOR QUE UM SALÁRIO MÍNIMO" <<endl;
	}
	
	else if (z == 1045){
		cout<<"O SEU SALÁRIO É O SALÁRIO MÍNIMO."<<endl;
	}
	
	
	else {
		cout<<"SEU SALÁRIO É MENOR QUE O SALÁRIO MÍNIMO." << endl;
		
		
	}
	
	
	system("pause");
	return 0;
}
