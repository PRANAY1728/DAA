#include<iostream>
using namespace std;
#define MAX 100
int main()
{
 int key, test_c, n, c,i,j;
 int arr[MAX];
 cout<<"Enter the number of test cases"<<endl;
 cin>>test_c;
 for(int i=0;i<test_c;i++)
 {
 cout<<"Enter the size of array"<<endl;
 cin>>n;
 c=0;
 for(int j=0;j<n;j++)
 {
 cin>>arr[j]
 }
 cout<<"Enter the Key to be found "<<endl;
 cin>>key;
 for(int k=0;k<n;k++)

{
 if (arr[k]=key)
 {
 c=k+1;
 }
 else if(arr[k]==arr[n])
 {
 cout<<"Element not found"<<endl;
 }
 }
 }
 cout<<"Present"<<":"<<endl;
}
