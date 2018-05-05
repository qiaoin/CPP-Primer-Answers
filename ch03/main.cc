#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto begin = scores.begin();
    while (cin >> grade) {
        if (grade <= 100) {
            (*(begin + grade / 10))++;
        }
    }

    for (auto s : scores) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
