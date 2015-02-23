//composer.cpp Alberto Izquierdo
//Description: Class for a Composer record
#include <string>
#include <iostream>
#include "composer.h"

using namespace std;

Composer::Composer(){
}

Composer::~Composer(){
}

void Composer::setFirstName(string first_name){
	this->first_name_ = first_name;
}

string Composer::firstName(){
	return this->first_name_;
}

void Composer::setLastName(string last_name){
	this->last_name_ = last_name;
}

string Composer::lastName(){
	return last_name_;
}

void Composer::setComposerYob(int yob){
	this->composer_yob_ = yob;
}

int Composer::composerYob(){
	return this->composer_yob_;
}

void Composer::setComposerGenre(string genre){
	this->composer_genre_ = genre;
}

string Composer::composerGenre(){
	return this->composer_genre_;
}

void Composer::setRanking(int ranking){
	this->ranking_ = ranking;
}

int Composer::ranking(){
	return this->ranking_;
}

void Composer::setFact(string fact){
	this->fact_ = fact;
}

string Composer::fact(){
	return this->fact_;
}

void Composer::promote(int increment){
	this->ranking_ -= increment;
	if(this->ranking_ < 1){
		this->ranking_ = 1;
	}
}

void Composer::demote(int decrement){
	this->ranking_ += decrement;
	if(this->ranking_ > 10){
		this->ranking_ = 10;
	}
}

void Composer::display(){
	cout << "First name: " << this->first_name_ << endl << "Last name: " << this->last_name_ << endl << "Composer yob: " << this->composer_yob_ << endl << "Ranking: " << this->ranking_ << endl << "Fact: " << this->ranking_ << endl;
}
