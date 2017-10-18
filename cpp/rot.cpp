#include<string>

using std::string;

string rot(string str, int num=13){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if(((*iter <= ('Z'-num)) && (*iter >= 'A')) || ((*iter <= ('z'-num)) && (*iter >= 'a'))){
			output += char(*iter+num);
		} else if(((*iter >= ('Z'-num)) && (*iter <= 'Z')) || ((*iter >= ('z'-num)) && (*iter <= 'z'))){
			output += char(*iter-26+num);
		} else {
			output += *iter;
		}
	}
	return output;
}
