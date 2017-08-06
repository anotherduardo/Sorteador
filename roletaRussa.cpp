#include<iostream>
#include<cstdlib>


/*Para compilar
g++ roletaRussa.cpp -o executavel -lm*/

using namespace std;

bool checaNum(short vet[], int num, int tam);

int main(int argc, char *argv[ ]){

   string nomes[100];
   short vet[100];
   short i, j, k;
   short cluster;

   cluster = 1;

   // Semente
   srand(time(NULL));

   i = 0;
   while(getline(cin, nomes[i]))
      i++;

   for(j = 0; j < i; j++){
      k = rand()% i;
      while(checaNum(vet, k, j))
         k = rand()% i;

      vet[j] = k;
   }

   cout << "\n\n" << endl;
   if(cluster > 1){
      k = 1;
      cout << "-----------------------------------------"<< endl;
      for(j = 0; j < i; j++){
         cout << j+1 << "º:" << endl;
         while(k != cluster){
            cout <<  nomes[vet[j]] << endl;
            k++;
            j++;
         }
         k = 1;
      }
      cout << "-----------------------------------------\n\n"<< endl;
   }
   else{
      cout << "-----------------------------------------"<< endl;
      for(j = 0; j < i; j++){
         cout << j+1 << "º " <<  nomes[vet[j]] << endl;
      }
      cout << "-----------------------------------------\n\n"<< endl;
   }

}//fim[main]

bool checaNum(short vet[], int num, int tam){

   short i;
   for(i = 0; i < tam; i++){
      if(vet[i] == num)
         return true;
   }
   return false;

}//fim[checaNum]
