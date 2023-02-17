#include <iostream>
#include <fstream>
#include <string.h>

std::string totalLine(std::ifstream &file) {
	std::string result = "";
	while (!file.eof())
	{
		std::string str;
		getline(file, str);
		result += str;
		if (!file.eof())
			result += '\n';
	}
	return (result);
}

void strReplace(std::string& src, char *find, char *rep)
{
	std::string ret = "";
	std::string fnd = find;
	std::string re = rep;

	int pos = 0;
	int next = 0;
	if (src.find(fnd, pos) == -1) {
		return ;		
	}
	while ((next = src.find(fnd, pos)) != std::string::npos)
	{
		ret += src.substr(0, next);
		ret += re;
		src = src.substr(next + fnd.size(), src.size());
	}
	if (src.size()) {
		ret += src;
	}
	src = ret;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return 0;
	std::ifstream readFile;
	std::string file = av[1];
	std::string readResult;
	std::string result = file;
	result += ".replace";
	std::ofstream writeFile;
	readFile.open(file);
	writeFile.open(result);
	if (readFile.is_open())
	{
		readResult = totalLine(readFile);
		strReplace(readResult, av[2], av[3]);
		if (writeFile.is_open()) {
			writeFile << readResult;
			writeFile.close();
		}
		readFile.close();
	}
	return 0;
}