#include<string>
#include "ciphers.h"
#include"utils.h"

using std::string;

string keyword::encode(string str, string key){
	string alphabet = "abcdefghijklmnopqrstuvwqyz";
	//make key lowercase, remove duplicate letters, and filter out spaces
	key = filter(removeDuplicates(lowerString(key)), " ");
	//create cipherred alphabet by filtering the characters from the key out of
	//the english alphabet and then putting them in front
	string cipherbet = key + filter(alphabet, key);

	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if((*iter >= 'A') && (*iter <= 'Z')){ //if uppercase
			output += upperString(cipherbet)[upperString(alphabet).find(*iter)];
		} else if ((*iter >= 'a') && (*iter <= 'z')) { //if lowercase
			output += cipherbet[alphabet.find(*iter)];
		} else {
			output += *iter;
		}
	}
	return output;
}

string keyword::decode(string str, string key){
	string alphabet = "abcdefghijklmnopqrstuvwqyz";
	key = filter(removeDuplicates(lowerString(key)), " ");
	string cipherbet = key + filter(alphabet, key);

	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if((*iter >= 'A') && (*iter <= 'Z')){
			output += upperString(alphabet)[upperString(cipherbet).find(*iter)];
		} else if((*iter >= 'a') && (*iter <= 'z')){
			output += alphabet[cipherbet.find(*iter)];
		} else {
			output += *iter;
		}
	}
	return output;
}
