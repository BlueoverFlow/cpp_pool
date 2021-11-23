#include <iostream>
#include <string>
#include <vector>

using namespace						std;
typedef vector<string>::size_type	t_vs;

int	main()
{
	string						input;
	vector<string>				word;
	vector<int>					ret;
	int							x;
	t_vs						s;

	cout << "type some words:" << endl;
	while (cin >> input)
		word.push_back(input);
	s = word.size();
	if (!s)
	{
		cout << "invalid!" << endl;
		return (1);
	}
	for (t_vs i = 0; i < s; i++) {
		x = 0;
		for (t_vs j = 0; j < s; j++) {
			if (word[i] == word[j])
				x++;
		}
		ret.push_back(x);
	}
	cout << endl << "\n======\n" << endl;
	for (t_vs i = 0; i < s; i++)
		cout << word[i] << ": " << ret[i] << endl;
	return 0;
}
