#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include <string>
using namespace std;
class Animal {            

   public:                                         

       Animal(string speciesName, unsigned int discoveryYear);
        //         species = speciesName;                                           
                                                                                 
        //  year_discovered = discoveryYear;                                            
                                                                            
       Animal();

       void display();
    //        cout << species << " [" << year_discovered << "]" << endl;                  
                                                                                            

                                                                                           
   private:                                                                           
      string species;
      unsigned int year_discovered;
};


#endif
