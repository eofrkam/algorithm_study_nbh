#include <iostream>
#include <string.h>
using namespace std;

struct deque
{
	int arr[40000];
	int d_size = 0;
	int tail = 20001;
	int head = 20000;

	void push_front(int data)
	{
		arr[head--] = data;

	}
	void push_back(int data)
	{
		arr[tail++] = data;

	}
	int pop_front()
	{
		if (empty()) {
			return -1;
		}
		return arr[++head];
	}
	int pop_back()
	{
		if (empty()) {
			return -1;
		}
		return arr[--tail];
	}
	int size()
	{
		return tail-head-1;
	}
	bool empty()
	{
		return (head+1 == tail);
	}
	int front()
	{
		if (empty()) {
			return -1;
		}
		return arr[head + 1]; //그냥 head를 출력하게되면 쓰레기값이 나옴
	}
	int back()
	{
		if (empty()) {
			return -1;
		}
		return arr[tail - 1]; //tail도 마찬가지
	}
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int N;
	cin >> N;
	deque d;

	for (; N--;) {
		string str;
		int num;
		cin >> str;
		if (str == "push_front") {
			cin >> num;
			d.push_front(num);
		}
		if (str == "push_back") {
			cin >> num;
			d.push_back(num);
		}
		if (str == "pop_front") {
			cout << d.pop_front() << "\n";
		}
		if (str == "pop_back") {
			cout << d.pop_back() << "\n";
		}
		if (str == "size") {
			cout << d.size() << "\n";
		}
		if (str == "empty") {
			cout << d.empty() << "\n";
		}
		if (str == "front") {
			cout << d.front() << "\n";
		}
		if (str == "back") {
			cout << d.back() << "\n";
		}

	}
}
