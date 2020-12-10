#include <iostream>  //only single element is unique...
using namespace std;

int unique(int arr[],int n) {
     int xorsum=0;

     for(int i=0; i<n;i++) {   //every single element is xored with other elements..if the element is present twice it gets nullified..and only unique element is stored in xorsum.. 
         xorsum = xorsum^arr[i];    //a^a=0...that is xor of same element gives zero
     }

     return xorsum;

}
int main() {

    int arr[9]={1,2,1,2,3,3,4,5,4};

    cout<<unique(arr,9);

   

}