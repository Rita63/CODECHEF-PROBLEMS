#include <iostream>
using namespace std;
int main(){

int T,n,r,q,s=0;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        r = n%10;  //last digit
        q =n;
        while(n>=10)
        {
            n=n/10;  //first digit
        }
        q=n;
        s=r+q;
        cout<<s<<endl;
        
    }

    return 0;
}

