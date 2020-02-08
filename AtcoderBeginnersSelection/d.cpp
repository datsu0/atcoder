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

    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    ll ans = INF;
    for(int i=0;i<N;i++){
        int tmp=0;
        while(A[i]%2==0&&A[i]>0){
            A[i]/=2;
            tmp++;
        }
        if(ans>tmp){
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}