#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	
	string item, x;
	double valor, total;
	int y, z;
	
	
	cout<<"SEJA BEM VINDO "<<endl;
	
	total = 0;
	valor = 0;
	x = "s";
	
	while (x == "s"){
	cout<<"CARDÁPIO: "<<endl;
	cout<<"1- HAMBURGUER - R$5,50"<<endl;
	cout<<"2- CACHORRO-QUENTE - R$4,50"<<endl;
	cout<<"3- MILKSHAKE - R$7,00"<<endl;
	cout<<"4- PIZZA BROTINHO - R$8,00"<<endl;
	cout<<"5- CHEESEHAMBURGUER - R$8,50"<<endl;
	cout<<"6- REFRIGERANTE - R$4,50"<<endl;
	cout<<"7- SUCO - R$2,00"<<endl;
	cout<<"DIGITE O NÚMERO DO ITEM DESEJADO: ";
	cin >> y;
	
	
	
	
		switch(y){
		
		case 1 :			
		
			item = "HAMBURGUER";
			valor = 5.50;
			break;

		case 2 :
			item = "CACHORRO-QUENTE";
			valor = 4.50;
			break;
		
		
		case 3 :
			item = "MILKSHAKE";
			valor = 7.00;
			break;
		
		case 4 :
			item = "PIZZA BROTINHO";
			valor = 8.00;
			break;
		
		case 5 :
			item = "CHEESEBURGUER";
			valor = 8.50;
			break;
		
		case 6 :
			item = "REFRIGERANTE";
			valor = 4.50;
			break;
		
		case  7 :
			item = "SUCO";
			valor = 2.00;
			break;
		
	}
	 	total = valor + total; 
	 	cout<<""<<endl;
	 	
	 	z++;
		cout <<item<<"| R$"<< valor <<endl;
		cout<<"deseja ao a mais s|n: ";
		cin >> x;
		 
		
	}
	
	 	cout<<""<<endl;
		cout <<"SUA CONTA FICOU R$ "<< total <<endl;
	
	
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
