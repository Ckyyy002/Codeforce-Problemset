#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tasks(m);
    for (int i = 0; i < m; ++i) {
        cin >> tasks[i];
    }

    long long move = 0;
    int current = 1;

    for (int i = 0; i < m; ++i) {
        int next = tasks[i];
        if (next >= current) {
            move += next - current;
        } 
        else {
            move += n - current + next;
        }
        current = next;
    }

    cout << move << endl;

    return 0;
}