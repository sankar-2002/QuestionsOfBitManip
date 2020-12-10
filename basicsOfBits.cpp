#include <iostream>
using namespace std;

//(1<<pos) this gives 1 at the mentioned position and zero at remaining position..(called as left shift operator)
/* link to hackerearth's explanation : https://www.hackerearth.com/practice/notes/fun-with-bits-print-all-subsets-of-a-set/  */

int getBit(int n,int pos) {
    return((n & (1<<pos))!=0);  //if it is returning zero then the bit is 0...if it is returning 1 then the bit is 1..
}

int setBit(int n, int pos) {
    return(n | (1<<pos));  //setting means set the bit into 1...(0-->1.....1-->1)
}

int clearBit(int n, int pos) {
    int mask = ~(1<<pos); //this will give zero at the mentioned pos and one at Remaining position..
    return(n & (mask));  //this will set the zero at mentioned pos
}

int updateBit(int n, int pos, int value) {  
    int mask = ~(1<<pos);
    n = n & mask;  //storing the cleared bit in n..now we can set the n
    return(n | (value<<pos));
}


int main() {

    // cout<<getBit(1,2);
    // cout<<setBit(5,1);
    // cout<<clearBit(5,2);
    cout<<updateBit(5,1,1);

    return 0;

}