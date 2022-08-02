#include <iostream>
#include <random>
#include <algorithm>
#include "numRandoms.hpp"

int main(){

  
 while(true){
	
	std::string tipojog;

	std::cout << std::endl;
  	std::cout << "======= lotoSort ========" << std::endl;
	std::cout << "_________________________" << std::endl;
 	std::cout << "| - Jogos disponíveis - |" << std::endl;
	std::cout << "|-----------------------|" << std::endl;
	std::cout << "| 1 - Quina             |" << std::endl;
	std::cout << "| 2 - Mega-Sena         |" << std::endl;
	std::cout << "| 3 - LotoMania         |" << std::endl;
	std::cout << "| 4 - LotoFácil         |" << std::endl;
	std::cout << "|-----------------------|" << std::endl;
 	std::cout << std::endl << "Digite o número correspondente ao tipo de aposta: " << std::endl;
	std::cout << "> ";
  	std::cin >> tipojog;
  	std::cout << std::endl;

	if(tipojog == "1")
	{
		std::cout << "Quina" << std::endl;
		quina(); 
	}else if(tipojog == "2")
	{
		std::cout << "Mega-Sena" << std::endl;
		sena();
	}else if(tipojog == "3")
	{
		std::cout << "LotoMania" << std::endl;
		mania();
	}else if(tipojog == "4")
	{
		std::cout << "LotoFácil" << std::endl;
		facil();
	}else
	{
		std::cout << "Opção inválida, tente novamente." << std::endl;
		std::cout << std::endl;
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