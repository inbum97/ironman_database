// 22C_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "BinarySearchTree.h"

using namespace std;

// Type of BST
typedef BinarySearchTree<Armors> TreeType;

// functions prototype
void menu();
void fileInput(string filename, TreeType &bst);
void screenOutput();


int main()
{
	const char inputFileName[] = "armors.txt";

	TreeType bst;
	fileInput(inputFileName, bst);

	

}

void fileInput(string filename, TreeType &bst)
{
	ifstream infile(filename);

	string codename, type, creator, movie, curstat, precede, succeed, users, capbl, weap;
	int year = 0;

	if (!infile) {
		cout << "Error happened to open the input file!" << endl;
		exit(EXIT_FAILURE);
	}
	
	// READING THE FILE AND DECLARE TO RESPECTICE VARIABLE 
	//======================================================
	while (getline(infile, codename, ';'))
	{
		getline(infile, type, ';');
		getline(infile, creator, ';');
		infile >> year;
		infile.ignore();
		getline(infile, users, ';');
		getline(infile, movie, ';');
		getline(infile, curstat, ';');
		getline(infile, capbl, ';');
		getline(infile, weap, ';');
		getline(infile, precede, ';');
		getline(infile, succeed, ';');

		Armors armors(codename, type, creator, year, users, movie, curstat, capbl, weap, precede, succeed);
		bst.insert(armors);

		// TEST IF FILE IS READ PROPERLY
		cout << "======================================================" << endl;
		cout << "codename: " << codename << endl;
		cout << "type: " << type << endl;
		cout << "creator: " << creator << endl;
		cout << "year: " << year << endl;
		cout << "users: " << users << endl;
		cout << "movie: " << movie << endl;
		cout << "status: " << curstat << endl;
		cout << "capabilities: " << capbl << endl;
		cout << "weapons: " << weap << endl;
		cout << "precede: " << precede << endl;
		cout << "succeed: " << succeed << endl;
		cout << "======================================================" << endl << endl;
	}
	infile.close();
	
}

void menu()
{
	cout << "MENU" << endl;
	cout << "=================================================================" << endl;
	// L : Show list of armors (will prompt sub-menu)
	// (L submenu) - U : Show list of armors (unsorted)
	// (L submenu) - P : Show list of armors (sorted by codename)
	// (L submenu) - S : Show list of armors (sorted by armor type)
	// (L submenu) - T : Show indented list

	// Search : Search for armors
	// (S submenu) - P : Search by codename
	// (S submenu) - P : Search by armor type

	// A : Add new armor (will prompt all the necessary data input)
	// D : Delete armor (codename)
}

void screenOutput()
{
	// DOESNT WORK ON FILE INPUT, CAN BE USED FOR SCREEN OUTPUT
	/*
	// read the amor user into armor vector
	getline(infile, item, ',');
	users.push_back(item);
	getline(infile, item, ';');
	users.push_back(item);
	// CAPBILITIES
	// (1) read from the file until the ';' as one whole string,
	// (2) and the split them into pieces of string and then push them into its vector
	getline(infile, item, ';'); // (1)
	size_t comma = item.find_first_of(','); // first comma
	size_t nextComma = item.find_first_of(',', comma + 1); // next comma
	item2 = item.substr(0, comma); // this line onwards is (2)
	capbl.push_back(item2);
	while (comma != string::npos)
	{
		item2 = item.substr(comma + 1, nextComma - comma - 1);
		capbl.push_back(item2);
		comma = nextComma;
		nextComma = item.find_first_of(',', nextComma + 1);
	}
	// WEAPONS
	// (1) read from the file until the ';' as one whole string,
	// (2) and the split them into pieces of string and then push them into its vector
	getline(infile, item, ';'); // (1)
	comma = item.find_first_of(','); // first comma
	nextComma = item.find_first_of(',', comma + 1); // next comma
	item2 = item.substr(0, comma); // this line onwards is (2)
	weap.push_back(item2);
	while (comma != string::npos)
	{
		item2 = item.substr(comma + 1, nextComma - comma - 1);
		weap.push_back(item2);
		comma = nextComma;
		nextComma = item.find_first_of(',', nextComma + 1);
	}
	*/
}

