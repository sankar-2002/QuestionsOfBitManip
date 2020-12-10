#include <iostream>  //some changes for git..
using namespace std;

void prime(int n) {
    int prime[n+1]={0};  //array which is initialized with zeros...

    for(int i=2;i<=n;i++) {  //start traversing array
        if(prime[i]==0) {  //check whether the array is unmarked{0}
            for(int j=i*i;j<=n;j+=i) {  //if unmarked then start marking it's multiples with 1
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++) {  //the array which is left unmarked is prime number
        if(prime[i]==0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main() {

    int n;
    cin>>n;

    prime(10);
}