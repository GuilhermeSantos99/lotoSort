#include <iostream>
#include <random>

using namespace std;

void quina();
void sena();
void mania();
void facil();


int main(){
  
 while(true){

   int tipojog;

   cout << "=== Gerador de números para apostas de loteria ===";
   cout << endl << endl;

   cout << "Jogos disponíveis" << endl;
   cout << "1 - Quina" << endl << "2 - Mega-Sena" << endl
     << "3 - LotoMania" << endl << "4 - LotoFácil" << endl;
   cout << "Digite o número correspondente ao tipo de aposta: ";
   cin >> tipojog;
   cout << endl;

   if(tipojog == 1){
     cout << "Quina" << endl;
     quina(); 
   }
   else if(tipojog == 2){
     cout << "Mega-Sena" << endl;
     sena();
   }
   else if(tipojog == 3){
     cout << "LotoMania" << endl;
     mania();
   }
   else if(tipojog == 4){
     cout << "LotoFácil" << endl;
     facil();
   }
   else{
     cout << "Opção inválida, tente novamente." << endl;
     cout << endl;
   }

  char varConti;
  cout << endl << "Deseja gerar mais números aleatórios? [S/N] ";
  cin >> varConti;
  tolower(varConti);

  if (varConti == 'n')
  {
    break;
  }
 } 
  return 0;
}

void quina(){

  using std::cout;
  using std::endl;

  constexpr int MIN = 1;
  constexpr int MAX = 80;

  constexpr int RAND_NUMS_TO_GENERATE = 5;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    cout << distr(eng) << "; ";
  }
  cout << endl;
}

void sena(){
  using std::cout;
  using std::endl;

  constexpr int MIN = 1;
  constexpr int MAX = 60;

  constexpr int RAND_NUMS_TO_GENERATE = 6;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    cout << distr(eng) << "; ";
  }
  cout << endl;

}

void mania(){
  using std::cout;
  using std::endl;

  constexpr int MIN = 1;
  constexpr int MAX = 60;

  constexpr int RAND_NUMS_TO_GENERATE = 6;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    cout << distr(eng) << "; ";
  }
  cout << endl;
}

void facil(){
  using std::cout;
  using std::endl;

  constexpr int MIN = 1;
  constexpr int MAX = 25;

  constexpr int RAND_NUMS_TO_GENERATE = 15;
    
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_int_distribution<int> distr(MIN, MAX);

  for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n){
    cout << distr(eng) << "; ";
  }
  cout << endl;
}