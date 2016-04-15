#include <iostream>
using namespace std;

int main()
{
    vector<char> s,v;
    for (decltype(s.size)) index = 0; index != s.size() && !isspace(s[index];
        ++index)
            s[index] = toupper(s[index]);

    for (decltype(v.size()) i = 0, sz = v.size(); i != sz; ++i)
        v.push_back(v[i]);

    auto beg = v.begin();
    for (; beg != v.end(); && *beg >=0; ++beg)
        ;

    for (int i = 0; ; ++i){
        //code here must stop the loop
    }

    string rsp; //used tin the condition; can't be defined inside the do
    do {
        int val1 = val2 = 0;
        cin >> val1 >> val2;
        cout << val1 + val2 << endl;
        cin >> rsp; //input yes to compute again
    }while (!rsp.empty() && rsp[0] != 'n')
    
}
