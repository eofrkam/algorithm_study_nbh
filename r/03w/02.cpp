#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


//string을 사용하고 length를 사용하면 될듯
int main()
{
    string s;

    cin >> s;
    int len = s.size();
    
    vector<string> str;

    for (int i = 0; i<len; i++)
    {
        for(int  j = 1; j <=len - i; j++)
        {
            str.push_back(s.substr(i, j));      

        }
    }


    //중복 제거
    sort(str.begin(),str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    cout << str.size() << "\n";

    return 0;

}
