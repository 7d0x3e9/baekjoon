#include <iostream>
using namespace std;

int main(){
	int number, a, b,sum;
	int count = 1;
	cin>>number; 
	int result =number;
	
    if(number<10){ //입력값이 10보다 작을 때 앞에 0 넣고 더하기
	    a=0;
	    b=number;
	    sum=a+b;
    }
    
    while(1){
		a = number/10; //10의 자리만 나오게
		b = number%10; //1의 자리만 나오게
		sum = a + b;
		number = b*10 + sum%10;
		if(result==number){ 
			break;
		}
		else{
			count++;
		}
	}
	cout<<count<<endl;
}
