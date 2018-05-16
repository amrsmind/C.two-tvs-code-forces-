#include <iostream>
#include <cmath>
#include <map>
#include <iterator>
#include <functional>
#include <algorithm>
#include <utility>

using namespace std;


multimap<long long int,long long int> shows;

int main(){

    long long int n,l,r,maxi=-1ll,tv1=-1ll,tv2=-1ll;
    int tv=1;
    cin >> n;


    while(n--){
            cin >>l>>r;
            shows.insert(make_pair(l,r));
    }


auto itstart = shows.begin();
auto itnext = next(itstart,1);
int showssize = shows.size()-1;
tv1=itstart->second;
while(tv!=3 && showssize--){
     if ((itnext -> first) <= tv1 && (itnext -> first) <= tv2)
        {
            tv=3;
        }
     else if ((itnext -> first) <= tv1 ){
        tv=2;

        tv2=(itnext -> second);
     }
     else if ((itnext -> first) <= tv2 ){
        tv=2;
        tv1 = (itnext -> second);
     }
     else
        {
            tv1=(itnext -> second);
            tv=1;
        }


    //itstart++;
    itnext++;

}

if(tv==3){
    cout <<"NO";
}
else{cout <<"YES";}



    return 0;
}
