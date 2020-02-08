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

    int N,A,B;
    cin >> N >> A >> B;
    int ans=0;
    for(int i=1;i<=N;i++){
        if(i/10<1){
            if(A<=i&&i<=B){
                ans+= i;
            }
        }else{
            int val = 0;
            int num = i;
            while(num/10>=1){
                val = val + num%10;
                num=num/10;
            }
            val+=num;
            if(A<=val&&val<=B){
                ans+=i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}