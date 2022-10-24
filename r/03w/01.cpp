#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n); // vector로 사용해야만 lower_bound, upper_bound를 사용할 수 있기때문에 배열대신 vector를 사용 
    // 대신 vector를 배열처럼 사용할려면 괄호안에 배열처럼 크기를 설정해주어야한다.
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end()); //정렬
	
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int number;
		cin >> number;
		auto l = lower_bound(a.begin(), a.end(), number); // 하한 : 같거나 큰거 중에 첫번째 index, 받은 number과 비교
		auto r = upper_bound(a.begin(), a.end(), number); // 상한 : 큰거 중에 첫번째 index, 받은 number과 비교
		cout << r - l << ' '; // 상한 - 하한 하면 총 같은 개수 나옴 , 없으면 0이 나오겠죠?
        //auto는 타입 상관없이 입력 받을 수 있는값임 
	}
	cout << '\n';
}
