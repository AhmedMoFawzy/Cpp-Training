#include<iostream>
#include <math.h>
using namespace std;
 
 
int main(){
    int n1, n2, sum=0;
    cin >> n1 >> n2;
    while (min(n1, n2) > 0) {
        for (int i=min(n1, n2); i<=max(n1, n2); i++) {
            sum+=i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
        sum=0;
        cin >> n1 >> n2;
    }
    
}