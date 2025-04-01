#include <bits/stdc++.h>
using namespace std;

// 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *


void pattern1(int n){
	int i,j;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<"*";
		}
		
		cout<<endl;
	}
}
int main()
{   
    cin>>"Enter the Number Of Stars";
    cout>>N;

    pattern1(N);

    return 0;
}
