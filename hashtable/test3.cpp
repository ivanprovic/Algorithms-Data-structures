// unordered set
#include <iostream>
#include <unordered_set>
using namespace std;

void checker(unordered_set<char> set, char letter){
    if(set.find(letter) == set.end()) {
        cout << "letter " << letter << " is not in the set." << '\n';
    }
    else{
        cout << "letter " << letter << " is in the set." << '\n';
    }
}

int main()
{
    unordered_set<char> charSet = {'d', 'c', 'b', 'a'};

    char letter = 'e';
    checker(charSet, letter);
    charSet.insert('e');
    checker(charSet, letter);
    return 0;
}