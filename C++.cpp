#include<bits/stdc++.h>
using namespace std;

///Cpp Version check
int main()
{
    if (__cplusplus == 201703L) cout << "C++17\n";
    else if (__cplusplus == 201402L) cout << "C++14\n";
    else if (__cplusplus == 201103L) cout << "C++11\n";
    else if (__cplusplus == 199711L) cout << "C++98\n";
    else cout << "pre-standard C++\n";
}

///Template
template <typename T>
T myMax(T x, T y)
{
   return (x > y)? x: y;
}

int main()
{
  cout << myMax<int>(3, 7) << endl;
  cout << myMax<double>(3.0, 7.0) << endl;
  cout << myMax<char>('g', 'e') << endl;

  return 0;
}
template<typename T>      //for all DT a single function use template
T mymax(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<mymax<int>(5,6)<<endl;
    cout<<mymax<char>('a','b')<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int largest=a[0];
    //int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    cout<<"Largest element:"<<largest<<endl;
return 0;
}
int main()
{
   int a,b;
   cout<<"Enter elements:"<<endl;
   cin>>a>>b;
   cout<<"Before Swapping:"<<endl;
   cout<<"a:"<<a<<endl;
   cout<<"b:"<<b<<endl;
   int temp=a;
   a=b;
   b=temp;
   /*a=a^b;
   b=a^b;
   a=a^b;*/
   swap(a,b);
   cout<<"After Swapping:"<<endl;
   cout<<"a:"<<a<<endl;
   cout<<"b:"<<b<<endl;

   return 0;
}
int main()
{
    cout<<"Enter no. of elements:"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        cout<<"Elements before:"<<a[i]<<endl;


    }
    for(int i=n-1;i>=0;i--)
    {

        cout<<"Elements after:"<<a[i]<<endl;
    }
    return 0;
}

template <class T, int max>
int arrMin(T arr[], int n)
{
   int m = max;
   for (int i = 0; i < n; i++)
      if (arr[i] < m)
         m = arr[i];

   return m;
}

int main()
{
   int arr1[]  = {10, 20, 15, 12};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);

   char arr2[] = {1, 2, 3};
   int n2 = sizeof(arr2)/sizeof(arr2[0]);

   // Second template parameter to arrMin must be a constant
   cout << arrMin<int, 10000>(arr1, n1) << endl;
   cout << arrMin<char, 256>(arr2, n2);
   return 0;
}