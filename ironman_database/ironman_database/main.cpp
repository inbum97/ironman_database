// 22C_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

// functions prototype
void menu();
void fileInput(string filename);


int main()
{
	const char inputFileName[] = "armors.txt";

	cout << "Hello World!\n";
}

void fileInput(string filename)
{
	ifstream infile(filename);

	string codename, type, creator, movie, curstat, precede, succeed;
	int year;

	if (!infile) {
		cout << "Error happened to open the input file!" << endl;
		exit(EXIT_FAILURE);
	}

	/*

	while (infile >> keyid)
	{
		infile.ignore();
		getline(infile, toyname, ';');

		infile >> toyage >> toyprice;
		//Use constructor to pass the values to the toy object.
		Toy toy(keyid, toyname, toyage, toyprice);
		bst.insert(toy);
	}
	infile.close();
	*/
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


