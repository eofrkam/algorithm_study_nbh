#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    string cmd;

    int N;
    cin >> N;
    int X;

    for (int i = 0; i<N; i++)
    {
        cin >> cmd;
        if (cmd == "push_front")
        {
            cin >> X;
            dq.push_front(X);
        }
        else if (cmd == "push_back")
        {
            cin >> X;
            dq.push_back(X);
        }
        else if (cmd == "pop_front")
        {
            if (dq.empty())
                cout << -1 << "\n";
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (dq.empty())
                cout << -1 << "\n";
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (cmd == "size")
            cout << dq.size() << "\n";
        else if (cmd == "empty")
        {
            if (dq.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (cmd == "front")
        {
            if (dq.empty())
                cout << -1 << "\n";
            else
                cout << dq.front() << "\n";
        }
        else if (cmd == "back")
        {
            if (dq.empty())
                cout << -1 << "\n";
            else
                cout << dq.back() << "\n";
        }
    }
    return 0;
}