#include <iostream>
#include <random>
#include <algorithm>
#include "numRandoms.hpp"

int main(){

 while(true){
	
	std::string tipojog;

	std::cout << '\n';
  	std::cout << "======= lotoSort ========" << '\n';
	std::cout << "_________________________" << '\n';
 	std::cout << "| - Jogos disponíveis - |" << '\n';
	std::cout << "|-----------------------|" << '\n';
	std::cout << "| 1 - Quina             |" << '\n';
	std::cout << "| 2 - Mega-Sena         |" << '\n';
	std::cout << "| 3 - LotoMania         |" << '\n';
	std::cout << "| 4 - LotoFácil         |" << '\n';
	std::cout << "|-----------------------|" << '\n';
 	std::cout << '\n' << "Digite o número correspondente ao tipo de aposta: " << '\n';
	std::cout << "> ";
  	std::cin >> tipojog;
  	std::cout << '\n';

	if(tipojog == "1")
	{
		std::cout << "Quina" << '\n';
		quina(); 
	}else if(tipojog == "2")
	{
		std::cout << "Mega-Sena" << '\n';
		sena();
	}else if(tipojog == "3")
	{
		std::cout << "LotoMania" << '\n';
		mania();
	}else if(tipojog == "4")
	{
		std::cout << "LotoFácil" << '\n';
		facil();
	}else
	{
		std::cout << "Opção inválida, tente novamente." << '\n';
		std::cout << '\n';
	}

	char varConti;

	std::cout << "Deseja gerar mais números aleatórios? [S/N] ";
	std::cin >> varConti;
	tolower(varConti);

	if (varConti == 'n')
	{
		break;
	}
 } 
  return 0;
}