#include <iostream> 
 
using namespace std;

int main()
{
	float tempC, tempF;
	
	cout << ("Digite a temperatura em Farhenheit: ") ;
	cin >> tempF;
	
	tempC = (tempF - 32)/ 1.8;
	 
	 cout << "A temperatura " << tempF << " em celsius eh "  << tempC ;
	cout << "";
	
	
	system("pause")	;                
	
	
	
	return 0;	
}
