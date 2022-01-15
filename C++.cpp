#include <bits/stdc++.h>
using namespace std;

///Cpp Version check
/*int main()
{
    if (__cplusplus == 201703L) cout << "C++17\n";
    else if (__cplusplus == 201402L) cout << "C++14\n";
    else if (__cplusplus == 201103L) cout << "C++11\n";
    else if (__cplusplus == 199711L) cout << "C++98\n";
    else cout << "pre-standard C++\n";
}*/

///Template
/*template <typename T>
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
}*/
/*template<typename T>      //for all DT a single function use template
T mymax(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<mymax<int>(5,6)<<endl;
    cout<<mymax<char>('a','b')<<endl;
}*/
/*int main()
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
}*/
/*int main()
{
   int a,b;
   cout<<"Enter elements:"<<endl;
   cin>>a>>b;
   cout<<"Before Swapping:"<<endl;
   cout<<"a:"<<a<<endl;
   cout<<"b:"<<b<<endl;
   /*int temp=a;
   a=b;
   b=temp;*/
/*a=a^b;
   b=a^b;
   a=a^b;*/
//swap(a,b);
/*cout<<"After Swapping:"<<endl;
   cout<<"a:"<<a<<endl;
   cout<<"b:"<<b<<endl;

   return 0;
}*/
/*int main()
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
}*/

/*template <class T, int max>
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
}*/
///insert element at specific index
/*void insertarray(int a[],int i,int element,int s)
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
*/
/*int main()
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
}*/
/*int main()
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
}*/
/*int length(char input[])
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
}*/
/*bool stringcomapre(char str1[],char str2[])
{
    if(strlen(str1)!=strlen(str2))return false;
    for(int i=0;i<strlen(str1);i++)     //str1[i]!='\0'
    {
        if(str1[i]!=str2[i])return false;
    }
    return true;
}
/*int main()
{
    char str1[100],str2[100];
    cout<<"Enter 2 String:"<<endl;
    //cin>>str1>>str2;
    cin.getline(str1,100);
    cin.getline(str2,100);
    /*if(strcmp(str1,str2)==0)
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
}*/
/*int main()
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

}*/
/*int main()
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

}*/
/*void prefixprint(char a[])
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
}*/
/*void suffixprint(char a[])
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
}*/
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
///First index of an element
/*int index(int a[],int num,int i)
{
    if(i==-1)return -1;
    if(a[i]==num)return i;
    return index(a,num,i+1);
}*/
///Last index of an element
/*int index(int a[],int n,int num,int i)
{
    if(i==n)return -1;
    if(a[i]==num)return i;
    return index(a,n,num,i-1);

}*/
///end to start
/*int index(int a[],int n,int num)
{
    if(n==0)return -1;
    if(a[n-1]==num)return n-1;
    return index(a,n-1,num);
}*/
///start to end
/*int index(int a[],int n,int num,int i)
{
    if(i==n)return -1;
    int indexinremarray=index(a,n,num,i+1);
    if(indexinremarray==-1)
    {
        if(a[i]==num)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return indexinremarray;
    }
}
int main()
{
    int n;
    cin>>n;
    //int i=n-1;
    int i=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter number to find its index"<<endl;
    cin>>num;
    cout<<"Index of number is at:"<<index(a,n,num,i)<<endl;
    return 0;
}*/
///Print all position
/*void AllIndex(int a[],int n,int num,int i)
{
    if(i==n)return;
    if(a[i]==num)
    {
        cout<<i<<",";
    }
    return AllIndex(a,n,num,i+1);

}
int main()
{
    int n;
    cin>>n;
    int i=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter number to find its index"<<endl;
    cin>>num;
    cout<<"Index of number is at:"<<endl;
    AllIndex(a,n,num,i);
    return 0;
}*/
///Occurence of number
///using int
/*int Frequency(int a[],int n,int num,int i,int Count)
{
    if(i==n)return Count;
    if(a[i]==num)
    {
        //Count+=1;
        return Frequency(a,n,num,i+1,Count)+1;
    }
    return Frequency(a,n,num,i+1,Count);
}*/
///using void and reference
/*void Frequency(int a[],int n,int num,int i,int &Count)
{
    if(i==n)return;
    if(a[i]==num)
    {
        Count++;
    }
    return Frequency(a,n,num,i+1,Count);
}*/
/*int main()
{
    int n;
    cin>>n;
    int i=0;
    int Count=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter number to find its occurence"<<endl;
    cin>>num;
    //Frequency(a,n,num,i,Count);
    //cout<<"Frequency of number is:"<<Count<<endl;
    cout<<"Frequency of number is:"<<Frequency(a,n,num,i,Count)<<endl;
    return 0;
}*/
///Store all position of an element
///using vector
/*void StoreAllIndex(int a[],int n,int num,int i,vector<int> &result)
{
    if(i==n)return;
    if(a[i]==num)
    {
        result.push_back(i);
    }
    return StoreAllIndex(a,n,num,i+1,result);
}*/
///using array
/*int StoreAllIndex(int a[],int n,int num,int i,int result[],int j)
{
    if(i==n)return 0;
    if(a[i]==num)
    {
        result[j]=i;
        return 1+StoreAllIndex(a,n,num,i+1,result,j+1);
    }
    return 0+StoreAllIndex(a,n,num,i+1,result,j);
}
int main()
{
    int n;
    cin>>n;
    //vector<int> result;
    int i=0;
    int Count=0;
    int a[n];
    int j=0;
    int res[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cout<<"Enter number to find its occurence index"<<endl;
    cin>>num;
    int k=StoreAllIndex(a,n,num,i,res,j);
    cout<<"Number is at index:"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<res[i]<<",";
    }
    return 0;
}*/
/*bool CheckPalindrome(int a[],int n,int start,int end)
{
    if(start>end)return true;
    if(a[start]==a[end])
    {
        return CheckPalindrome(a,n,start+1,end-1);
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool k=CheckPalindrome(a,n,start,end);
    if(k==true)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}*/
///Palindrome of number
/*int Reverse(int num,int rev_num)
{
    if(num<=0)return rev_num;
    rev_num=rev_num*10+(num%10);
    Reverse(num/10,rev_num);
}
int main()
{
    int num;
    cin>>num;
    int rev_num=0;
    cout<<Reverse(num,rev_num)<<endl;
    if(Reverse(num,rev_num)==num)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }

}*/
///RECURSION ADVANCED
///print and reverse character array
/*void print(char a[])
{
    if(a[0]=='\0')return;
    print(a+1);
    cout<<a[0]<<" ";
}
int main()
{
    char input[100];
    cin.getline(input,100);
    print(input);
}*/
///print length of char array
/*int length(char input[])
{
    if(input[0]=='\0')return 0;
    return 1+length(input+1);
}
int main()
{
    char input[100];
    cin.getline(input,100);
    cout<<"Length is:"<<length(input);
    return 0;
}*/
///replace character
/*void Replace(char input[],char a,char x)
{
    if(input[0]=='\0')return;
    if(input[0]==a)
    {
        input[0]=x;
    }
    cout<<input[0]<<" ";
    Replace(input+1,a,x);

}
int main()
{
    char input[100];
    cin.getline(input,100);
    char a;
    char x;
    cout<<"Enter character to be replaced:"<<endl;
    cin>>a;
    cout<<"Enter the new character:"<<endl;
    cin>>x;
    cout<<"Replaced String:"<<endl;
    Replace(input,a,x);
}*/
///remove character
/*void Remove(char a[],char s)
{
    if(a[0]=='\0')return;
    if(a[0]!=s)
    {
        Remove(a+1,s);
    }
    else
    {
        int i=0;
        while(a[i]!='\0')
        {
            a[i]=a[i+1];
            i++;
        }
        Remove(a,s);
    }
}
int main()
{
    char input[100];
    cin.getline(input,100);
    char a;
    cout<<"Enter character to remove:"<<endl;
    cin>>a;
    cout<<"New String:"<<endl;
    Remove(input,a);
    cout<<input<<endl;
    return 0;
}*/
///Remove Duplicates
/*void RemoveDuplicates(char a[])
{
    if(a[0]=='\0')return;
    if(a[0]==a[1])
    {
        int i=0;
        while(a[i]!='\0')
        {
            a[i]=a[i+1];
            i++;
        }
        RemoveDuplicates(a);
    }
    else
    {
        RemoveDuplicates(a+1);
    }
}
int main()
{
    char input[100];
    cout<<"Enter String:"<<endl;
    cin.getline(input,100);
    cout<<"New String:"<<endl;
    RemoveDuplicates(input);
    cout<<input<<endl;
    return 0;
}*/
///Print all subsequences
///using String
///Store using vector
/*void PrintSubsequences(string input,string output,vector<string> &store)
{
    if(input.length()==0)
    {
        store.push_back(output);
        return;
    }
    PrintSubsequences(input.substr(1),output,store);
    PrintSubsequences(input.substr(1),output+input[0],store);
}
int main()
{
    string input;
    vector<string> store;
    cout<<"Enter String"<<endl;
    getline(cin,input);
    string output="";
    PrintSubsequences(input,output,store);
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<endl;
    }
}*/
///using array
/*void PrintSubsequences(char input[],char output[],int i)
{
    if(input[0]=='\0')
    {
        output[i]='\0';
        cout<<output<<endl;
        return;
    }
    PrintSubsequences(input+1,output,i);
    output[i]=input[0];
    PrintSubsequences(input+1,output,i+1);
}
int main()
{
    char input[100];
    cout<<"Enter String"<<endl;
    cin.getline(input,100);
    char output[10];
    int i=0;
    PrintSubsequences(input,output,i);
}*/
///Convert String to int
/*int Convert(char input[],int n)
{
    if(n==0)
    {
        return 0;
    }
    int smallans=Convert(input,n-1);
    int lastdigit=input[n-1]-'0';
    int ans=smallans*10+lastdigit;
    return ans;
}
int main()
{
    char input[100];
    cin>>input;
    int n=strlen(input);
    cout<< Convert(input,n)<<endl;
}*/
/*void Convert(char input[],int n)
{
    if(n==0)
    {
        return;
    }
    int s=input[0]-'0';
    cout<<s;
    return Convert(input+1,n-1);
}
int main()
{
    char input[100];
    cin>>input;
    int n=strlen(input);
    Convert(input,n);
}*/
///Print all permutation of string
/*void permutation(char str[],int i)
{
    if(str[i]=='\0')
    {
        cout<<str<<endl;
        return;
    }
    for(int j=i;str[j]!='\0';j++)
    {
        swap(str[j],str[i]);
        permutation(str,i+1);
        swap(str[j],str[i]);
    }
}
int main()
{
    char str[100];
    cin.getline(str,100);
    int i=0;
    permutation(str,i);
}*/
///Staircase problem
/*int countways(int N)
{
    if(N==0||N==1)return 1;
    //if(N==2)return 2;
    if(N<0)return 0;
    return countways(N-1)+countways(N-2)+countways(N-3);
}
int main()
{
    int n;
    cin>>n;
    cout<<"No of possible ways:"<<countways(n)<<endl;
    return 0;
}*/
///Tower of Hanoi
/*int HanoiSteps(int N)
{
    if(N==0)return 0;
    if(N==1)return 1;
    return HanoiSteps(N-1)+1+HanoiSteps(N-1);
}
///Print steps in tower of hanoi
void PrintSteps(int N,char s,char h,char d)
{
    if(N==0)return;
    PrintSteps(N-1,s,d,h);
    cout<<"Moving disk"<<" "<<N<<" "<<"from"<<" "<<s<<"->"<<d<<endl;
    PrintSteps(N-1,h,s,d);
}
int main()
{
    int n;
    cin>>n;
    cout<<"No of steps:"<<HanoiSteps(n)<<endl;
    PrintSteps(n,'S','H','D');
}*/
///MERGE SORT
/*void MergeArray(int x[],int y[],int a[],int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(x[i]<y[j])
        {
            a[k]=x[i];
            k++;
            i++;
        }
        else
        {
            a[k]=y[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        a[k]=x[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        a[k]=y[j];
        k++;
        j++;
    }

}
void MergeSort(int a[],int s,int e)
{
    if(s>=e)return;
    int mid=(s+e)/2;
    int x[100];
    for(int i=s;i<=mid;i++)
    {
        x[i]=a[i];

    }
    int y[100];
    for(int i=mid+1;i<=e;i++)
    {
        y[i]=a[i];
    }
    MergeSort(x,s,mid);
    MergeSort(y,mid+1,e);
    MergeArray(x,y,a,s,e);

}
int main()
{
    cout<<"Enter n:"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    MergeSort(a,0,n-1);
    cout<<"Sorted Array using Merge Sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
///QUICK SORT
/*int Partition(int a[],int s,int e)
{
    int count=0;
    int p=e;
    for(int i=s;i<=e-1;i++)
    {
        if(a[i]<a[p])
        {
            count++;
        }
    }

    int pivotlocation=count+s;
    swap(a[pivotlocation],a[p]);
    int i=s;
    int j=e;
    while(i<pivotlocation && j>pivotlocation)
    {
        if(a[i]>a[pivotlocation])
        {
            if(a[j]<a[pivotlocation])
            {
                swap(a[i],a[j]);
                i++;
                j--;
            }
            j--;

        }
        else
        {
            i++;
            j--;
        }
    }
    return pivotlocation;
}
void QuickSort(int a[],int s,int e)
{
    if(s>=e)return;
    int p=Partition(a,s,e);
    QuickSort(a,s,p-1);
    QuickSort(a,p+1,e);

}
int main()
{
    cout<<"Enter n:"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
///QUICK SORT METHOD 2
/*int Partition(int a[],int s,int e)
{
    int i=s;
    int p=e;
    for(int j=i;j<p;j++)
    {
        if(a[j]<a[p])
        {
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[p]);
    return i;
}
void QuickSort(int a[],int s,int e)
{
    if(s>=e)return;
    int p=Partition(a,s,e);
    QuickSort(a,s,p-1);
    QuickSort(a,p+1,e);
}
int main()
{
    cout<<"Enter n:"<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    cout<<"Sorted Array using Quick Sort:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
///subarray to find Sum(LeetCode)
/*void subarray(int a[],int n,int sum)
{
    int s=0;
    int start=0,i;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        while(s>sum)
        {
            s-=a[start];
            start++;
        }
        if(s==sum)
        {
            if(start==i)
            {
                cout<<"Sum is directly present at index: "<<start<<endl;
                return;
            }
            cout << "Sum found between indexes "<< start << " and " <<i;
            return;
        }
    }
    cout<<"No subarray found"<<endl;
}*/

/*s+=a[j];
        j++;
        while(s>sum)
        {
            s-=a[start];
            start++;
        }
        if(s==sum)
        {
            cout << "Sum found between indexes "<< start << " and " <<j-1;
            return;

        }
    }
    cout<<"No subarray found"<<endl;
}*/
/*int main()
{
    int a[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(a)/sizeof(a[0])
    int sum = 6;
    subarray(a, n, sum);
    return 0;
}*/
///Remove adjacent duplicates from a string(using char)
/*void Remove(char a[])
{
    if(a[0]=='\0')return;
    if(a[1]=='\0')return;
    if(a[0]==a[1])
    {
        int i=0;
        int j=0;
        //cout<<i<<endl;
        while(a[j]==a[i+1])
        {
            i++;
        }
        while(a[i]!='\0')
        {
            a[j]=a[i+1];
            j++;
            i++;
        }
        Remove(a);

    }
    else
    {
        Remove(a+1);
    }
    int start1=0;
    while(a[start1]!='\0')
    {
        if(a[start1]==a[start1+1])
        {
            Remove(a);
        }
        else
        {
            start1++;

        }
    }

}
int main()
{
    //char rem='\0';
    char *name=new char[100];
    cout<<"Enter name:"<<endl;
    cin.getline(name,100);
    cout<<"After removal of consequitive duplicates:"<<endl;
    Remove(name);
    if(strlen(name)==0)
    {
        cout<<"Empty String"<<endl;
    }
    else{
        cout<<name<<endl;
    }
    delete []name;
}*/
///DATA STRUCTURES
///LINKED LIST
///Basic creation
/*class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int main()
{
    //statically
    Node n1(2);
    Node n2(5);
    n1.next=&n2;
    cout<<n1.data<<" "<<n2.data<<endl;
    Node *head=&n1;
    cout<<head->data<<endl;
    //dynamically
    Node *n3=new Node(3);
    Node *n4=new Node(6);
    n3->next=n4;
    return 0;
}*/
///printing a linked list
/*class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
///print Nodes(ll)
void print(Node *head)
{
    Node *temp=head;                //good practise
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    /*while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }*/
//}
///length(iterative)
/*int length(Node *head)
{
    int length=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    delete temp;
    return length;
}*/
///length(recursive)
/*int length(Node *head)
{
    if(head==NULL)return 0;
    return 1+length(head->next);
}
///print ith node
void printithnode(Node *head,int i)
{
    int n=length(head)-1;
    if(i<0)
    {
        cout<<"Invalid index!"<<endl;
        return;
    }
    int count=1;
    Node *temp=head;
    while(count<=i && temp!=NULL)
    {
        /*if(count==i)
        {
            cout<<"Node at ith index:"<<" "<<temp->data<<endl;
            return;
        }
        else
        {
            temp=temp->next;
            count++;
        }*/
/*temp=temp->next;
        count++;
    }
    if(head)
    {
        cout<<"Node at index"<<" "<<i<<":"<<" "<<temp->data<<endl;
    }
    else
    {
        cout<<"Invalid Index!"<<endl;
    }

}
}
///inserting at tail
Node* Input()
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *n=new Node(data);         //dynamically
        cin>>data;
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;        //inserting at tail
            tail=n;              //tail=tail->next;
        }
    }
    return head;

}
//Inserting at head(reverse)
/*Node* Input()
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *n=new Node(data);
        cin>>data;
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            n->next=head;
            head=n;
        }
    }
    return head;

}*/
///Insert at ith position
/*Node* insertatithposition(Node *head,int i,int data)
{
    if(i<0)
    {
        cout<<"Invalid index!"<<endl;
        return head;
    }
    Node *temp=head;
    if(i==0)
    {
        Node *n=new Node(data);
        n->next=temp;
        temp=n;
        return temp;
    }
    int count=1;
    while(count<=i-1 && temp!=NULL)
    {
        head=head->next;
        count++;
    }
    if(head)
    {
        Node *n1=new Node(data);        //1st method to insert
        /*n1->next=head->next;
        head->next=n1;*/

/*Node *copyNode=head->next;
        head->next=n1;
        n1->next=copyNode;
        return temp;
    }
    return head;
}
///Delete Node
Node* DeleteNodeatithposition(Node *head,int i)
{
    if(i<0)return head;
    if(i==0 && head)
    {
        Node *newhead=head;
        head=head->next;
        newhead->next=NULL;
        delete newhead;
        return head;
    }
    Node *current=head;
    int count=1;
    while(count<=i-1 && current!=NULL)
    {
        current=current->next;
        count++;
    }
    if(current && current->next)
    {
        Node *copymemoryleaknode=current->next;
        current->next=copymemoryleaknode->next;
        copymemoryleaknode->next=NULL;
        delete copymemoryleaknode;
        return head;
    }
    cout<<"Invalid Index!"<<endl;
    return head;

}
///Check if element is present(recursive)
bool checkelement(Node *head,int data)
{
    if(head==NULL)return false;
    if(data==head->data)return true;
    return checkelement(head->next,data);
}
///Check if element is present(Iterative)
/*bool checkelement(Node *head,int data)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            return true;
        }
        temp=temp->next;
        count++;
    }
}*/
/*int main()
{
    //statically
    /*Node n1(2);
    Node n2(5);
    Node n3(6);
    Node n4(7);
    Node n5(9);
    Node *head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(head);
    //print(head);                   //pass by value
    //dynamically
    Node *a1=new Node(1);
    Node *a2=new Node(2);
    Node *a3=new Node(3);
    Node *a4=new Node(33);
    a1->next=a2;
    a2->next=a3;
    a3->next=a4;
    print(a1);*/
//print(Input());
/*int i;
    Node *head=Input();
    cout<<"Linked List:"<<endl;
    print(head);
    cout<<"Length of linked list is:"<<endl;
    cout<<length(head)<<endl;
    /*cout<<"Print ith Node:"<<endl;
    cout<<"Enter index:"<<endl;
    cin>>i;
    printithnode(head,i);*/
//int data;
/*cout<<"Enter Data:"<<endl;
    cin>>data;
    cout<<"Enter index:"<<endl;
    cin>>i;
    Node *head1=insertatithposition(head,i,data);   //insert
    print(head1);*/
/*cout<<"Enter index to delete:"<<endl;
    cin>>i;
    Node *head2=DeleteNodeatithposition(head,i);     //delete
    print(head2);*/
/*cout<<"Enter element to search:"<<endl;
    cin>>data;
    if(checkelement(head,data))
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not present"<<endl;
    }
    return 0;
}*/
///Circular Singly Linked List
/*class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
Node* Input()
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *n=new Node(data);         //dynamically
        cin>>data;
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;        //inserting at tail
            tail=n;              //tail=tail->next;
        }
    }
    tail->next=head;
    return head;

}
void print(Node *head)
{
    Node *temp=head;                //good practise
    while(temp->next!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
Node* Insert(Node *head,int i,int data)
{
    if(i<0)
    {
        cout<<"Invalid index!"<<endl;
        return head;
    }
    Node *temp1=head;
    Node *temp2=head;
    Node *temp3=head;
    Node *tail=NULL;
    while(temp1->next!=head)
    {
        temp1=temp1->next;
    }
    tail=temp1;
    if(i==0)
    {
        Node *n=new Node(data);
        n->next=temp2;
        temp2=n;
        tail->next=temp2;
        return temp2;
    }
    int count=1;

    while(count<=i-1 && temp3->next!=head)
    {
        temp3=temp3->next;
        count++;
    }
    Node *copynode=temp3->next;
    Node *n1=new Node(data);
    temp3->next=n1;
    n1->next=copynode;
    return head;
}
int main()
{
    Node *head=Input();
    cout<<"Circular Singly Linked List:"<<endl;
    print(head);
    int i,data;
    cout<<"Enter Data:"<<endl;
    cin>>data;
    cout<<"Enter index:"<<endl;
    cin>>i;
    Node *head2=Insert(head,i,data);
    cout<<"Circular Singly Linked List after Insertion:"<<endl;
    print(head2);

}*/
///Josephus Circle(Interview Question using Circular Singly Linked List)
/*class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
Node* Input(int s)
{
    Node *head=NULL;
    Node *tail=NULL;
    for(int i=1;i<=s;i++)
    {
        Node *n=new Node(i);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
           tail->next=n;
           tail=n;
        }
    }
    tail->next=head;
    return head;
}
void print(Node *head)
{
    Node *temp=head;                //good practise
    while(temp->next!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
Node* Josephus(Node *head,int m)
{
    Node *temp=head;
    while(temp->next!=temp)
    {
        int count=1;
        while(count<m-1)
        {
            temp=temp->next;
            count++;
        }
        temp->next=temp->next->next;
        temp=temp->next;
    }
    return temp;
}
int main()
{
    int s,m;
    cout<<"Enter size(n):"<<endl;
    cin>>s;
    Node *head=Input(s);
    cout<<"Linked List:"<<endl;
    print(head);
    cout<<"Enter m:"<<endl;
    cin>>m;
    cout<<"Last Element standing:"<<endl;
    cout<<Josephus(head,m)->data<<endl;
}*/
///Reverse a linked list(Recursively)
/*class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void print(Node *head)
{
    if(head==NULL)
    {
        cout<<"NULL"<<endl;
        return;
    }
    cout<<head->data<<"->";
    print(head->next);
}
Node* Input()
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *n=new Node(data);
        cin>>data;
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;
            tail=n;
        }
    }
    return head;
}
Node* Reverse(Node *head)
{
    if(head==NULL || head->next==NULL)return head;
    Node *node1=Reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return node1;
}
///Print alternate Nodes(Recursively)
void printalternatenodes(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    if(head->next==NULL)
    {
        cout<<head->data<<" ";
        return;
    }
    printalternatenodes(head->next->next);
    cout<<head->data<<" ";
}
int main()
{
    Node *head=Input();
    cout<<"Linked List:"<<endl;
    print(head);
    Node *head2=Reverse(head);
    print(head2);
    cout<<"Alternate Nodes:"<<endl;
    printalternatenodes(head);
}*/
///STACK
///stack implementation using array
/*class Stack
{
    int NextIndex;
    int *a;
    int capacity;
public:
    Stack()
    {
        capacity=4;
        a=new int[capacity];
        NextIndex=0;
    }
    int Size()
    {
        return NextIndex;
    }
    bool IsEmpty()
    {
        return NextIndex==0;
    }
    void push(int element)
    {
        if(NextIndex==capacity)                   //dynamic stack implementation
        {
            capacity*=2;
            int *NewArr=new int[capacity];
            for(int i=0;i<capacity;i++)
            {
                NewArr[i]=a[i];
            }
            delete []a;
            a=NewArr;
        }
        a[NextIndex]=element;
        NextIndex++;
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            NextIndex--;
        }
        return;
    }
    int top()
    {
       if(IsEmpty())
       {
           cout<<"Stack is Empty"<<endl;
           return INT_MIN;
       }
       else
       {
           return a[NextIndex-1];
       }
    }
};
int main()
{
    /*cout<<"Enter n:"<<endl;              //for Static implementation
    int n;
    cin>>n;*/
/*Stack s1(n);
    s1.push(10);
    cout<<s1.top()<<endl;*/
/*Stack s2;
    for(int i=1;i<=10;i++)
    {
        s2.push(i);
    }
    cout<<"Size of Stack:"<<" "<<s2.Size()<<endl;
    cout<<"Stack:"<<endl;
    while(!s2.IsEmpty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    cout<<"Size of Stack:"<<" "<<s2.Size()<<endl;
    return 0;
}*/
///stack implementation using Template(array)
/*template<typename T>
class Stack
{
    int NextIndex;
    T *a;
    int capacity;
public:
    Stack()
    {
        capacity=4;
        a=new T[capacity];
        NextIndex=0;
    }
    int Size()
    {
        return NextIndex;
    }
    bool IsEmpty()
    {
        return NextIndex==0;
    }
    void push(T element)
    {
        if(NextIndex==capacity)                   //dynamic stack implementation
        {
            capacity*=2;
            T *NewArr=new T[capacity];
            for(int i=0;i<capacity;i++)
            {
                NewArr[i]=a[i];
            }
            delete []a;
            a=NewArr;
        }
        a[NextIndex]=element;
        NextIndex++;
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            NextIndex--;
        }
        return;
    }
    T top()
    {
       if(IsEmpty())
       {
           cout<<"Stack is Empty"<<endl;
           return 0;                     //0 is valid for all DT
       }
       else
       {
           return a[NextIndex-1];
       }
    }
};
int main()
{
    Stack<char> s2;
    for(char i=97;i<=106                  ;i++)
    {
        s2.push(i);
    }
    cout<<"Size of Stack:"<<" "<<s2.Size()<<endl;
    cout<<"Stack:"<<endl;
    while(!s2.IsEmpty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    cout<<"Size of Stack:"<<" "<<s2.Size()<<endl;
    Stack<double> s1;
    for(double i=1.0;i<=10.0;i++)
    {
        s1.push(i);
    }
    cout<<endl;
    cout<<"Size of Stack:"<<" "<<s1.Size()<<endl;
    cout<<"Stack:"<<endl;
    while(!s1.IsEmpty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    cout<<"Size of Stack:"<<" "<<s1.Size()<<endl;
    cout<<endl;
    Stack<int> s3;
    int input;
    cout<<"Enter Elements:"<<endl;
    while(input!=-1)
    {
        cin>>input;
        s3.push(input);
    }
    cout<<"Stack:"<<endl;
    while(!s3.IsEmpty())
    {
        cout<<s3.top()<<" ";
        s3.pop();
    }
    cout<<endl;
    return 0;
}*/
///Stack implementation using Linked List
/*template<typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class Stack
{
    Node<T> *head;
    int size;
public:
    Stack()
    {
        head=NULL;
        size=0;
    }
    void push(T element)
    {
        Node<T> *n1=new Node<T>(element);
        n1->next=head;
        head=n1;
        size++;
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Empty Stack!"<<endl;
            return;
        }
        Node<T> *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        size--;
    }
    T top()
    {
        if(IsEmpty())
        {
            cout<<"Empty Stack!"<<endl;
            return 0;
        }
        return head->data;
    }
    int Size()
    {
        return size;
    }
    bool IsEmpty()
    {
        return size==0;
    }
};
int main()
{
    Stack<int> s1;
    s1.push(20);
    s1.push(50);
    s1.push(100);
    s1.push(58);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<" "<<endl;
    s1.pop();
    cout<<s1.top()<<" "<<endl;
    s1.pop();
    cout<<s1.top()<<" "<<endl;
    s1.pop();
    cout<<s1.IsEmpty()<<endl;
    return 0;
}*/
///Inbuilt Stack
/*int main(){
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   s.push(6);

   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   s.pop();

   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;

   while(!s.empty())
   {
    cout<<s.top()<<endl;
    s.pop();
   }
   cout<<s.size()<<endl;

   return 0;
}*/
///Remove adjacent duplicates(recursively)
/*void RemoveDuplicates(char a[])
{
    if(a[0]=='\0' || a[1]=='\0')return;
    while(a[0]==a[1])
    {
        int i=0,j=0,count=0;
        while(a[i]==a[j+1])
        {
            j++;
            count++;
        }
        while(a[j]!='\0')
        {
            if(count%2==0)
            {
                a[i+1]=a[j+1];
                i++;
                j++;
            }
            else
            {
                a[i]=a[j+1];
                i++;
                j++;
            }
        }
        RemoveDuplicates(a);
    }
    RemoveDuplicates(a+1);
    int start1=0;
    while(a[start1]!='\0')
    {
        if(a[start1]==a[start1+1])
        {
            RemoveDuplicates(a);
        }
        else
        {
            start1++;

        }
    }

}
int main()
{
    char *a=new char[100];
    cout<<"Enter String"<<endl;
    cin.getline(a,100);
    cout<<"After removal of consequitive duplicates:"<<endl;
    RemoveDuplicates(a);
    if(strlen(a)==0)
    {
        cout<<"Empty String"<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    delete []a;
}*/
///QUEUE
///Queue implementation using array
/*template<typename T>
class Queue
{
    int NextIndex,FrontIndex;
    T *arr;
    int size;
    int capacity;
public:
    Queue()
    {
       capacity=5;
       NextIndex=0;
       FrontIndex=-1;
       arr=new T[capacity];
       size=0;
    }
    Queue(int capacity)
    {
       this->capacity=capacity;
       NextIndex=0;
       FrontIndex=-1;
       arr=new T[capacity];
       size=0;
    }
    int Size()
    {
        return size;
    }
    bool IsEmpty()
    {
        return size==0;
    }
    void push(T element)
    {
        if(size==capacity)
        {
            //cout<<"Queue is full"<<endl;
            //return;

            ///Dynamically

            T *newarr=new T[capacity*2];
            int j=0;
            for(int i=FrontIndex;i<capacity;i++)
            {
                newarr[j]=arr[i];
                j++;
            }
            for(int i=0;i<FrontIndex;i++)
            {
                newarr[j]=arr[i];
                j++;
            }
            FrontIndex=0;
            NextIndex=capacity;
            capacity*=2;
            delete []arr;
            arr=newarr;
        }
        arr[NextIndex]=element;
        NextIndex=(NextIndex+1)%capacity;
        if(FrontIndex==-1)
        {
            FrontIndex=0;
        }
        size++;
    }
    T front()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return 0;
        }
        return arr[FrontIndex];
    }
     void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        FrontIndex=(FrontIndex+1)%capacity;
        size--;
        if(size==0)                       ///optional
        {
            //reset the values
            NextIndex=0;
            FrontIndex=-1;
        }
    }
};

int main()
{

 Queue<int> q(5);
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 q.push(60);
 q.push(70);
 cout<<q.front()<<endl;
 q.pop();
 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.Size()<<endl;
 cout<<q.IsEmpty()<<endl;
 q.push(60);
 q.push(70);

 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.Size()<<endl;
 return 0;
}*/

///queue implementation using Linked List
/*template<typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data=data;
        next=NULL;
    }
};
      head=NULL;
       tail=NULL;
       size=0;
    }
    int Size()
    {
        return size;
    }
    bool IsEmpty()
    {
        return size==0;
    }
    void push(T element)
    {
        Node<T> *n=new Node<T>(element);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            tail->next=n;
            tail=n;
        }
        size++;
    }
    T front()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return 0;
        }
        return head->data;
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node<T> *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        size--;
    }

};
 }
        Node<T> *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        size--;
    }

};
int main()
{

 Queue<int> q;
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 q.push(60);
 q.push(70);
 cout<<q.front()<<endl;
 q.pop();
 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.Size()<<endl;
 cout<<q.IsEmpty()<<endl;
 q.push(60);
 q.push(70);

 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.Size()<<endl;
 while(!q.IsEmpty())
 {
     cout<<q.front()<<endl;
     q.pop();
 }
 cout<<q.Size()<<endl;
 cout<<q.IsEmpty()<<endl;
 return 0;
}*/
///Reverse a Queue
/*void Reverse(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
int main()
{
    queue<int> q;
    for(int i=1;i<=10;i++)
    {
        q.push(i);
    }
    Reverse(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}*/
///Reverse a Queue Recursively
/*void Reverse(queue<int> &q)
{
    if(q.empty())return;
    int a=q.front();
    q.pop();
    Reverse(q);
    q.push(a);
}
int main()
{
    queue<int> q;
    for(int i=1;i<=10;i++)
    {
        q.push(i);
    }
    Reverse(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}*/

///TREES
///GENERIC TREES
/*template<typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data)
    {
        this->data=data;
    }
    ~TreeNode()
    {
        //cout<<"Tree Deleted!"<<endl;
        for(int i=0;i<children.size();i++)
        {
            delete children[i];
        }
    }
};
///printing the tree(Recursive)
void print(TreeNode<int> *root)
{
    if(root==NULL)
    {
        cout<<"Tree is Empty!"<<endl;
        return;
    }
    cout<<root->data<<":";
    if(root->children.empty())
    {
        cout<<"Leaf Node";
    }
    else
    {
        for(int i=0;i<root->children.size();i++)
        {
           cout<<root->children[i]->data<<",";
        }
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
///Print Iteratively(Level Wise)
void PrintLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int> *f=q.front();
        q.pop();
        cout<<f->data<<":";
        if(f->children.empty())
        {
            cout<<"Leaf Node";
        }
        else
        {
            for(int i=0;i<f->children.size();i++)
            {
               cout<<f->children[i]->data<<",";
               q.push(f->children[i]);
            }
        }
        cout<<endl;
     }
}
///take input(Recursive)
TreeNode<int>* takeinput()
{
    int Rootdata;
    cout<<"Enter data:"<<endl;
    cin>>Rootdata;
    TreeNode<int> *root=new TreeNode<int>(Rootdata);
    int n;
    cout<<"Enter the number of children of"<<" "<<Rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int> *child=takeinput();
        root->children.push_back(child);
    }
    return root;
}
///take input(Iterative) Level Wise
TreeNode<int>* takeinputLevelWise()
{
    int RootData;
    cout<<"Enter Data:"<<endl;
    cin>>RootData;
    TreeNode<int> *root=new TreeNode<int>(RootData);
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int> *f=q.front();
        q.pop();
        cout<<"Enter number of children of"<<" "<<f->data<<endl;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int childData;
            cout<<"Enter"<<" "<<i<<"th"<<" "<<"child of"<<" "<<f->data<<endl;
            cin>>childData;
            TreeNode<int> *Child=new TreeNode<int>(childData);
            q.push(Child);
            f->children.push_back(Child);
        }
    }
    return root;
}
///Number of Nodes
int Size(TreeNode<int> *root)
{
    if(root==NULL)
    {
        cout<<"Empty Tree!"<<endl;
        return -1;
    }
    int ans=0;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=Size(root->children[i]);
    }
    return 1+ans;
}
///height of Node
int height(TreeNode<int> *root)
{
    int mh=0;
    if(root==NULL)
    {
        cout<<"Empty Tree!"<<endl;
        return -1;
    }
    for(int i=0;i<root->children.size();i++)
    {
        //int h=height(root->children[i]);
        //if(h>mh)
        //{
            //mh=h;
        //}
        mh=max(mh,height(root->children[i]));
    }
    return 1+mh;
}
///print Nodes at depth/level k
void Nodeatlevelk(TreeNode<int> *root,int k)
{
    if(root==NULL)
    {
        cout<<"Empty Tree:"<<endl;
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        Nodeatlevelk(root->children[i],k-1);
    }
}
void Nodeatlevelk2(TreeNode<int> *root,int k,int currentdepth)
{
    if(root==NULL)
    {
        cout<<"Empty Tree:"<<endl;
        return;
    }
    if(k==currentdepth)
    {
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        Nodeatlevelk2(root->children[i],k,currentdepth+1);
    }
}
///count Leaf Nodes
int countleafnodes(TreeNode<int> *root)
{
    if(root==NULL)
    {
        cout<<"Empty Tree:"<<endl;
        return -1;
    }
    if(root->children.size()==0)return 1;
    int ans=0;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=countleafnodes(root->children[i]);
    }
    return ans;
}
void countleafnodes2(TreeNode<int> *root,int &ans)
{
    if(root==NULL)
    {
        cout<<"Empty Tree:"<<endl;
        return;
    }
    if(root->children.size()==0)
    {
        ans++;
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        countleafnodes2(root->children[i],ans);
    }
}
///PreOrder Traversal
void PreOrder(TreeNode<int> *root)
{
    if(root==NULL)
    {
        cout<<"Tree is Empty!"<<endl;
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
        PreOrder(root->children[i]);
    }
}