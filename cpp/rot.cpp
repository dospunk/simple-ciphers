#include<string>
#include "ciphers.h"

using std::string;

string rot::encode(string str, int num){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if(((*iter <= ('Z'-num)) && (*iter >= 'A')) || ((*iter <= ('z'-num)) && (*iter >= 'a'))){
			output += char(*iter+num);
		} else if(((*iter > ('Z'-num)) && (*iter <= 'Z')) || ((*iter > ('z'-num)) && (*iter <= 'z'))){
			output += char(*iter-26+num);
		} else {
			output += *iter;
		}
	}
	return output;
}

string rot::decode(string str, int num){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if(((*iter >= ('A'+num)) && (*iter <= 'Z')) || ((*iter >= ('a'+num)) && (*iter <= 'z'))){
			output += char(*iter-num);
		} else if(((*iter < ('A'+num)) && (*iter >= 'A')) || ((*iter < ('a'+num)) && (*iter >= 'a'))){
			output += char(*iter+26-num);
		} else {
			output += *iter;
		}
	}
	return output;
}
