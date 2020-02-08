#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <math.h>
typedef long long ll;
const ll INF = 1e18; 
using namespace std;


int main() {

    int A,B,C,X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;
    int ans=0;
    for(int i=0;i<=A;i++){
        for(int j=0;j<=B;j++){
            for(int k=0;k<=C;k++){
                if(i*500+j*100+k*50==X){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}