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
			cout << "Filter: abcdefghijk - abcefhij = "
				 << filter("abcdefghijk", "abcefhij") << endl;
			cout << "Remove Duplicates: aabbcccd567ij -> "
				 << removeDuplicates("aabbcccd567ij") << endl;
			cout << "Lower String: AbCd5Y+uU -> " << lowerString("AbCd5Y+uU")
				 << endl << endl;
		#endif
	}
	{//test atbash
		assert(atbash::encode("He<l0l|o") == "Sv<o0o|l");
		#ifdef NDEBUG
			cout << "Atbash:\n";
			cout << "\tencode 'He<l0l|o' -> " << atbash::encode("He<l0l|o")
				 << endl;
		#endif
	}
	{//test rot-n
		assert(rot::encode("[Hello", 1) == "[Ifmmp");
		assert(rot::encode("Hel.lo", 7) == "Ols.sv");
		assert(rot::encode("H-e-l-l-o") == "U-r-y-y-b");
		assert(rot::encode("asdfghjkl", 4) == "ewhjklnop");
		#ifdef NDEBUG
			cout << "Rot-n:\n";
			cout << "\tencode n=1 '[Hello' -> " << rot::encode("[Hello", 1)
				 << endl;
			cout << "\tencode n=7 'Hel.lo' -> " << rot::encode("Hel.lo", 7)
				 << endl;
			cout << "\tencode n=13 'H-e-l-l-o' -> " << rot::encode("H-e-l-l-o")
				 << endl;
			cout << "\tencode n=4 'asdfghjkl' -> "
				 << rot::encode("asdfghjkl", 4) << endl;
		#endif
	}
	{//test morse
		assert(morse::encode("Whoa .-/") == ".-- .... --- .- / period dash forwardslash ");
		#ifdef NDEBUG
			cout << "Morse Code:\n";
			cout << "\tencode 'Whoa .-/' -> " << morse::encode("Whoa .-/")
				 << endl;
		#endif
	}
	{//test keyword
		assert(keyword::encode("s7eeeeeecret", "bestKey") == "p7kkkkkksokq");
		assert(keyword::decode("1'j 5tnn3q h00I", "zoom") == "1'm 5upp3r k00L");
		#ifdef NDEBUG
			cout << "Keyword Cipher:\n";
			cout << "\tencode 's7eeeeeecret' with keyword 'bestKey' -> "
			     << keyword::encode("s7eeeeeecret", "bestkey") << endl;
			cout << "\tdecode '1'j 5tnn3q h00I' with keyword 'zoom' -> "
				 << keyword::decode("1'j 5tnn3q h00I", "zoom") << endl;
		#endif
	}
	{//test railfence
		assert(railfence::encode("We are discovered!") == "Wrivdeaedsoee!  cr");
		#ifdef NDEBUG
			cout << "RailFence:\n";
			cout << "\tencode 3 rails no offset 'We are discovered!' -> "
				 << railfence::encode("We are discovered!") << endl;
		#endif
	}

	#ifndef NDEBUG
	cout << "All tests passed!" << endl;
	#endif
	return 0;
}
