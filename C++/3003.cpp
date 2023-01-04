#include <iostream>
using namespace std;

int main() {
    int c_chess[] = {1, 1, 2, 2, 2, 8};
    int n_chess[6];
    int result[6];
    
    for (int i = 0; i< 6; i++) {
        cin >> n_chess[i];
        result[i] = c_chess[i] - n_chess[i];
        cout << result[i] << " ";
    }

}
