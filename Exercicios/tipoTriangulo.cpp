#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");	

double l1, l2, l3;
 
 cout<<"VAMOS DESCOBRIR QUE TIPO DE TRINGULO É?"<<endl;
 cout<<""<<endl;
 cout<<"DIGITE O VAOR DO 1º LADO DO TRINAGULO: " ;
 cin >> l1;
 cout<<""<<endl;
	
	
 cout<<"DIGITE O VAOR DO 2º LADO DO TRINAGULO: " ;
 cin >> l2;
 cout<<""<<endl;
	
 cout<<"DIGITE O VAOR DO 3º LADO DO TRINAGULO: " ;
 cin >> l3;
 cout<<""<<endl;
 
 
 if(l1 ==l2 && l2 == l3){
 	cout<<"O SEU TRIÂNGULO É UM EQUILÁTERO.";
 }
 
 else if (l1 == l2 || l1 == l3 || l2 == l3){
 	
 	cout<<"O SEU TRIÂNGULO É UM ISÓSCELES.";
 }
 
 else{
 	cout<<"O SEU TRIÂNGULO É UM ESCALENO.";
 	
 }
	
	
 cout<<""<<endl;
	system("pause");
	return 0;
}
