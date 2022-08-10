#ifndef NUMRANDOMS_H_INCLUDED
#define NUMRANDOMS_H_INCLUDED

#include <iostream>
#include <random>

void quina();
void sena();
void mania();
void facil();

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
    cout << distr(eng) << "; ";
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
    cout << distr(eng) << "; ";
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
    cout << distr(eng) << "; ";
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
    cout << distr(eng) << "; ";
  }
  cout << '\n';
}

#endif
