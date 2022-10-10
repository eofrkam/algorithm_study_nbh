#include <iostream>
#include <string>
#include <queue>
using namespace std;

int N, x;
string s;
queue<int> q;


void push(int data)
{
    q.push(data);
}
void pop()
{
    if (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }
    else
        cout << -1 << "\n";
}
void size()
{
    cout << q.size() << "\n";
}
void empty()
{
    cout << q.empty() << "\n";
}
void front()
{
    if(!q.empty())
        cout << q.front() << "\n";
    else
        cout << -1 << "\n";
}
void back()
{
    if (!q.empty())
        cout << q.back() << "\n";
    else
        cout << -1 << "\n";
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> N;

    for (int i = 0; i<N;i++)
    {
        cin >> s;

        if (s == "push")
        {
            cin >> x;
            push(x);
        }
        else if (s == "pop")
            pop();
        else if (s == "size")
            size();
        else if (s == "empty")
            empty();
        else if (s == "front")
            front();
        else if (s == "back")
            back();
        
    }
    return 0;
}
