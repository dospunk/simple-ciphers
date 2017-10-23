//Many thanks to http://www.dreamincode.net/forums/topic/155153-morse-code-translator/

#include<string>
#include "ciphers.h"

using std::string;

string morse::encode(string str){
	string alpha = "abcdefghijklmnopqrstuvwqyz .-/";
	string morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.", "....",
					  "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
					  "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
					  "-.--", "--..", "/", "period", "dash", "forwardslash"};
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		int pos = alpha.find(tolower(*iter));
		if(pos != -1){
			output += morse[pos];
		} else {
			output += *iter;
		}
		output += ' ';
	}
	return output;
}
