#include "Classes.h"

int main()
{
	Eighth* eighthPtr;
	string id;
	cin >> id;
	Eighth obj(id);
	eighthPtr = &obj;
	cout << eighthPtr->Sixth::Second::getFirstId() << '\n';
	cout << eighthPtr->Seventh::Fourth::getFirstId() << '\n';
	cout << eighthPtr->Seventh::Fifth::getFirstId() << '\n';
	cout << eighthPtr->Sixth::Second::getId() << '\n';
	cout << eighthPtr->Sixth::Third::getId() << '\n';
	cout << eighthPtr->Seventh::Fourth::getId() << '\n';
	cout << eighthPtr->Seventh::Fifth::getId() << '\n';
	cout << eighthPtr->Sixth::getId() << '\n';
	cout << eighthPtr->Seventh::getId() << '\n';
	cout << eighthPtr->getId();
	return(0);
}
