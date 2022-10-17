#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int K;
    cin >> K; 
    priority_queue<int> pq; //우선순위 큐 사용
    queue<pair<int,int>> q; // 중요도,개수 queue에 입력하기 위해
    for(;K;)
    {
        int N,M;
        cin >> N >> M; //개수랑 어떤걸 알아보고싶은지의 인덱스 입력
        for(int i = 0; i<N; i++)
        {
            int imp;
            cin >> imp; // N개만큼 중요도 입력
            q.push({i,imp});
            pq.push(imp); // 1,2,3,4로 입력이 들어왔다면 우선순위 큐를 사용하기 때문에 4,3,2,1로 정렬이 된다.

        }
        while(!q.empty()){
            int index = q.front().first; // index에 인덱스값 저장
            int value = q.front().second; // value에 중요도 저장
            int count = 0;
            q.pop();
            if(value == pq.top()){
                pq.pop();
                count++;
                if(index == M) {
                    cout << count << "\n";
                    break;
                }
            }
            else 
            {
                q.push({ index,value });
            }
        }
      

    }
    


    return 0;
}
