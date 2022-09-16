#ifndef NUMRANDOMS_HPP_INCLUDED
#define NUMRANDOMS_HPP_INCLUDED

#include <iostream>
#include <random>

void quina();
void sena();
void mania();
void facil();
void showTips();

void quina()
{
  using std::cout;
  
  constexpr int MIN = 1;
  constexpr int MAX = 80;

  constexpr int RAND_NUMS_TO_GENERATE = 5;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    
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

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
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

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
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

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
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

#endif