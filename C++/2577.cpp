#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int mul = 0;
	int array[10]={0};
    
	cin>>a;
	cin>>b;
	cin>>c;
	mul = a * b * c;
	
	while(mul !=0){
		array[mul%10]+=1;
		mul = mul/10;
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<endl;
	}
}

// 추가곱셈을 한 mul값에 대한 나머지 (0~9)가지의 배열에 +1
// arr[mul%10]+=1
