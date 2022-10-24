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
        cout << q.front() << "\n";
        cout << pq.top() << "\n";
        
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
/*
3 - 전체 반복횟수
1 0 - N,M 문서는 1개 알고싶은 인덱스는 0번째
5 - 1개 문서의 중요도

4 2  - N,M 문서는 4개 알고싶은 인덱스는 2번째
1 2 3 4 - 4개 문서의 중요도

6 0 - 대충 비슷한 내용
1 1 9 1 1 1 - 이것도 대충 위에랑 비슷한 내용
*/