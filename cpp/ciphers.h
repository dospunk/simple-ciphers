#ifndef CIPHERS_H
#define CIPHERS_H
#include<string>

std::string atbash(std::string str);

std::string rot(std::string str, int num=13);

std::string morse(std::string str);

std::string keyword(std::string str, std::string key);
#endif
