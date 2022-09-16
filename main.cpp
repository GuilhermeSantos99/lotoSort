#include <iostream>
#include <random>
#include <algorithm>
#include "numRandoms.hpp"

int main(){

 while(true){
	
	std::string tipojog;

	showTips();

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