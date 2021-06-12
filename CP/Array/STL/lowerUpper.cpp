#include<bits/stdc++.h>
using namespace std;
int main()
{


int arr[] = {1,2,3,5,6,78,99};

int n =sizeof(arr)/sizeof(int);


auto it = lower_bound(arr,arr+n,3);
cout<<it-arr<<endl;


auto it1 = upper_bound(arr,arr+n,3);
cout<<it1-arr;





return 0;

}