#include<bits/stdc++.h>
using namespace std;
int main()
{

int arr[] = {1,2,3,222,3,4,222,3,211};

int n= sizeof(arr)/sizeof(int);

int key;

cout<<"enter an elemnet to search";
cin>>key;

bool value = binary_search(arr,arr+n,key);
if(value){

    cout<<"Elment found";

}
else{
    cout<<"Element not found";
}

return 0;

}