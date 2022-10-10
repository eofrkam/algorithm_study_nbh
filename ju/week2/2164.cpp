#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    queue<int> q;
    cin >> N;

    for (int i=1;i<=N;i++)
    {
        q.push(i);
    }
    
    while(q.size() > 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();

    return 0;
}