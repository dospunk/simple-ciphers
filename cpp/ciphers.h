#ifndef CIPHERS_H
#define CIPHERS_H
#include<string>

namespace atbash{
	std::string encode(std::string str);
}

namespace rot{
	std::string encode(std::string str, int num=13);
}

namespace morse{
	std::string encode(std::string str);
}

namespace keyword{
	std::string encode(std::string str, std::string key);
}

#endif
