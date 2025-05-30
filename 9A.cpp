#include <iostream>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int max_roll = max(y, w);
    int need = 7 - max_roll;

    if(need == 0) {
        cout << "0/1" << endl;
    }
    else if(need == 1) {
        cout << "1/6" << endl;
    }
    else if(need == 2) {
        cout << "1/3" << endl;
    }
    else if(need == 3) {
        cout << "1/2" << endl;
    }
    else if(need == 4) {
        cout << "2/3" << endl;
    }
    else if(need == 5) {
        cout << "5/6" << endl; 
    }
    else if(need == 6) {
        cout << "1/1" << endl;
    }
}