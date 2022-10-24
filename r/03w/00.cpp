#include <iostream>
#include <algorithm>

using namespace std;


//1.첫째 줄에 숫자의 개수 주어짐 (몇개의 숫자카드를 받을건지)
//2.둘째 줄에 숫자 카드에 적혀있는 정수가 주어짐(중북된 카드는 없음)
//3. 셋째 줄에 숫자의 개수 주어짐
//4. 상근이가 가지고 있는 숫자 카드인지 아닌지 구해야 할 M개의 정수 주어짐

//<출력>
//숫자 카드를 상근이가 가지고 있으면 1
//숫자 카드를 상근이가 가지고 있지않으면 0 


//먼저 정렬을 한다음 이분탐색으로 정리하면 되려나?
int main()
{
    int a[500001]; // 첫번째 두번째 입력 받을 때 
    int b[500001];
    int c[500001] = { 0, }; // 정답 저장 배열
 

    int N;
    cin >> N; // N개를 우선 입력 받는다 -> 이분탐색 트리 노드를 N개 생성 
    
    for(int i=0; i<N; i++)
    {
        cin >> a[i]; //입력해서 저장
    }

    sort(a,a + N); //오름차순으로 정렬 <- 안하면 엄청 불편함 

    int M;
    cin >> M;
    for(int i = 0; i<M; i++)
    {
        cin >> b[i];
    }    

    //a[i] -> 오름차순 정렬 
    // 가운데 숫자를 정해서 트리만들기

    for (int i = 0; i<M; i++)
    {
        int left_node = N-1; // 왼쪽 노드 설정
        int right_node = 0; // 오른쪽 노드 설정
        while(left <= right){
            int mid_node = (left_node + right_node) / 2; //트리 맨위 설정 
            if (b[i] == a[mid_node]){
                c[i] = 1;   // // if문을 통과하지 못한 값들은 0으로 초기화 되어있으니까 0으로 출력됌
                break;
            }
            if (a[mid_node] > b[i]) {
				right_node = mid_node - 1;
			}
			else {
				left_node = mid_node + 1;
			}

        }
        //재귀로도 사용할수 있을까?

    } 
    for(int i = 0; i<M; i++)
    {
        cout << c[i] << "\n";
    }
}
