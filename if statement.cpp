
/* If 1<=n<=9 , then print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2
, etc.).
If n>9, print Greater than 9.*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(n>9) {
        cout << "Greater than 9\n";
    }
    else if(n>8) {
        cout << "nine\n";
    }
    else if(n>7) {
        cout << "eight\n";
     }
     else if(n>6) {
         cout << "seven\n";
     }
     else if(n>5) {
         cout << "six\n";
     }
     else if(n>4) {
         cout << "five\n";
     }
     else if(n>3) {
         cout << "four\n";
     }
     else if(n>2) {
         cout << "three\n";
     }
     else if(n>1)
     {
         cout << "two\n";
     }
     else if(n>0) {
     cout << "one\n";
     }
     else 
     {
         cout << "invalid entry\n";
     }


    return 0;
}
