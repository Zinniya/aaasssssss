
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



starting to ending odd
#include <iostream>

using namespace std;
 void findOddNumbers(int StartingNumber,int EndingNumber){

      for(int i=StartingNumber;i<EndingNumber;i++){
          if (!(i%2==0)){
        cout<<i<<"";
          }
          cout<<endl;
       }
      }
    
int main()
{
   int StartingNumber;
   int EndingNumber;
  cout<<"Enter the starting number;" <<endl;
  cin>>StartingNumber; 
  cout<<"Enter the ENDING number;" <<endl;
  cin>>EndingNumber; 
   cout<<endl;
  findOddNumbers(StartingNumber,EndingNumber);
   return 0;
}
   


lab 2

   
   
   #include <iostream>

using namespace std;
int findPrimeNumbers(int n)
{
   int count =0;
   for(int i=1;i<=n;i++)
   {
      if(n%i==0){
         count++;
      }
   }
   return count;
}

int main()
{
 int n;
 cout<<"enter a number"<<endl;
 cin>>n;
 int prime =findPrimeNumbers(n);
 if (prime ==2)
 {
    cout<<"its a prime number"<<endl;

 }
 else{
   cout <<"Error! it,s not a prime number"<<endl;
 }
 return 0;
}

lab 03
   #include <iostream>

using namespace std;

int main() {
   int n;
   cout<<"please enter the size of the array"<<endl;
   cin>>n;
   int arr[n];
   cout<<"pleaser enter the element for the array:"<<endl;
   for (int i=0;i<n ;i++){
       cin>>arr[i];
       
   }
   int s;
   cout<<"please choose the element to search"<<endl;
   cin>>s;
   int counter =0;
   for (int i=0;i<n;i++){
       if (arr[i]==s){
           counter ++;
       }
   }
   cout<<"the element "<<s<<" is ocurred at "<<counter<<" times";
   return 0;
}

 lab3
 // Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
struct StudentInformation{
  int studentId;
  float cgpa;
  int credits;
}s[5];
int main() {
    cout<<"pleasr enter the student information:"<<endl;
    for(int i=0;i<5;i++){
          cout<<"please enter the student id of student"<<endl;
        cin>>s[i].studentId;
        cout<<"please enter the cgpa of student"<<endl;
          cin>>s[i].cgpa;
           cout<<"please enter the credits of student"<<endl;
            cin>>s[i].credits;
            
    }
    
    for (int i=0;i<5;i++){
        if (s[i].cgpa>=3.75&&s[i].credits>=50){
            cout<<s[i].studentId<<endl;
            
            
        }
    }
    return 0;
} 
