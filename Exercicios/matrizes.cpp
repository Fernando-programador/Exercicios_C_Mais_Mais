#include <iostream>
#include <locale> // para aceitar caracteres especiais
#include <iomanip> //casas decimais

using namespace std;

int main(){
setlocale(LC_ALL, "ptb");

				  int mat[3][4] ;
				  
				  cout<<"digite os número múltiplos de 5"<<endl;
				  
				  for(int i=0;i<3;i++){
				  	for(int j=0;j<4;j++){
					  cout<<"digite o elemento["<<(i+1)<<"],["<<(j+1)<<"]: ";
					  cin>>mat[i][j];
  				 	
					  }	
				  }
				  	  for(int i=0;i<3;i++){
				  	  	cout<<""<<endl;  	  	
				  	  	
				  	for(int j=0;j<4;j++){
					  cout<<"elemento["<<i<<"],["<<j<<"]:"<<mat[i][j]<<" ";
					  

					  }	
				  }
				  		
	
	cout<<""<<endl;
	
	
	
	//cout<<fixed<<setprecision(digitar numero de casas)<<variável<<endl;
	
	
	system("pause");
	return 0;
}
