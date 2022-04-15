// #include<iostream>
// using namespace std;
// void printAlternate(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void swapAlternate(int a[],int size)
// {
//     for(int i=0;i<size;i+2)
//     {
//         if(i+1<size)
//         {
//             swap(a[i],a[i+1]);
//         }
//     }
// }
// int main()
// {
//     int even[8]={2,3,4,6,28,45,88,65};
//     int odd[5]={1,2,3,4,5};
//     swapAlternate(even,8);
//     swapAlternate(odd,5);
//     cout<<endl;
//     printAlternate(even,8);
//     //printAlternate(odd,5);
//     return 0;
// }
/*#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i=1;
   while(i<=n)
   {
       int space=i-1;
       while(space)
       {
           cout<<" ";
           space--;
       }
       int j=1;
       while(n-i+1)
       {
           cout<<"*";
           
       }
   }
}*/
#include<iostream>
using namespace std;
void reverse(int a[],int start,int end)
{
    while(start<end)
    {
        int temp=a[start];
        a[start++]=a[end];
        a[end--]=temp;
    }
}
void rotatearray(int a[],int n,int k)
{
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
    reverse(a,0,n-1);
}
int main()
{
    int n,i,k;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int size=sizeof(a)/sizeof(a[0]);
     cout<<"how many times you want to rotate"<<endl;
    cin>>k;
    rotatearray(a,size,k);
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// void rightrotate(int a[],int size)
// {
//     int temp=a[size-1],i;
//     for(i=size-1;i>0;i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[0]=temp;
// }
// void arrayrotate(int a[],int size,int k)
// {
//     int i;
//     for(i=1;i<=k;i++)
//     {
//         rightrotate(a,size);
//     }
// }
// int main()
// {
//     int n,i,k;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int size=sizeof(a)/sizeof(a[0]);
//     cout<<"how many times you want to rotate"<<endl;
//     cin>>k;
//     arrayrotate(a,size,k);
//     for(i=0;i<n;i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }