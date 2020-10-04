#include <bits/stdc++.h>
 
int main(){
	int n;
	std::cin>>n;
	int elements[n];
	int sum=0;
	for(int i = 1;i <=n;i++){
		std::cin>>elements[i];
		sum += elements[i];
	}
	int avg = sum/n;
	int result = avg+1;
	std::cout<<result;
}
