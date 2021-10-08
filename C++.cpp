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
   a=a^b;
   b=a^b;
   a=a^b;
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
///insert element at specific index
void insertarray(int a[],int i,int element,int s)
{
    s+=1;
    int e=s-1;
    while(e>=i)
    {
        a[e+1]=a[e];
        e--;
    }
    a[i]=element;
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int ele;
    int s=sizeof(a)/sizeof(a[0]);
    cout<<"Enter inder to insert at:"<<endl;
    cin>>i;
    cout<<"Enter element:"<<endl;
    cin>>ele;
    insertarray(a,i,ele,s);
}
int main()
{
    cout<<"Enter the no. of elements:"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    int start=0;
    int end_point=n-1;
    cout<<"Initial Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    while(start<=end_point)
    {
        swap(a[start],a[end_point]);
        start+=1;
        end_point-=1;
    }
    cout<<"Final Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
   int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=(2*i+1);k++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
        count+=1;
    }
    return count;
}
void reverse(char input[])
{
    int s=0;
    int end_point=length(input)-1;
    while(s<end_point)
    {
        swap(input[s],input[end_point]);
        s+=1;
        end_point-=1;
    }

}

int main()
{
    char name[100];
    cout<<"Enter Name:"<<endl;
    cin.getline(name,100);
    cout<<"Name is:"<<name<<endl;
    cout<<"Length is:"<<length(name)<<endl;;
    reverse(name);
    cout<<"Reverse arrray:"<<name<<endl;
    return 0;
}
bool stringcomapre(char str1[],char str2[])
{
    if(strlen(str1)!=strlen(str2))return false;
    for(int i=0;i<strlen(str1);i++)     //str1[i]!='\0'
    {
        if(str1[i]!=str2[i])return false;
    }
    return true;
}
int main()
{
    char str1[100],str2[100];
    cout<<"Enter 2 String:"<<endl;
    //cin>>str1>>str2;
    cin.getline(str1,100);
    cin.getline(str2,100);
    if(strcmp(str1,str2)==0)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal"<<endl;
    }
    if(stringcomapre(str1,str2))
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal"<<endl;
    }
    int len=strlen(str1);
    cout<<"Length :"<<" "<<len<<endl;
    return 0;
}
int main()
{
    char a[100];
    char b[100];
    cout<<"Enter Strings:"<<endl;
    cin.getline(a,100);
    cin.getline(b,100);
    cout<<"Before Copying:"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    //strcpy(b,a);
    //strncpy(b,a,4);
    //strcat(a,b);
    cout<<"After Copying:"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

}
int main()
{
    char a[100];
    char b[100];
    cout<<"Enter Strings:"<<endl;
    cin.getline(a,100);
    cin.getline(b,100);
    int n=strlen(a);
    for(int i=0;i<=strlen(b);i++)
    {
     a[i+n]=b[i];
    }
    cout<<"After Concatanation:"<<endl;
    cout<<a<<endl;
    cout<<b;

}
void prefixprint(char a[])
{
    for(int e=0;a[e]!='\0';e++)
    {
        for(int i=0;i<=e;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}
int main()
{
    char str[100];
    cout<<"Enter String:"<<endl;
    cin.getline(str,100);
    cout<<"Prefix"<<endl;
    prefixprint(str);
    return 0;
}
void suffixprint(char a[])
{
    for(int e=strlen(a);e<=strlen(a);e--)
    {
        for(int i=e;i<=strlen(a);i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}
int main()
{
    char str[100];
    cout<<"Enter String:"<<endl;
    cin.getline(str,100);
    cout<<"Suffix"<<endl;
    suffixprint(str);
    return 0;
}
///2D Array
/*int main()
{
    int a[100][100];
    int m,n;
    cout<<"Enter Rows and Columns:"<<endl;
    cin>>m>>n;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix Rowwise:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix Columnwise:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/
//String Class
/*class DynamicArray
{
    int *Data;
    int NextIndex;
    int Capacity;       ///total size of the array
public:
    DynamicArray()
    {
        Data=new int[5];
        NextIndex=0;
        Capacity=5;
    }
    void add(int element)
    {
        if(Capacity==NextIndex)
        {
            int *NewData=new int[2*Capacity];
            for(int i=0;i<Capacity;i++)
            {
                NewData[i]=Data[i];
            }
            delete []Data;
            Data=NewData;
            Capacity*=2;
        }
        Data[NextIndex]=element;
        NextIndex+=1;

    }
    void add(int element,int i)
    {
        if(i<NextIndex)
        {
            Data[i]=element;
        }
        else if(i==NextIndex)
        {
            add(element);
        }
        else
        {
            throw "Invalid Index";
        }
    }
    int get(int i)
    {
        if(i>=0 && i<=NextIndex)
        {
            return Data[i];
        }
        else{
            return -1;
        }
    }
    void print()
    {
        for(int i=0;i<NextIndex;i++)
        {
            cout<<Data[i]<<" ";
        }
        cout<<endl;
    }
    int getCapacity()
    {
        return Capacity;
    }

};*/
/*int main()
{
    vector<int> *vp=new vector<int>();            ///Dynamic
    vector<int> v;                                ///Static
    vector<int> v2(10,-2);                        ///Initialize Vector
    vector<int> v3(100);
    sort(v2.begin(),v2.end())

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //v.pop_back();
    int n;
    cout<<"Enter no"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
        cout<<"Size:"<<v.size()<<endl;
        cout<<"Capacity:"<<v.capacity()<<endl;

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<endl;
    }

    return 0;
}*/
/*int main()
{
    string s="shantanu";
    //cout<<s<<endl;


    string *s1=new string;
    *s1="Roy";
    cout<<s1<<endl;
    cout<<*s1<<endl;

    vector<string> v;
    v.push_back(s);
    v.push_back("roy");
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<endl;
        sort(v.at(i).begin(),v.at(i).end());
        cout<<v.at(i)<<endl;
    }
    cout<<"Enter String:"<<endl;
    string s0;
    getline(cin,s0);
    cout<<s0<<endl;
    cout<<s0[0]<<endl;
    return 0;
}*/
/*int main()
{
    string s="abc";
    string a="def";
    string s0="";
    int ag=666;
    s0+=s+a+"hello"+"kay"+"abc"+"abc";
    cout<<s0<<endl;
    cout<<s0.size()<<endl;
    cout<<s0.length()<<endl;
    string sub=s0.substr(3,5);
    cout<<sub<<endl;
    cout<<s0.find("abc")<<endl;
    string convert=to_string(ag);
    cout<<convert<<endl;
    int k=atoi(convert.c_str());
    cout<<k<<endl;
    return 0;
}*/
///BUBBLE SORT AND SELECTION SORTING
/*void selectionsort(int a[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int smallest=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[smallest])
            {
                smallest=j;
            }
        }
        swap(a[i],a[smallest]);
    }

}*/
/*void Bubblesort(int a[],int n)
{
    int count=1;
    while(count<=n-1)
    {
        bool optimisation=false;          //optimisation
        for(int i=0;i<=n-2;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                optimisation=true;
            }
        }
        if(optimisation==false)break;
        count++;


    }
}
int main()
{
    int n;
    cout<<"Enter No. of elements:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //selectionsort(a,n);
    Bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
/*int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
///LINEAR AND BINARY SEARCH
/*int LinearSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)return i;
    }
    return -1;
}*/
/*int BinarySearch(int a[],int n,int key)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(key==a[mid])return mid;
        else if(a[mid]>key)e=mid-1;
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
void BubbleSort(int a[],int n)
{
    int count=1;
    while(count<=n-1)
    {
        bool check=false;
        for(int i=0;i<=n-2;i++)
        {
            if(a[i]>a[i+1])
            {
                check=true;
                swap(a[i],a[i+1]);
            }
        }
        if(check==false)break;
        count++;
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Key:"<<endl;
    int key;
    cin>>key;
    BubbleSort(a,n);
    int position=BinarySearch(a,n,key);
    if(position==-1)cout<<"Key not found"<<endl;
    else
    {
        cout<<"Key found at position:"<<" "<<position+1<<endl;
    }

    return 0;
}*/
///RECURSION BASIC
///factorial
/*int fact(int n)
{
    if(n<0)return -1;
    if(n==0)return 1;
    //int ans=fact(n-1);
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial:"<<ans<<endl;
}*/
///fibonacci number
/*int Fibonacci(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    int smalloutput1=Fibonacci(n-1);
    int smalloutput2=Fibonacci(n-2);
    return smalloutput1+smalloutput2;
}
int main()
{
    cout<<"Fibonnaci:"<<Fibonacci(3)<<endl;
    return 0;
}*/
///Power
/*int power(int x,int n)
{
    if(n==0)return 1;
    int A=power(x,n-1);
    return x*A;
}
int main()
{
    cout<<"Power:"<<power(2,3)<<endl;
    return 0;
}*/
///Print Numbers
/*void print(int n)
{

    if(n==0)return;
    cout<<n<<endl; //for before
    print(n-1);
    return;
    //cout<<n<<endl; //for after
}
int main()
{
    cout<<"Printed Numbers:"<<endl;
    print(10);
    return 0;
}*/
///Count Digits
/*int Count(int n)
{
    if(n==0)return 0;
    int A=Count(n/10);
    return A+1;
}
int main()
{
    cout<<"No.of digits:"<<Count(432)<<endl;
    return 0;
}*/
///Sum of Digits
/*int Sum(int n)
{

    if(n==0)return 0;
    int A=Sum(n/10);
    int k=n%10;
    return A+k;

}
int main()
{
    cout<<"Sum digits:"<<Sum(432)<<endl;
    return 0;
}///Sum of Digits
/*int Sum(int n)
{

    if(n==0)return 0;
    int A=Sum(n/10);
    int k=n%10;
    return A+k;

}
int main()
{
    cout<<"Sum digits:"<<Sum(432)<<endl;
    return 0;
}*/
///Multiplication
/*int Multiplication(int m,int n)
{
    if(n==0)return 0;
    int Assume=Multiplication(m,n-1);
    return m+Assume;
}
int main()
{
    cout<<"Multiplication:"<<Multiplication(5,3)<<endl;
    return 0;
}*/
///Count Zeroes
/*int Zeroes(int n)
{
    if(n==0)return 0;
    int Assume=Zeroes(n/10);
    int lastdigit=n%10;
    if(lastdigit==0)
    {
        return 1+Assume;
    }
    else
    {
        return Assume;
    }
}
int main()
{
    cout<<"Zeroes:"<<Zeroes(2002)<<endl;
    return 0;
}*/
///Geometric Sum
/*double Geometric(int k)
{
    if(k==0)return 1;
    double Assume=Geometric(k-1);
    return Assume+1.0/pow(2,k);
}
int main()
{
    cout<<"geometric Sum:"<<Geometric(4)<<endl;
    return 0;
}*/
///RECURSION INTERMEDIATE
///array sorted or not
/*bool Array(int a[],int n)
{
    if(n==0||n==1)return true;
    if(a[0]>a[1])
    {
        return false;
    }
    else
    {
        bool S=Array(a+1,n-1);
        return S;
    }

}*/
/*bool Array2(int a[],int n)
{
    if(n==0||n==1)return true;
    bool S=Array2(a+1,n-1);
    if(!S)
    {
        return false;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    else
    {
        return S;
    }
}*/
/*bool array3(int a[],int n)
{
    if(n==0||n==1)return true;
    if(a[n-2]>a[n-1])return false;
    return array3(a,n-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(array3(a,n))
    {
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}*/
///SUM OF ARRAY
/*int Sum(int a[],int n)
{
    if(n==0)return 0;
    return a[0]+Sum(a+1,n-1);
}*/
/*int Sum2(int a[],int n)
{
    if(n==0)return 0;
    return Sum2(a,n-1)+a[n-1];
}*/
///using index
/*int Sum3(int a[],int n,int i)
{
    if(i==n)
    {
        return 0;
    }
    return a[i]+Sum3(a,n,i+1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"SUM:"<<Sum3(a,n,i)<<endl;
    return 0;
}*/
///Check if element is present
/*bool CheckElement(int a[],int n,int key)
{
    if(n==0)return 0;
    if(key==a[n-1])return true;
    return CheckElement(a,n-1,key);
}*/
/*bool CheckElement(int a[],int n,int i,int key)
{
    if(i==n)return 0;
    if(key==a[i])return true;
    return CheckElement(a,n,i+1,key);
}*/
/*bool CheckElement(int a[],int n,int key)
{
    if(n==0)return 0;
    bool rightbigarray= CheckElement(a+1,n-1,key);
    if(rightbigarray)return true;
    if(a[0]==key)
    {
        return true;
    }
    else
    {
        return false;
    }

}*/
/*bool CheckElement(int a[],int n,int key)
{
    if(n==0)return 0;
    if(key==a[0])return true;
    return CheckElement(a+1,n-1,key);
}*/
/*int main()
{
    int n;
    cin>>n;
    int i=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to be found"<<endl;
    int key;
    cin>>key;
    if(CheckElement(a,n,i,key))
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not present"<<endl;
    }

    return 0;
}*/