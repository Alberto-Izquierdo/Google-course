#include <iostream>

using namespace std;

class Order{
	private:
		int bookCode_;
		float singlePrice_;
		int number_on_hand_;
		int enrollment_;
		bool required_;
		bool new_;
		int totalToBuy_;
		float totalPrice_;
	public:
		void setBookCode(int code);
		void setSinglePrice(float price);
		void setNumberOnHand(int num);
		void setEnrollment(int num);
		void setRequired(bool b);
		void setNew(bool b);
		void display();
		float getTotalPrice();
};

void drawLine();

void getData(Order &order);

int main(){
	float total = 0;
	bool keep = false;
	do{
		Order order; 
		getData(order);
		total += order.getTotalPrice();
		char c;
		cout << endl << "Total orders for now: " << total << endl << endl;
		cout << "Keep getting books? (Y/N): ";
		cin >> c;
		if(c=='y'){
			keep = true;
		}
		else{
			keep = false;
		}
	} while(keep);
}

void Order::setBookCode(int code){
	this->bookCode_ = code;
	return;
}

void Order::setSinglePrice(float price){
	this->singlePrice_ = price;
	return;
}

void Order::setNumberOnHand(int num){
	this->number_on_hand_ = num;
	return;
}

void Order::setEnrollment(int n){
	this->enrollment_ = n;
	return;
}

void Order::setRequired(bool b){
	this->required_ = b;
	return;
}

void Order::setNew(bool b){
	this->new_ = b;
	return;
}

float Order::getTotalPrice(){
	return this->totalPrice_;
}

void Order::display(){
	cout << "Book: " << this->bookCode_ << endl << "Price: " << this-> singlePrice_ << endl << "Inventory: " << this->number_on_hand_ << endl << "Enrollment" << this->enrollment_ << endl << endl;
	cout << "This book is ";
	if(this->new_){
		cout << "new ";
	}
	else
		cout << "used ";
	cout << "and ";
	if(this->required_)
		cout << "required";
	else
		cout << "not required";
	cout << endl;
	drawLine();
	float prct;
	if(this->new_){
		if(this->required_){
			prct = 0.9;
		}
		else{
			prct = 0.4;
		}
	}
	else{
		if(this->required_){
			prct = 0.65;
		}
		else{
			prct = 0.2;
		}
	}
	this->totalToBuy_ = (this->enrollment_ * prct) - number_on_hand_;
	this->totalPrice_ = this->totalToBuy_ * this->singlePrice_;
	cout << "Need to order: " << this->totalToBuy_ << endl;
	cout << "Total price: " << this->totalPrice_ << endl;
}

void getData(Order &order){
	cout << "Please enter the book code: ";
	int n;
	while(!(cin >> n)){
		cout << "That's not a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	order.setBookCode(n);
	cout << " single copy price: ";
	float f;
	while(!(cin >> f)){
		cout << "That's not a float" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	order.setSinglePrice(f);
	cout << " number on hand: ";
	while(!(cin >> n)){
		cout << "That's not a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	order.setNumberOnHand(n);
	cout << " prospective enrollment: ";
	while(!(cin >> n)){
		cout << "That's not a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	order.setEnrollment(n);
	cout << " 1 for reqd/other for optional";
	while(!(cin >> n)){
		cout << "That's not a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if(n == 1){
		order.setRequired(true);
	}
	else{
		order.setRequired(false);
	}
	cout << " 1 for new/other for used";
	while(!(cin >> n)){
		cout << "That's not a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if(n == 1){
		order.setNew(true);
	}
	else{
		order.setNew(false);
	}
	order.display();
}

void drawLine(){
	cout << "***************************************************" << endl;
}
