/* If 1<=n<=9 , then print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2
, etc.).
If n>9, print Greater than 9.*/


#include<iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n>9)
        cout<<"Greater than 9";
        if(n<1)
        cout<<"Invalid Entery";
    else
    {
        switch(n)
        {   
            case 1: cout<<"one"; break;
            case 2: cout<<"two"; break;
            case 3: cout<<"three"; break;
            case 4: cout<<"four"; break;
            case 5: cout<<"five"; break;
            case 6: cout<<"six"; break;
            case 7: cout<<"seven"; break;
            case 8: cout<<"eight"; break;
            case 9: cout<<"nine"; 
        }
    }
    return 0;
}