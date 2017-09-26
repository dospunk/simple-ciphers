#include<string>

using namespace std;

string atbash(string str){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if ((*iter >= 'A') && (*iter <= 'Z')) { //if character is capital
			output += char(('A'+'Z')-*iter);
		} else if ((*iter >= 'a') && (*iter <= 'z')) { //if character is lowercase
			output += char(('a'+'z')-*iter);
		} else { //if character isn't a letter
			output += char(*iter);
		}
	}
	return output;
}
