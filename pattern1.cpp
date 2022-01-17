// n*n pattern
#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int l;
    cin>>l;
    for(int i=1;i<=l;i++){//Row
        for(int j=1;j<=l;j++){//Coulmn
            cout<<"* ";
        }
        cout<<"\n";
    }
    
    return 0;
}
