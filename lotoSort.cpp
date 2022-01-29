#include <iostream>
#include <random>
#include <algorithm>
#include "numRandoms.h"

using namespace std;

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