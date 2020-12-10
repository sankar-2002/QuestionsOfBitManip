#include <iostream>
using namespace std;

bool getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}
int setBit( int n, int pos) {
    return (n | (1 << pos));
}

int unique1(int arr[],int n) {

    int result = 0;    //result --> 000000 in binary

    for(int i=0;i<64;i++) {    //here the j counter traverses the input array.....whereas i counter traverses the binary of the numbers in array and the result's binary..
        int sum=0;               //64 bit is taken so that all the bits get covered...
        for(int j=0;j<n;j++) {
            if(getBit(arr[j],i)) {  //if getBit gives 1 then only the sum will be incremented..
                sum++;
            }
        }
        if(sum%3 != 0) {
            result = setBit(result,i);
        }
    }

    return result;

}
int main() {

    int arr[7]={1,2,1,1,2,3,2};
    cout<<unique1(arr,7);



}