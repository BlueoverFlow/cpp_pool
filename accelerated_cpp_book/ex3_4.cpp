#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef vector<string>::size_type	t_vs;

int	main()
{
	string				input;
	string::size_type	lmax, lmin, l;
	vector<string>		sentence;
	t_vs				s;

	cout << "type some sentences:" << endl;
	while (cin >> input)
		sentence.push_back(input);
	s = sentence.size();
	lmax = lmin = 0;
	for (t_vs i = 0; i < s; i++){
		l = sentence[i].size();
		if (l > lmax)
			lmax = l;
		if (l < lmin || lmin == 0)
			lmin = l;
	}
	cout << "the shortest sentence's len is: " << lmin << endl;
	cout << "the longest sentence's len is: " << lmax << endl;
	return 0;
}
