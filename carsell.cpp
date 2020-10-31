#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int mod =1000000007;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long int sum=0;
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(i >= a[n-1-i]) a[n-1-i] = 0;
	        else a[n-1-i] = a[n-1-i]-i;
	        sum = sum +a[n-1-i];
	        //cout<<a[n-1-i]<<"    "<<sum<<endl;
	    }
	    cout<<sum%mod<<endl;
	    t--;
	}
	return 0;
}
