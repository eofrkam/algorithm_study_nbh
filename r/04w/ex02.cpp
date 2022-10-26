#include <iostream>
using namespace std;

int N,M;
int arr[10];
bool isused[10];

void recur(int num,int k)
{
    if(k==M)
    {
        for(int i = 0; i<M; i++)
        {
            cout << arr[i] <<' ';
        }
        cout << '\n';
        return;
    }

    for(int i = num; i<=N; i++)
    {
        if(!isused[i])
        {   
            arr[k] = i;
            isused[i] = 1;
            recur(i+1,k+1);
            isused[i] = 0;
        }
    }

}
int main(void)
{
    ios::sync_with_stdio(0);
		cin.tie(0);


    cin >> N >> M;
   
    recur(1,0); 
}
