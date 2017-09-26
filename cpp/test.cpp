//#define NDEBUG

#include<iostream>
#include<string>
#include<cassert>
#include"ciphers.h"

using namespace std;

int main() {
	assert(!bool(atbash("Hello").compare("Svool")));
	cout << "Atbash: Hello -> " << atbash("Hello") << endl;
	assert(!bool(rot("[Hello", 1).compare("[Ifmmp")));
	cout << "Rot1: [Hello -> " << rot("[Hello", 1) << endl;
	assert(!bool(rot("Hel.lo", 7).compare("Ols.sv")));
	cout << "Rot7: Hel.lo -> " << rot("Hel.lo", 7) << endl;
	assert(!bool(rot("H-e-l-l-o").compare("U-r-y-y-b")));
	cout << "Rot13: H-e-l-l-o -> " << rot("H-e-l-l-o") << endl;
	assert(!bool(morse("Whoa .-").compare(".-- .... --- .- / period dash ")));
	cout << "Morse Code: 'Whoa .-' -> " << morse("Whoa .-") << endl;
	return 0;
}
