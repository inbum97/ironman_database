// Specification file for the Armor class
// IDE: Visual Studio

#include <string>
#include <vector>

#ifndef ARMOR_H
#define ARMOR_H

using namespace std;

class Armors
{
private:
	string codename;	// Codename (name of armor) (unique key)
	string armorType;	// Type (amor type) (secondary key)
	string creator;	// Creator 
	int yearMade;	// Year Made - int (year of creation)
	string users;	// Users - vector of string (multiple users)
	string movieAppeared;	// movieAppeared - string (Name of the movies appeared)
	string currStats;	// Current Status (active, damaged, destroyed)
	string capabilities;	// Capabilities - vector of string (multiple capabilities)
	string weapons;	// Weapons - vector of string (multiple weapons)
	string precede;	// Precede - string (precede model)
	string succeed;	// Succeed - string (succeeding model)

public:
	// Constructors
	Armors()
	{
		codename = "";
		armorType = "";
		creator = "";
		yearMade = 0;
		users = "";
		movieAppeared = "";
		currStats = "";
		capabilities = "";
		weapons = "";
		precede = "";
		succeed = "";
	};

	Armors(string coden, string type, string inventor, int yearmade, 
		string user, string movieShown, string currStat, string capbl, 
		string weap, string precedeModel, string succeedModel) : codename(coden), 
																	armorType(type), 
																	creator(inventor),
																	yearMade(yearmade),
																	users(user),
																	movieAppeared(movieShown),
																	currStats(currStat),
																	capabilities(capbl),
																	weapons(weap),
																	precede(precedeModel),
																	succeed(succeedModel) {};

	// Destructor
	//~Armor();

	// Setters


	// Getters


	// Other functions
	void display();		// display the information of the searched iron man suit.

};

#endif
#pragma once
