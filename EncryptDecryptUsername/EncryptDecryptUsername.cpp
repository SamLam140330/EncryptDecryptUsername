// This is just a basic template
// Please use the secret key to decrypt the real coding

#include <iostream>
#include "EncryptDecryptUsername.h"
using namespace std;

void encrypt()
{
	// Encrypt function
}

void decrypt()
{
	// Decrypt function
}

int main()
{
	cout << "Please enter the name that you want to query:" << endl;
	cin >> name;

	cout << "\nPlease choose the following options:\n";
	cout << "1 = Encrypt the name" << endl;
	cout << "2 = Decrypt the name" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		encrypt();
		break;
	case 2:
		decrypt();
		break;
	default:
		cout << "\nInvalid Input!" << endl;
	}
	return 0;
}
