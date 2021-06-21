#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,sum;
    cin >> a >> b;
    sum = a + b;
    if(a == 30 || b == 30) {   
        cout << "true";
    }   
    else if(a + b == 30){
        cout << "true";

    }
    else{
        cout << "false";
    }
return 0;

}
