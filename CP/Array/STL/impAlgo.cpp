#include<bits/stdc++.h>
using namespace std;
int main()
{


int a=10;
int b=20;

int arr[] = {1,2,3,5,6,78,99};

int n =sizeof(arr)/sizeof(int);

cout<<max(a,b)<<endl;
reverse(arr,arr+n);


for(int i=0;i<n;i++){
    cout<<arr[i];
}



return 0;

}

