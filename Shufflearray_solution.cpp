#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin >>n;
    int arr[2*n];

    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }
    
    //-----------
    int ans[2*n];
    for(int i=0; i<n; i++)
    {
        ans[2*i] = arr[i];
        ans[2*i+1] = arr[n+i];
    }
    
    for(int i = 0; i<=2*n; i++){
        cout << ans[i] <<" ";
    }

}