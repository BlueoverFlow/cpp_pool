#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>

std::vector<std::string>	split(const std::string& str, char c)
{
	std::string::size_type i, j, l;
	std::vector<std::string> v;

	l = str.size();
	i = j = 0;
	while (i < l)
	{
		for (i += j; i < l && str[i] == c; i++)
			;
		j = 0;
		while (j + i < l && str[j + i] != c)
			j++;
		if (j)
			v.push_back(str.substr(i, j++));
	}
	return (v);
}

int main()
{ 
	std::string str;

	while (getline(std::cin, str))
	{
		std::vector<std::string> v;
		std::vector<std::string>::iterator iter;
		v = split(str, ' ');
		for (iter = v.begin(); iter != v.end(); iter++)
			std::cout << *iter << std::endl;
		std::cout << "======== testing" << std::endl;
		std::string s;
		while (std::cin >> s)
			std::cout << s << std::endl;
		std::cout << "================" << std::endl;
	}
	return 0;
}
