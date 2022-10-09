#include "lotoSort.hpp"
#include <cstdio>
#include <iostream>
#include <random>
#include <algorithm>

void run()
{
  while(true)
 {	
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
}


void quina()
{
  using std::cout;
  
  constexpr int MIN = 1;
  constexpr int MAX = 80;

  constexpr int RAND_NUMS_TO_GENERATE = 5;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (std::size_t n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    
    if ( n < RAND_NUMS_TO_GENERATE - 1 )
    {
      cout << distr(eng) << " - ";
    } else
    {
      cout << distr(eng);
    }
  }
  cout << '\n';
}

void sena(){

  using std::cout;

  constexpr int MIN = 1;
  constexpr int MAX = 60;

  constexpr int RAND_NUMS_TO_GENERATE = 6;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (std::size_t n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    if ( n < RAND_NUMS_TO_GENERATE - 1 )
    {
      cout << distr(eng) << " - ";
    } else
    {
      cout << distr(eng);
    }
  }
  cout << '\n';
}

void mania()
{
  using std::cout;

  constexpr int MIN = 1;
  constexpr int MAX = 60;

  constexpr int RAND_NUMS_TO_GENERATE = 6;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (std::size_t n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    if ( n < RAND_NUMS_TO_GENERATE - 1 )
    {
      cout << distr(eng) << " - ";
    } else
    {
      cout << distr(eng);
    }
  }
  cout << '\n';
}

void facil()
{
  using std::cout;

  constexpr int MIN = 1;
  constexpr int MAX = 25;

  constexpr int RAND_NUMS_TO_GENERATE = 15;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (std::size_t n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    if ( n < RAND_NUMS_TO_GENERATE - 1 )
    {
      cout << distr(eng) << " - ";
    } else
    {
      cout << distr(eng);
    }
  }
  cout << '\n';
}

void showTips()
{
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
}