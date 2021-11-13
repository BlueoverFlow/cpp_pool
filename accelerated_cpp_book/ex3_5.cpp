#include <string>
#include <iostream>
#include <vector>
#include <ios>

#define NHOMEWORK 5

using namespace std;
typedef vector<string>::size_type	t_vs;

int main()
{
	vector<string> studentsNames;
    t_vs s = studentsNames.size();
    vector<double> grades;
    string name;

    while (cout << "enter sudent's name: " && cin >> name)
    {
        studentsNames.push_back(name);
        cout << "type homework grades one by one: " << endl;
        double x;
        double score;
        score = 0;
        for (int i = 0; i < NHOMEWORK; i++){
            cin >> x;
            if (x < 0 || x > 20) {
                cout << "invalid try again" << endl;
                continue ;
            }
            score += x;
        }
        grades.push_back(score / NHOMEWORK);
    }
    for (t_vs i = 0; i < s; i++)
            cout << "student " << studentsNames[i] << " score is: " << grades[i] << endl;
    return 0;
}
