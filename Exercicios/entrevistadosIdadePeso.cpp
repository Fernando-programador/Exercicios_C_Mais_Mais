#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	int idade, x, y ;
	double peso, mPeso, mIdade, tIdade, tPeso;
	
	x =0;
	y =0;
	tIdade = 0;
	tPeso = 0;
	
	while(x == 0){
		cout<<"DIGITE SUA IDADE: ";
		cin >>idade;
		
		cout<<"DIGITE O SEU PESO: ";
		cin>>peso;
		
		tIdade = tIdade + idade;
		tPeso = tPeso + peso;
		y++;
		
		cout<<"SE DESEJA CONTINUAR DIGITE '0' OU '1' PARA PARAR: ";
		cin>>x;
	}
	
	mIdade = double (tIdade / y);
	mPeso = double (tPeso / y);
	
	
	cout<<"A MÉDIA DE IDADE DOS ENTREVISTADOS É: "<<fixed<<setprecision(0)<<mIdade<<" ANOS."<<endl;
	cout<<"A MÉDIA DE PESO DOS ENTREVISTADOS É: "<<fixed<<setprecision(2)<<mPeso<<" Kg."<<endl;
	
	
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
