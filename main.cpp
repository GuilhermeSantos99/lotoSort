#include <iostream>
#include <random>
#include <algorithm>
#include "numRandoms.hpp"

using namespace std;

int main(){

  
 while(true){
	
	string tipojog;

	cout << endl;
  	cout << "======= lotoSort ========" << endl;
	cout << "_________________________" << endl;
 	cout << "| - Jogos disponíveis - |" << endl;
	cout << "|-----------------------|" << endl;
	cout << "| 1 - Quina             |" << endl;
	cout << "| 2 - Mega-Sena         |" << endl;
	cout << "| 3 - LotoMania         |" << endl;
	cout << "| 4 - LotoFácil         |" << endl;
	cout << "|-----------------------|" << endl;
 	cout << endl << "Digite o número correspondente ao tipo de aposta: " << endl;
	cout << ">";
  	cin >> tipojog;
  	cout << endl;

	if(tipojog == "1")
	{
		cout << "Quina" << endl;
		quina(); 
	}else if(tipojog == "2")
	{
		cout << "Mega-Sena" << endl;
		sena();
	}else if(tipojog == "3")
	{
		cout << "LotoMania" << endl;
		mania();
	}else if(tipojog == "4")
	{
		cout << "LotoFácil" << endl;
		facil();
	}else
	{
		cout << "Opção inválida, tente novamente." << endl;
		cout << endl;
	}

	char varConti;

	cout << "Deseja gerar mais números aleatórios? [S/N] ";
	cin >> varConti;
	tolower(varConti);

	if (varConti == 'n')
	{
		break;
	}
 } 
  return 0;
}