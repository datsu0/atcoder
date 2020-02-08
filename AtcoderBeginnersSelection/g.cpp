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
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    sort(a,a+N);
    int alice=0;
    int bob=0;
    for(int i=0;i<N;i++){
        if(i%2==0){
            alice+=a[i];
        }else{
            bob+=a[i];
        }
    }
    //データ数によって偶数列奇数列どっちに最小の数が来るのかが違う
    cout << abs(alice-bob) << endl;
    return 0;
}