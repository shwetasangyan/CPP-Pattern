// m*n pattern    m -> row, n-> coulmn
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
