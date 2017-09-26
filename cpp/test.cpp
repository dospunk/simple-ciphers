#include<iostream>
#include<string>
#include<cassert>
#include"ciphers.h"

using namespace std;

int main() {
	assert(!bool(atbash("Hello").compare("Svool")));
	cout << "Atbash: Hello -> " << atbash("Hello") << endl;
	assert(!bool(rot("Hello", 1).compare("Ifmmp")));
	cout << "Rot1: Hello -> " << rot("Hello", 1) << endl;
	assert(!bool(rot("Hello", 7).compare("Olssv")));
	cout << "Rot7: Hello -> " << rot("Hello", 7) << endl;
	assert(!bool(rot("Hello").compare("Uryyb")));
	cout << "Rot13: Hello -> " << rot("Hello") << endl;
	return 0;
}
