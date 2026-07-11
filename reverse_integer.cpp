#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    long int reverse(int x) {
        
        long int reverse=0;
        while(x!=0){
            int mod=x%10;
            x=x/10;
            reverse=reverse*10+mod;
            if(reverse>INT_MAX)return 0;
            if(reverse<INT_MIN)return 0;
        }
        return (int)reverse;
    }
};

int main(){
    Solution sol;

    int test1 = 123;
    int test2 = -123;
    int test3 = 120;
    int test4 = 1534236469;   // overflow case, should return 0
    int test5 = -2147483648; // INT_MIN edge case
    int test6 = 0;

    cout << "reverse(" << test1 << ") = " << sol.reverse(test1) << endl;
    cout << "reverse(" << test2 << ") = " << sol.reverse(test2) << endl;
    cout << "reverse(" << test3 << ") = " << sol.reverse(test3) << endl;
    cout << "reverse(" << test4 << ") = " << sol.reverse(test4) << endl;
    cout << "reverse(" << test5 << ") = " << sol.reverse(test5) << endl;
    cout << "reverse(" << test6 << ") = " << sol.reverse(test6) << endl;

    return 0;
}