#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,x;
	   cin>>n>>x;
	   if(n*x%4!=0)
	   cout<<((n*x)/4)+1<<endl;
	   else
	   cout<<(n*x)/4<<endl;
	}
	return 0;
}