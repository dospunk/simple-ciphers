#include <algorithm>
#include <string>

using namespace std;

string filter(string str, string filter){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if(filter.find(*iter) == string::npos){
			output += *iter;
		}
	}
	return output;
}

string removeDuplicates(string str){
	string output;
	string::iterator iter;
	for(iter = str.begin(); iter < str.end(); ++iter){
		if(output.find(*iter) == string::npos){
			output += *iter;
		}
	}
	return output;
}

string lowerString(string str){
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

string upperString(string str){
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	return str;
}
