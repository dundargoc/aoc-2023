#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
    string line;
    ifstream infile("input.txt");
    int total = 0;
    while (std::getline(infile, line))
    {
        int first[10];
        int last[10];

        first[0] = -1;
        first[1] = max(static_cast<int>(line.find('1')), static_cast<int>(line.find("one")));
        first[2] = max(static_cast<int>(line.find('2')), static_cast<int>(line.find("two")));
        first[3] = max(static_cast<int>(line.find('3')), static_cast<int>(line.find("three")));
        first[4] = max(static_cast<int>(line.find('4')), static_cast<int>(line.find("four")));
        first[5] = max(static_cast<int>(line.find('5')), static_cast<int>(line.find("five")));
        first[6] = max(static_cast<int>(line.find('6')), static_cast<int>(line.find("six")));
        first[7] = max(static_cast<int>(line.find('7')), static_cast<int>(line.find("seven")));
        first[8] = max(static_cast<int>(line.find('8')), static_cast<int>(line.find("eight")));
        first[9] = max(static_cast<int>(line.find('9')), static_cast<int>(line.find("nine")));

        last[0] = -1;
        last[1] = max(static_cast<int>(line.find('1')), static_cast<int>(line.find("one")));
        last[2] = max(static_cast<int>(line.find('2')), static_cast<int>(line.find("two")));
        last[3] = max(static_cast<int>(line.find('3')), static_cast<int>(line.find("three")));
        last[4] = max(static_cast<int>(line.find('4')), static_cast<int>(line.find("four")));
        last[5] = max(static_cast<int>(line.find('5')), static_cast<int>(line.find("five")));
        last[6] = max(static_cast<int>(line.find('6')), static_cast<int>(line.find("six")));
        last[7] = max(static_cast<int>(line.find('7')), static_cast<int>(line.find("seven")));
        last[8] = max(static_cast<int>(line.find('8')), static_cast<int>(line.find("eight")));
        last[9] = max(static_cast<int>(line.find('9')), static_cast<int>(line.find("nine")));
        for(auto i: first){
            cout << i << '\n';
        }

        /* int first_index = line.find_first_of("123456789"); */
        /* int first = line[first_index] - '0'; */

        /* int last_index = line.find_last_of("123456789"); */
        /* int last = line[last_index] - '0'; */
        /* total += first * 10 + last; */
    }
    /* cout << total << '\n'; */
}
