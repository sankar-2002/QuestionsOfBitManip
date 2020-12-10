#include <iostream>
using namespace std;
bool checkgetbit(int n,int pos) {
    return((n & (1<<pos))!=0);  //this will give true(1) or false(0) whether at mentioned position the bit is set(1) or not..
}
void unique2(int arr[], int n) {

    int xorsum = 0;

    for(int i=0; i<n; i++) {
        xorsum=xorsum^arr[i];
    }

    int tempxorsum = xorsum;  //to backup the xorsum as we will right shift xorsum in further steps
    int setbit = 0;
    int pos=0;

    while(setbit!=1) {

        setbit = xorsum & 1;  //this will give the last bit of xorsum
        pos++;                  //keeping the record of position
        xorsum = xorsum>>1;  //right shifting xorsum by one...removes the rigthmost bit
    }

    int newxorsum=0;

    for(int i=0; i<n; i++) {
        if(checkgetbit(arr[i],pos-1)) { //if checkgetbit gives true(1) then only if block will execute
            newxorsum = newxorsum^arr[i];  
        }
    }

    //now we have one unique element in newxor out of two...

    cout<<newxorsum<<endl; // this will give me first unique element...
    cout<<(newxorsum ^ tempxorsum)<<endl; //this will give me second unique element

}
int main() {

    int arr[8]= {1,2,3,5,6,3,2,1};
    unique2(arr,8);

}