#include<iostream>
#include<string>
#include<cassert>
#include"ciphers.h"

using namespace std;

int main() {
	assert(!bool(atbash("Hello").compare("Svool")));
	cout << "Hello -> " << atbash("Hello") << endl;
	return 0;
}
