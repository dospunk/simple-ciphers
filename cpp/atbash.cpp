#include<string>

using std::string;

string atbash::encode(string str){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if ((*iter >= 'A') && (*iter <= 'Z')) { //if character is capital
			output += char(('A'+'Z')-*iter);
		} else if ((*iter >= 'a') && (*iter <= 'z')) { //if character is lowercase
			output += char(('a'+'z')-*iter);
		} else { //if character isn't a letter
			output += *iter;
		}
	}
	return output;
}

//this isn't even really necessary tbh
string atbash::decode(string str){
	return atbash::encode(str);
}
