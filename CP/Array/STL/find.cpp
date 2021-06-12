#include<bits/stdc++.h>
using namespace std;
int main()
{

int arr[]= { 1,2,3,4,6,7,8};

int n = sizeof(arr)/sizeof(int);

int key;

cout<<"Enter a No to find";
cin>>key;

auto it = find(arr,arr+n,key);  // if its return the address of no.otherwise return the end of the index.

int index = it - arr;
cout<<index;

return 0;





}