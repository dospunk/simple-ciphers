#include<string>
#include<iostream>
#include "ciphers.h"

using namespace std;

//broken
string railfence::encode(string str, int rails, int offset){
	string* rail_ptr = new string[rails];

	string::iterator iter;
	bool inc = true;
	for(iter = str.begin(); iter < str.end(); ++iter){
		rail_ptr[offset] += *iter;
		if(inc){
			++offset;
		} else {
			--offset;
		}
		if(offset >= rails){
			inc = false;
			offset = rails - 2;
		} else if(offset <= 0){
			inc = true;
			offset = 0;
		}
	}
	
	string output = "";
	for(int i = 0; i < rails; ++i){
		output += rail_ptr[i];
	}
	delete[] rail_ptr;
	return output;
}
