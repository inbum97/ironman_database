// Specification file for the Armor class
// IDE: Visual Studio

#include <string>
#include <vector>

#ifndef ARMOR_H
#define ARMOR_H

using namespace std;

template <typename T>
class Armor
{
private:
	string codename;	// Codename (name of armor) (unique key)
	string armorType;	// Type (amor type) (secondary key)
	string creator;	// Creator 
	int yearMade;	// Year Made - int (year of creation)
	vector<T> users;	// Users - vector of string (multiple users)
	string movieAppeared;	// movieAppeared - string (Name of the movies appeared)
	string currStats;	// Current Status (active, damaged, destroyed)
	vector<T> capabilities;	// Capabilities - vector of string (multiple capabilities)
	vector<T> weapons;	// Weapons - vector of string (multiple weapons)
	string precede;	// Precede - string (precede model)
	string succeed;	// Succeed - string (succeeding model)

public:
	// Constructors
	Armor();
	Armor(string coden, string type, string inventor, int yearmade, vector<T> user, string movieShown,
		string currStat, vector<T> capbl, vector<T> weap, string precedeModel, string succeedModel);

	// Destructor
	~Armor();

	// Setters


	// Getters


	// Other functions
	void display();		// display the information of the searched iron man suit.

};

template <typename T>
Armor<T>::Armor()
{
	seriesNum = 0;
	codename = "";
	creator = "";
	yearMade = 0;
	users.clear();
	movieAppeared = "";
	currStat = "";
	capabilities.clear();
	weapons.clear();
	precede = "";
	succeed = "";
}

template <typename T>
Armor<T>::Armor(string coden, string type, string inventor, int yearmade, vector<T> user, string movieShown,
	string currStat, vector<T> capbl, vector<T> weap, string precedeModel, string succeedModel)
{
	codename = coden;
	armorType = type;
	creator = inventor;
	yearMade = yearmade;
	users = user;
	movieAppeared = movieShown;
	currStats = currStat;
	capabilities = capbl;
	weapons = weap;
	precede = precedeModel;
	succeed = succeedModel;
}

#endif
#pragma once
#pragma once
