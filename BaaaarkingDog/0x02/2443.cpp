#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        // Space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // Star
        for(int j = 0; j < 2*(N-i)-1; j++) {
            cout << "*";
        }
        cout << '\n';
    }
}