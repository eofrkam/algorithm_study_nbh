#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;

    cin >> N;
    int arr1[N];
    for(int i=0;i<N;i++)
        cin >> arr1[i];
    cin >> M;
    int arr2[M];
    for(int i=0;i<M;i++)
        cin >> arr2[i];

    sort(arr1,arr1+N);

    for(int i=0;i<M;i++)
    {
        int start = 0;
        int end = N-1;
        int flag = 0;
        while(start <= end)
        {
            int mid = (start+end)/2;
            if (arr2[i] == arr1[mid])
            {
                flag = 1;
                break;
            }
            else if (arr2[i] > arr1[mid])
                start = mid + 1;
            else if (arr2[i] < arr1[mid])
                end = mid - 1;
        }
        cout << flag << ' ';
    }
    return 0;
}