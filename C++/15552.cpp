/#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL); 
    ios::sync_with_stdio(false);

    int t;
    int a,b;
    int i;
    
    cin>>t;
    
    for(i=0;i<t;i++){
        cin>>a>>b;
        cout<<a+b<<"\\n";
    }
}

// * 참고
// C++로 알고리즘을 풀 때 실행 속도를 높이기 위해 cin.tie(NULL)과 sync_with_stdio(false) 사용 
// 이 경우 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용 불가능
