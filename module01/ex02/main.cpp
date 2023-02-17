#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *sptr = &str;
	std::string &rsptr =str;

	std::cout<<&str<< std::endl;
	std::cout<<&sptr<< std::endl;
	std::cout<<&rsptr<< std::endl;
	std::cout<<str << std::endl;
	std::cout<<sptr << std::endl;
	std::cout<<rsptr << std::endl;
	return 0;
}