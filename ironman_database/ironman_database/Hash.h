
#ifndef Hash_H
#define Hash_H

#include <list>

using namespace std;

template<class T>
class Hash {
private:
	//number of buckets
	int numBucket;
	list<T>* table;
	//string unikey = "Sneaky";
public:
	//constructor
	Hash();
	//overloaded constructor
	Hash(int);
	//basic hash functions
	bool insertItem(T* armor);
	bool deleteItem(T target);
	int hashFunction(string unikey);
	void displayHash();
};

template <class T>
void Hash<T>::displayHash() {
	for (int i = 0; i < numBucket; i++) {
		cout << i;
		for (auto x : table[i])
			cout << "--> " << x;
		cout << endl;
	}
}

/****************************************************
 hashFunction: This reads each characters from string
  and add up each of ascii value and modulo the size
  of the hash and return that value
  **************************************************/
template <class T>
int Hash<T>::hashFunction(string uniKey) {
	int sum = 0;
	for (int i = 0; i < uniKey.size(); i++) {
		sum += uniKey[i];
	}
	cout << "Bucket number: " << sum % numBucket << endl;
	return (sum % numBucket);
}

//Overloaded Constructor
template<class T>
Hash<T>::Hash(int b) {
	this->bucketNum = b;
	table = new list<T>[bucketNum];
	cout << "Hash array of " << b << " number of index created\n";
}

//Inserting an item into the hash table
template<class T>
bool Hash<T>::insertItem(T * armor) {
	int index = hashFunction(armor->getUnikey());
	table[index].push_back(armor);
	cout << "armor->getName has been inserted\n";
}

//what should be the parameter
template<class T>
bool Hash<T>::deleteItem(T target) {
	int index = hashFunction(target->getUnikey());
	list<T>::iterator i;
	//finding the key in xth list
	for (i = table[index].begin(); i != table[index].end(); i++) {
		if (*i == key)
			break;
	}
	//if found, remove
	if (i != table[index].end()) {
		table[index].erase[i];
		cout << "Target.getName has been removed\n";
	}
}


#endif Hash-H