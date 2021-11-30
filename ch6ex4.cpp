/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Patrick Iannini
 */

/*
Define a class Name_value that holds a string and a value. 
Rework exercise 19 in Chapter 4 to use a vector<Name_value> instead of two vectors.
*/

/* CH4 EX19
Write a program where you first enter a set of name-and-value pairs, 
such as Joe 17 and Barbara 22. For each pair, add the name to a vector called names 
and the number to a vector called scores (in corresponding po- sitions, so that if names[7]=="Joe" 
then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and terminate with 
an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    class Name_value {
        public:
            string name;
            int value;
            Name_value(string n, int v) : name(n), value(v) {}
    };
    vector<Name_value> Name_valueV;
    string s;
    int i;

    Name_value nv(s, i);
    while (s != "NoName" && i != 0) {
        printf("Enter a name and a number: ");
        cin >> s >> i;
        Name_value nv(s, i);
        Name_valueV.push_back(nv);
    }

    for (int j=0; j<Name_valueV.size(); j++) {
        printf("\n[Name, Value]: ");
        cout << '[' << Name_valueV[j].name << ',' << Name_valueV[j].value << ']';
    }
    return 0;
}