#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> words;
    vector<int> counts;
    string word = "";
    //char input;
    int i = 0;
    int max = 0;

    //while (cin >> input){
    while (cin >> word){ //automatically divide strings by space
        /*if (input != ','){ //get the word divided
            word = word + input;
        }
        else */
        if ((i > 0) && (word.compare(words[i-1]) == 0)){
            //compare the current word with the pervious
			++counts[i-1]; //counting
            word = "";
        }
        else{
            words.push_back(word); //storing new words
            ++i;
            counts.push_back(1); //new words occur once
            word = "";
        }
    }
    /*

    these codes are for debugging

	for (auto x : words)
		cout << x << ' ';
	for (auto x : counts)
		cout << x << ' ';
    */

    for (int i = 0; i < words.size(); ++i) //find the most-occur words
        max = (counts[max] > counts[i]) ? max : i;
    for (auto x : counts)
        if (x == counts[max])
            cout << words[max] << ": " << counts[max] << endl;

    return 0;
}
