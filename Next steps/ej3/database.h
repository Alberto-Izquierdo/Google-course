//database.h Alberto Izquierdo
//Description: Class for a database of Composer records
#include <iostream>
#include "composer.h"
#include <string>

//Our database holds 100 composers
const int kMaxComposers = 100;

class Database{
	public:
		//Constructor
		Database();
		//Destructor
		~Database();

		//Add a new composer
		Composer& addComposer(string firs_name, string last_name, string genre, int yob, string fact);
		//Search for a composer using last_name
		Composer& getComposer(string last_name);
		//Displays all composers
		void displayAll();
		//Sort database records by rank and then display all
		void displayByRank();

	private:
		//Store the individual records in an array
		Composer composers_[kMaxComposers];
		//Track the next slot in the array to place a new record
		int next_slot_;;
};
