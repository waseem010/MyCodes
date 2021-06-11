#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;

    int arr[100];
    int cur= 0;
    int max1= 0;

for (int i=0;i<=n;i++)
{
cin>>arr[i];


}

for (int i=0;i<n;i++){

cur=cur+arr[i];
if(cur<0){
    cur=0;
}

max1 = max(cur,max1);



}

cout<<"maximum is"<<max1;



return 0;

}
