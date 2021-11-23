#include <iostream>
#include <iomanip>
#include <vector>

struct t_square_int {
    int x;
    int s;
};

using namespace std;

int main()
{
    vector<t_square_int>	list;
    t_square_int			square_int;

    while (cin >> square_int.x)
	{
		if (square_int.x > 100)
		{
			cout << "invalid try again" << endl;
			return 1;
		}
		square_int.s = square_int.x * square_int.x;
		list.push_back(square_int);
	}
	typedef vector<t_square_int>::size_type t_vs;
	t_vs s = list.size();
	for (t_vs i = 0; i < s; i++)
		cout << setw(3) << list[i].x << setw(5) << list[i].s << endl;
	return 0;
}
