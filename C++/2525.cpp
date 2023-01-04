#include <iostream>
using namespace std;

int main() {
    int hour, min, time, total;
    int f_hour, f_min;
    
    cin >> hour >> min;
    cin >> time;
    
    total = hour * 60 + min + time;
    f_hour = total / 60;
    f_min = total % 60;
    
    if (f_hour >= 24){
        f_hour = f_hour - 24;
    }
    
    cout << f_hour << " " << f_min;
    
  // 시간 계산 시 시(/), 분(%) 활용
