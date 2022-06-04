#include<iostream>
using namespace std;
#define Max 100
int bsearch(int arr[],int l,int r,int key);
int main()
{
 int key,l = 0,r = 0,n,pos;
 int arr[Max];
 cout<<"enter the size of array:"<<endl;
 cin>>n;
 r = n;
 cout<<"enter the elements into array"<<endl;
 for(int i = 0; i < n ; i++)
 {
 cin>>arr[i];
 }
 cout<<"enter the key to found:"<<endl;
 cin>>key;
 pos = bsearch(arr,0,n,key);
 if(pos > 0)
 {
 cout<<"KEY PRESENT AT POSITION: "<<pos+1;
 }
 else
 {
 cout<<"ELEMENT NOT FOUND"<<endl;
 }
}
int bsearch(int arr[],int l,int r,int key)
{
 while(l <= r)
 {
 int m = (l + r)/2;
 if(arr[m] == key)
 {
 return m;
 }
if(arr[m] < key)
 {
 l = m + 1;
 }
 else
 {
 r = m - 1;
 }
 }
 return -1;
