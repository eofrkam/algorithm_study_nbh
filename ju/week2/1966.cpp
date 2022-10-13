#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    for(int i=0;i<T;i++)
    {
        int N,M,K;
        cin >> N >> M;
        int cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int j = 0; j < N; j++)
        {
            cin >> K;
            q.push({j, K});
            pq.push(K);
        }
        while (!q.empty())
        {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if (pq.top() == val)
            {
                pq.pop();
                cnt += 1;
                if (idx == M)
                {
                    cout << cnt << "\n";
                    break;
                }
            }
            else q.push({idx,val});
        }
    }
    return 0;
}