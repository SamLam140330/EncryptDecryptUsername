#include <conio.h>
#include <iostream>
#include "EncryptDecryptUsername.h"

using namespace std;

int main(int argc, char* argv[])
{
	string text;
	std::cout << "Please enter the string:" << std::endl;
	std::cin >> text;

	encrypt_decrypt::to_encrypt_decrypt(text);

	std::cout << "Press any key to exit..." << std::endl;
	(void)_getch();
}
