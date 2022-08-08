#include <iostream>

// 10958802 RICHARD OWUSU AHWIRENG

using namespace std;

int main()
{
    int i = 1, average = 0, sum =0;
    while(i++<=10000) {
        if(i%2==0){
            sum +=i;
            average ++;
        }
    }
    cout<<" Sum of all even numbers between 1 and 10000 is "<< sum << endl;
    cout <<"Average is "<<(sum/average) <<endl;

    return 0;
}
