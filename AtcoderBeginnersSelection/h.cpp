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
    int d[N];
    for(int i=0;i<N;i++){
        cin >> d[i];
    }
    sort(d,d+N);
    int ans=1;
    int val=d[0];
    for(int i=0;i<N;i++){
        if(val<d[i]){
            ans++;
            val = d[i];
        }
    }
    cout << ans << endl;
    return 0;
}