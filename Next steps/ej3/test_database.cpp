// test_database.cpp, Maggie Johnson
//
// Description: Test driver for a database of Composer records.
#include <iostream>
#include "database.h"
using namespace std;

int main() {
  Database myDB;

  // Remember that AddComposer returns a reference to the new record.
  Composer& comp1 = myDB.addComposer("Ludwig van", "Beethoven", "Romantic", 1770,
    "Beethoven was completely deaf during the latter part of his life - he never "
    "heard a performance of his 9th symphony.");
  comp1.promote(7);

  Composer& comp2 = myDB.addComposer("Johann Sebastian", "Bach", "Baroque", 1685,
    "Bach had 20 children, several of whom became famous musicians as well.");
  comp2.promote(5);

  Composer& comp3 = myDB.addComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
    "Mozart feared for his life during his last year - there is some evidence "
    "that he was poisoned.");
  comp3.promote(2);

  cout << endl << "all Composers: " << endl << endl;
  myDB.displayAll();
}
