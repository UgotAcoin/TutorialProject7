#include <iostream>
#include <list>
#include <string>


using namespace std;

int main() 
{
	
	list<string> shopItemNames;
	shopItemNames.push_back("Gloves");
	shopItemNames.push_front("Axes");
	shopItemNames.push_back("Kittens");
	shopItemNames.push_back("Swords");
	shopItemNames.push_back("Hats");
	shopItemNames.push_back("Kittens");


	list<string>::iterator it;

	for (it = shopItemNames.begin(); it != shopItemNames.end(); it++) {
		cout << *it << endl;
	}


	for (it = shopItemNames.begin(); it != shopItemNames.end(); it++) {
		if (*it == "Kittens") {
			shopItemNames.erase(it);
			break;
		}
	}

	cout << endl;

	for (it = shopItemNames.begin(); it != shopItemNames.end(); it++) {
		cout << *it << endl;
	}

	system("PAUSE");
	return 0;
}