
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







Lab4






#include <iostream>

using namespace std;
#define row 3
#define column 4

int main()
{
  int matrix[row][column];
  int transposeMatrix[column][row];
  cout<<"intput matrix"<<endl;

  for (int i=0;i<row;i++){
    for (int j=0;j<column;j++){
        cin>>matrix[i][j];
    }
  }
    for (int i=0;i<row;i++){
    for (int j=0;j<column;j++){
            transposeMatrix[j][i]=matrix[i][j];
    }
    }

  cout <<"Transpose Matrix"<<endl;

  for (int i=0;i<column;i++){
    for (int j=0;j<row;j++){
  cout<<transposeMatrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;


}
 example 
 #include <iostream>

using namespace std;
#define size 5

class stack{
private:
    int top;
    int stack [size];
    
public:
    stack(){
    top=-1;
    }
    void push (int number){
    if (top==size-1)
         cout<<"full can not add"<<endl;
        
         }
         else{
            top++;
            stack [top]=number;
            cout<<"the number"<<number<<"is sucessfully added to the stack"<<endl;
            
         }
    
    void pop (){
  if (top==-1){
    cout<<" stack is empo
  }  
    
    
    
    
    }
    
    
    
    }

};










Final::::::


#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int x){
        for (int i=0;i<n;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
}







int main() {
    int n;
    cout<<"Please enter the array sise"<<endl;
    cin >> n;
    int arr[n];
       cout<<"Please enter the array element"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr [i];

    }
    int s;
      cout<<"Element to search"<<endl;
      cin>> s;
      int loc=linearSearch(arr,n,s);
      if (loc==-1){
      cout<<"value is not found"<<endl;

      }
    else{
        cout<<"value is found at index ::        "<< loc<<endl;
    }
}



2nd 
   
   
 #include <iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int s){

while(low<=high){
    int mid =(low+high)/2;
    if(arr[mid]==s){
        return mid;
        }
    else if(arr[mid]<s){
        low=mid+1;
    }
    else{
        high=mid-1;
        }
        }
    return -1;
}
int main() {
    int n;
    cout<<"Please enter the array sise"<<endl;
    cin >> n;
    int arr[n];
       cout<<"Please enter the array element"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr [i];

    }
    int s;
      cout<<"Element to search"<<endl;
      cin>> s;
      int loc= binarySearch(arr,0,n-1,s);
      if (loc==-1){
      cout<<"value is not found"<<endl;

      }
    else{
        cout<<"value is found at index :: "<<loc<<endl;
    }
    return 0;
}

03
   
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}
int main() {
  int data[] = {20, 12, 10,40};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Order:\n";
  printArray(data, size);
}



