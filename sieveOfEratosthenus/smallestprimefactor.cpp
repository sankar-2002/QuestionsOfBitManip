#include <iostream>
using namespace std;

void primeFactor(int n) {

    int spf[n+1] = {0};  //declaring an array and initializing it with zero...

    for(int i=2; i<=n; i++) {  //then from 2-->n initializing it with it's own value as every number is factor of it's own
        spf[i]=i;
    }

    for(int i=2;i<=n;i++) {  //traversing from 2-->n and checking whether the i is initialized
        if(spf[i]==i) {   //if initialized then
            for(int j=i*i; j<=n; j=j+i) {  //let suppose i=2 then we will start checking from i^2 i.e 4 to n all it's multiples
                if(spf[j]==j) {  //if all it's multiples have there own factors initialized then we will initialize it's multiple with 2....
                    spf[j]=i;   //because if they are multiples of 2 then there smallest prime factor will be two....
                               //same steps will be repeated for 3 and 4...so on
                }
            }
        }
    }

    while(n!=1) {   //do this till n becomes 1
        cout<<spf[n]<<" ";  //we will print it's spf and we will keep on dividing n by spf so that we reach 1..to see visually calculate the factor of any number..
                            //using pen and paper..
        n=n/spf[n];
    }
}
int main() {

    int n;
    cin>>n;

    primeFactor(50);
}