#include<string>

using namespace std;

string atbash(string str){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); iter++){
		if ((*iter >= 'A') && (*iter <= 'Z')) {
			output += char(('A'+'Z')-*iter);
		} else if ((*iter >= 'a') && (*iter <= 'z')) {
			output += char(('a'+'z')-*iter);
		} else {
			output += char(*iter);
		}
	}
	return output;
}
