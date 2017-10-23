//#define NDEBUG

#include<iostream>
#include<string>
#include<cassert>
#include"ciphers.h"
#include"utils.h"

using namespace std;

int main() {
	{//tests utils
		assert(filter("abcdefghijk", "abcefhij") == "dgk");
		assert(removeDuplicates("aabbcccd567ij") == "abcd567ij");
		assert(lowerString("AbCd5Y+uU") == "abcd5y+uu");
		#ifdef NDEBUG
			cout << "Filter: abcdefghijk - abcefhij = " << filter("abcdefghijk", "abcefhij") << endl;
			cout << "Remove Duplicates: aabbcccd567ij -> " << removeDuplicates("aabbcccd567ij") << endl;
			cout << "Lower String: AbCd5Y+uU -> " << lowerString("AbCd5Y+uU") << endl << endl;
		#endif
	}
	{//test atbash
		assert(atbash::encode("He<l0l|o") == "Sv<o0o|l");
		#ifdef NDEBUG
			cout << "Atbash: He<l0l|o -> " << atbash::encode("He<l0l|o") << endl;
		#endif
	}
	{//test rot-n
		assert(rot::encode("[Hello", 1) == "[Ifmmp");
		assert(rot::encode("Hel.lo", 7) == "Ols.sv");
		assert(rot::encode("H-e-l-l-o") == "U-r-y-y-b");
		assert(rot::encode("asdfghjkl", 4) == "ewhjklnop");
		#ifdef NDEBUG
			cout << "Rot1: [Hello -> " << rot::encode("[Hello", 1) << endl;
			cout << "Rot7: Hel.lo -> " << rot::encode("Hel.lo", 7) << endl;
			cout << "Rot13: H-e-l-l-o -> " << rot::encode("H-e-l-l-o") << endl;
			cout << "Rot4: asdfghjkl -> " << rot::encode("asdfghjkl", 4) << endl;
		#endif
	}
	{//test morse
		assert(morse::encode("Whoa .-/") == ".-- .... --- .- / period dash forwardslash ");
		#ifdef NDEBUG
			cout << "Morse Code: 'Whoa .-/' -> " << morse::encode("Whoa .-/") << endl;
		#endif
	}
	{//test keyword
		assert(keyword::encode("s7eeeeeecret", "bestKey") == "p7kkkkkksokq");
		#ifdef NDEBUG
			cout << "Keyword Cipher: 's7eeeeeecret' with keyword 'bestKey' -> "
			     << keyword::encode("s7eeeeeecret", "bestkey") << endl;
		#endif
	}

	#ifndef NDEBUG
	cout << "All tests passed!" << endl;
	#endif
	return 0;
}
