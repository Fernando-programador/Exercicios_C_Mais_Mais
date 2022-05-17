#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	
	 
	 int num1[10];
	 int num2[3];
	 int num3[3];
	 int x;
	 int y;
	 string jog1;
	 string jog2;
	 
	 
	x = 0;
	y = 0;
	
	cout<<"O JOGO DO PAPAI KKKK."<<endl;
	
	cout<<"DIGITE O SEU NOME:"<<endl;
	cin>>jog1;
	
	cout<<"AGORA O SEGUNDO JOGADOR DIGITA O SEU NOME: "<<endl;
	cin>>jog2;
	cout<<""<<endl;
	
	cout<<"DIGITES 10 NÚMEROS ENTRE 0 ATE 99: "<<endl;
	cout<<"SEM REPETIR"<<endl;
	
	
	
	
	
	for (x = 0; x < 10 ; x++){
		cout<<"DIGITE O "<< x+1<<"º NUMERO: ";
		cin>> num1[x];
		
	}
	
	
	cout<<"OK. TUDO PRONTO."<<endl;
	cout<<"AGORA O PROXIMO JOGADOR TEM 3 CHANCES PARA ACERTAR UM DOS 10 NÚMEROS."<<endl;
	
	for(y = 0; y <3; y++){
		
	cout<<"DIGITE O "<< y+1<<"º NÚMERO."<<endl;
	cin>>num2[y];	
	cout<<""<<endl;
	
	for(x = 0; x<= 10 ; x++){
		
	if (num2[y] == num1[x]){
		num3[y]=num2[y];
		
	}
	
	
	
	}
	
	for(y = 0; y < 3; y++){
		
		cout<<"RESULTADO: "<< num3[y]<<", ";
	}
	
	
	}
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
