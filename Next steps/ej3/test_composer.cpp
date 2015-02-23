// test_composer.cpp, Maggie Johnson
//
// This program tests the Composer class.

#include <iostream>
#include <string>
#include "composer.h"
using namespace std;

int main()
{
  cout << endl << "Testing the Composer class." << endl << endl;

  Composer composer;

  composer.setFirstName("Ludwig van");
  composer.setLastName("Beethoven");
  composer.setComposerYob(1770);
  composer.setComposerGenre("Romantic");
  composer.setFact("Beethoven was completely deaf during the latter part of "
    "his life - he never heard a performance of his 9th symphony.");
  composer.promote(2);
  composer.demote(1);
  composer.display();
}
