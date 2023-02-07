#include <iostream>
#include <vector>
using namespace std;

void insert(int*arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void print(int*arr,int n){
    for(int i =0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    
    int n,m,r;
    cin>>n>>m;
    int i = n-1,j=m-1;
    int a[n],b[m];
    insert(a,n);
    insert(b,m);
    print(a,n);
    print(b,m);
    int sum =0;
    int carry =0;
    while(n!=0 && m!=0){
        
        //cout<<a[i]<<" ";
        //cout<<endl;
        //cout<<b[j]<<" ";
        sum = a[i] + b[j] + carry;
        r = sum%10;
        carry = sum/10;
        v.push_back(r);
        //cout<<endl;
        i--;
        j--;
        n--;
        m--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<< carry<<endl;
    

    return 0;
}
