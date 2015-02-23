#include "database.h"

using namespace std;

Database::Database(){
	this->next_slot_ = 0;
}
Database::~Database(){}

Composer& Database::addComposer(string firs_name, string last_name, string genre, int yob, string fact){
	Composer composer;
	composer.setFirstName(firs_name);
	composer.setLastName(last_name);
	composer.setComposerGenre(genre);
	composer.setComposerYob(yob);
	composer.setFact(fact);
	composer.setRanking(kDefaultRanking);
	composers_[this->next_slot_] = composer;
	this->next_slot_ += 1;
	return composer;
}

Composer& Database::getComposer(string last_name){
	for(int i = 0; i<next_slot_; i++){
		if(composers_[i].lastName() == last_name){
			return composers_[i];
		}
	}
}

void Database::displayAll(){
	for(int i = 0; i<next_slot_ ; i++){
		composers_[i].display();
		cout << "*********************************"<< endl;

	}
}

void Database::displayByRank(){
	for(int i = 0; i<next_slot_; i++){
		composers_[i].display();
		cout << "*********************************"<< endl;
	}
}
