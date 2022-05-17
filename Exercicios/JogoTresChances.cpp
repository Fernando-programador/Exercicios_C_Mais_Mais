#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	 
	 int num1[10];
	 int num2[3];
	 int x;
	 int y;
	 string jog1;
	 string jog2;
	 
	 
	x = 0;
	y = 0;
	
	cout<<"O JOGO DO PAPAI KKKK."<<endl;
	
	cout<<"DIGITE O SEU NOME:";
	cin>>jog1;
	
	cout<<"AGORA O SEGUNDO JOGADOR DIGITA O SEU NOME: "<<endl;
	cin>>jog2;
	
	cout<<"DIGITES 10 NÚMEROS ENTRE 0 ATE 99: "<<endl;
	
	
	
	
	
	for (x = 0; x <= 10 ; x++){
		cout<<"DIGITE O "<< x+1<<"º NUMERO: ";
		cin>> num1[x];
		cout<<""<<endl;
		
		
	}
	cout<<"OK. TUDO PRONTO."<<endl;
	cout<<"AGORA O PROXIMO JOGADOR TEM 3 CHANCES PARA ACERTAR UM DOS 10 NÚMERO."<<endl;
	
	for(y = 0; y <=2; y++){
		
	cout<<"DIGITE O "<< y+1<<"º NÚMERO."<<endl;
	cin>>num2[y];	
	cout<<""<<endl;
	
	for(x = 0; x<= 10 ; x++){
		
	if (num2[y] == num1[x]){
		cout<<"PARABÉS";
		cout<<jog2<<"VOCÊ ACERTOU O NÚMERO: "<<num2<<endl;
		
	}else{
		cout<<"KKKK. VOCÊ ERROU "<<jog2<<endl;
		cout<<"A "<<jog1<<"ESTÁ CONSEGUINDO TE ENGANAR";
	}
	}
	
	}
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
