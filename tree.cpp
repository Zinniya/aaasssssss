
#include <iostream>

using namespace std;

int main()
{
   int arr[]={1,5,8,10,55,9,44};
   int n;
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<n;
   //return 0;
    cout<<endl;
  cout<<"print the value in ascending order"<<endl;
   for(int i=0;i<n;i++)
   {
    cout << arr[i]<<" ";
   }
   cout<<endl;
     cout<<"print the value in descending order"<<endl;
   for(int i=n-1;i>=0;i--)
   {
    cout << arr[i]<<" ";
   }
   return 0;
}
