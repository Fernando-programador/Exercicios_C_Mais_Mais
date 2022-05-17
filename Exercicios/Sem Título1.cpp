#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");

				  int mat[3][4] ;
				  
				  cout<<"digite os número múltiplos de 5"<<endl;
				  
				  for(i=0;i<3;i++){
				  	for(j=0;j<4;j++){
					  cout<<"digite o elemento["<<i<<"],["<<j<<"]: "<<endl;
					  cin>>mat[i][j];

					  }	
				  }
				  	  for(i=0;i<3;i++){
				  	  	cout<<""<<endl;
				  	  	
				  	  	
				  	  	
				  	  	
				  	for(j=0;j<4;j++){
					  cout<<"elemento["<<i<<"],["<<j<<"]: "<<mat[i][j];
					  

					  }	
				  }
				  		
	
	
	
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
