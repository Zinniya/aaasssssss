
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
  






EVEN AND ODD
   #include <iostream>

using namespace std;

int main()
{
   int arr[]={1,5,8,10,66,9,44};
   int n;
   n=sizeof(arr)/sizeof(arr[0]);
   int even =0;
   int odd =0;
   for (int i=0;i<n;i++){
       if (arr[i]%2==0){
           even=even+1;
       }
       else{
           odd=odd+1;
       }
   }
   cout<<"EVEN NUMBERS"<<endl;
   cout<<even<<endl;
      cout<<"ODD NUMBERS"<<endl;
   cout<<odd<<endl;  
   return 0;
}
