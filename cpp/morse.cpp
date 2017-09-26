//Many thanks to http://www.dreamincode.net/forums/topic/155153-morse-code-translator/

#include<string>

using namespace std;

string morse(string str){
	string alpha = "abcdefghijklmnopqrstuvwqyz .-";
	string morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.", "....",
					  "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
					  "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
					  "-.--", "--..", "/", "period", "dash"};
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
