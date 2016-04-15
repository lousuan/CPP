#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string input;
    int previous_word = -1;
    vector<string> words;
    bool match = false;

    while (cin >> input){
        if (previous_word > -1 && (input.compare(words[previous_word]) == 0)){
            cout << input << " occurs twice in succession.";
            match = true;
            break;
            //return 0; // it would be easier if use "return" instead of "break"
        }
        else{
            words.push_back(input);
            ++previous_word;
        }
    }
    cout << (match ? "": "No words was repeated.");
    //cout << "No words was repeated.";

    return 0;
}
