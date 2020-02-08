#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <math.h>
using namespace std;


int main() {

    string s;
    cin >> s;
    int ans;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}