#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	int x;
	double y, z;
	// saber se o n�mero � para ou impar
	cout<<"DIGITE UM N�MERO INTEIRO PARA SABER SE ELE � PAR OU IMPAR : "<<endl;
	cin >> x;
	
	y = x%2;
	
	if(y == 0) {
		cout<<"SEU N�MERO � PAR." <<endl;
	}
	else {
		cout<<"SEU N�MERO � IMPAR." << endl;
		
		
	}
	 
	 // saber se o n�mero � positivo ou negativo
	cout<<""<<endl;
	cout<<"DIGITE UM N�MERO INTEIRO PARA SABER SE ELE � POSITIVO OU NEGATIVO : "<<endl;
	cin >> x;
	
	
	if(x > 0) {
		cout<<"SEU N�MERO � POSIIVO." <<endl;
	}
	else {
		cout<<"SEU N�MERO � NEGATIVO." << endl;
		
		
	}
	//saber se o seu sal�rio � maior que o salario m�nimo
	cout<<""<<endl;
	cout<<"DIGITE O SEU SAL�RIO: R$ ";
	cin >> z;
	
	 
	
	if(z > 1045) {
		cout<<"SEU SAL�RIO � MAIOR QUE UM SAL�RIO M�NIMO" <<endl;
	}
	
	else if (z == 1045){
		cout<<"O SEU SAL�RIO � O SAL�RIO M�NIMO."<<endl;
	}
	
	
	else {
		cout<<"SEU SAL�RIO � MENOR QUE O SAL�RIO M�NIMO." << endl;
		
		
	}
	
	
	system("pause");
	return 0;
}
