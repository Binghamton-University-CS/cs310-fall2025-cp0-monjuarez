#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Animal.h"
#include "AnimalsInZoo.h"
/*
  
class Animal {
   public:
      Animal(string speciesName, unsigned int discoveryYear) {
         species = speciesName;
         year_discovered = discoveryYear;
      }

      Animal() : species(""), year_discovered(0) {};

      void display() {
         cout << species << " [" << year_discovered << "]" << endl;
      }

   private:
      string species = "";
      unsigned int year_discovered = 0;
};

*/

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   Animal animal3("Lion Cub", 2025);
   animal3.display();

   /// animals in zoo
   AnimalsInZoo zoo1;

   zoo1 = AnimalsInZoo(animal3);
   zoo1.display();
   delete animal1;
}
