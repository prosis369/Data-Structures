#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n, ele;
	cin>>n;
	int arr[n];
	int count = 0;
	int t = n;
	while(n--){
		cin>>ele;
		arr[count] = ele;
		count++;
	}

	for(int i = 0; i<t; i++){
		cout<<"hi";
		cout<<arr[i]<<endl;
	}

	sort(arr,arr+3);
	sort(arr+3,arr+t,greater<int>());

	for(int i = 0; i<t; i++){
		cout<<"hisort";
		cout<<arr[i]<<endl;
	}

}