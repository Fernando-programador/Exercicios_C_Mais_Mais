#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	int num, x, res;
	
	
	cout<<"DIGITE QUAL TABUADA VOCÊ DESEJA SABER: ";
	cin>> num;
	cout<< " "<<endl;
	x = 0;
	while (x <= 10) {
		res = x * num;
		
		cout<<num<<" X "<<x<<" = "<<res<<endl;
		
		x++ ; 
		
		
	}
	
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
