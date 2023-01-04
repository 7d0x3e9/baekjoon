#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int prize;
    
    cin >> a >> b >> c;
    
    if (a == b && b == c) {
        prize = 10000 + a * 1000;    
    }
    else if (a == b && b != c) {
        prize = 1000 + a * 100;
    }
    else if (b == c && a != b) {
        prize = 1000 + b * 100;
    }
    else if (a == c && b != a) {
        prize = 1000 + a * 100;
    }
    else if (a != b && b != c && a != c) {
        if (a > b && a > c) {
            prize = a * 100;
        }
        else if (b > a && b > c) {
            prize = b * 100;
        }
        else if (c > a && c > b) {
            prize = c * 100;
        }
    }
    cout << prize;
}

// 대소 비교시 max(a,b) 사용 가능 (대신 두 수만 비교 가능)
// 세 수 비교 시 max(max(a,b),c) 
