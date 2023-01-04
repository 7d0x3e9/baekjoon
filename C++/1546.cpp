#include <iostream>
using namespace std;

int main(){
    int count=0;
    double max=0;
    double sum=0;
    
    cin>>count;
    
    double array[count];
    
    for(int i=0;i<count;i++)
    {
        cin>>array[i];
        if(max<array[i])
            max=array[i];
    }
    
    for(int i=0;i<count;i++){
        array[i]=array[i]/max*100.0;
        sum +=array[i];
    }
    
    cout<<sum/(double)count; 
}

// 실제 정답과 출력값을 절대오차 / 상대오차 주의
