#include <iostream>
using namespace std;
int numberOfOnes(int n) {

    int count=0;

    while(n!=0) {
        n = n & (n-1); //no of times this operation is performed...the number of set bits get reduced by one for each time...
                         //so we will count the number of times the operation is executed which in turn will give me number of one present in the binary
        count++;
    }
    return count;
}

bool powerOfTwo(int n) {

    return(n && !(n & (n-1))); /* & is relational operator which deals with numbers*/
                               /* && is a bitwise operator which deals with bits*/
                               /* n & (n-1) will give zero if n is power of two */
                               /* ! n & (n-1) will return true if n is power of two */
                               /* when n is zero n-1 is not possible so for corner case..
                               we will put n && which will make the entire return zero(false) */
}

void subsets(int arr[],int n) {  //empty subset is not included ...

    for(int i=0;i<(1<<n);i++) {  /*here 1<<n is 2^n*/
        for(int j=0;j<n;j++) {
            if(i & (1<<j)) {  //if the condition is true (if the corresponding bit is set)then it will cout
                cout<<arr[j];
            }
        }
        cout<<endl;
    }
}





int main() {

    int arr[3]={1,2,3};

    // cout<<numberOfOnes(105);
    // cout<<powerOfTwo(16);
    subsets(arr,3);
    
    return 0;
}