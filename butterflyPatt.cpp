#include<iostream>
using namespace std;

int main(){

   int n;
   cout<<"Enter any number : ";
   cin>>n;

   for (int i = 1; i <= n; i++)
   {
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int k=i+1; k<=2*n-i;k++)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
   }

    for (int i = n; i >= 1; i--)
   {
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int k=i+1; k<=2*n-i;k++)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
   }
    
    cout<<"enter another number";
    cin>>n;
    return 0;
}