//composer.h Alberto Izquierdo
//Description: The class for a Composer record.
//The default ranking is 10 which is the lowest posible.
#include <string>
const int kDefaultRanking = 10;
using namespace std;

class Composer{
	public:
		//Constructor
		Composer();
		//Destructor
		~Composer();
		
		//Accessors and mutators
		void setFirstName(string first_name);
		string firstName();
		void setLastName(string last_name);
		string lastName();
		void setComposerYob(int yob);
		int composerYob();
		void setComposerGenre(string genre);
		string composerGenre();
		void setRanking(int ranking);
		int ranking();
		void setFact(string fact);
		string fact();

		//Methods
		//This method increases composer's rank by increment
		void promote(int increment);
		//This method decreases composer's rank by decrement
		void demote(int decrement);
		//This method displays all the atributes of a composer
		void display();

	private:
		string first_name_;
		string last_name_;
		int composer_yob_;
		string composer_genre_;
		string fact_;
		int ranking_;
};
