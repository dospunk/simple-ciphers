#include<string>
#include "ciphers.h"
#include"utils.h"

using std::string;

string keyword::encode(string str, string key){
	string alphabet = "abcdefghijklmnopqrstuvwqyz";
	key = lowerString(key);
	key = removeDuplicates(key);
	key = filter(key, " ");
	string filterbet = filter(alphabet, key);
	string cipherbet = key + filterbet;

	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if((*iter >= 'A') && (*iter <= 'Z')){
			output += upperString(cipherbet)[upperString(alphabet).find(*iter)];
		} else if ((*iter >= 'a') && (*iter <= 'z')) {
			output += cipherbet[alphabet.find(*iter)];
		} else {
			output += *iter;
		}
	}
	return output;
}
