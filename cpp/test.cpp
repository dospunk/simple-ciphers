//#define NDEBUG

#include<iostream>
#include<string>
#include<cassert>
#include"ciphers.h"
#include"utils.h"

using namespace std;

int main() {
	//utils
	assert(!bool(filter("abcdefghijk", "abcefhij").compare("dgk")));
	cout << "Filter: abcdefghijk - abcefhij = " << filter("abcdefghijk", "abcefhij") << endl;
	assert(!bool(removeDuplicates("aabbcccd567ij").compare("abcd567ij")));
	cout << "Remove Duplicates: aabbcccd567ij -> " << removeDuplicates("aabbcccd567ij") << endl;
	assert(!bool(lowerString("AbCd5Y+uU").compare("abcd5y+uu")));
	cout << "Lower String: AbCd5Y+uU -> " << lowerString("AbCd5Y+uU") << endl;
	cout << endl;
	// ciphers
	assert(!bool(atbash("He<l0l|o").compare("Sv<o0o|l")));
	cout << "Atbash: He<l0l|o -> " << atbash("He<l0l|o") << endl;
	assert(!bool(rot("[Hello", 1).compare("[Ifmmp")));
	cout << "Rot1: [Hello -> " << rot("[Hello", 1) << endl;
	assert(!bool(rot("Hel.lo", 7).compare("Ols.sv")));
	cout << "Rot7: Hel.lo -> " << rot("Hel.lo", 7) << endl;
	assert(!bool(rot("H-e-l-l-o").compare("U-r-y-y-b")));
	cout << "Rot13: H-e-l-l-o -> " << rot("H-e-l-l-o") << endl;
	assert(!bool(morse("Whoa .-/").compare(".-- .... --- .- / period dash forwardslash ")));
	cout << "Morse Code: 'Whoa .-/' -> " << morse("Whoa .-/") << endl;
	assert(!bool(keyword("s7eeeeeecret", "bestKey").compare("p7kkkkkksokq")));
	cout << "Keyword Cipher: 's7eeeeeecret' with keyword 'bestKey' -> " << keyword("s7eeeeeecret", "bestkey") << endl;
	return 0;
}
