#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct queue {

    int arr[2000000];
    int num;
    int head = 0;
    int tail = 0;
    int q_size = 0;

    void init() {
        num = -1;
    }
    void push(int data) {
        arr[++num] = data;
        ++tail;
        q_size++;
    }
    bool empty() {
        return (q_size == 0);
    }
    void pop() {
        if (q_size != 0) {
            cout << arr[head] << "\n";
            arr[head] = 0;
            head++;
            q_size--;
            
        }
        else {
            cout << -1 << "\n";
        }
    }
    int size() {
        return q_size;
    }
    int front() {
        if (empty()) {
            return -1;
        }
        return arr[head];
    }
    int back() {
        if (empty()) {
            return -1;
        }
        return arr[num];
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    queue s;
    s.init();
    for (; n--;) {
        string str;
        int num;
        cin >> str;
        if (str == "push") {
            cin >> num;
            s.push(num);
        }
        if (str == "pop") {
            s.pop();
        }
        if (str == "size") {
            cout << s.size() << "\n";
        }
        if (str == "empty") {
            cout << s.empty() << "\n";
        }
        if (str == "front") {
            cout << s.front() << "\n";
        }
        if (str == "back") {
            cout << s.back() << "\n";
        }
    }
}
