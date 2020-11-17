#include<bits/stdc++.h>
using namespace std;

vector<pair<int,string> >ans;

void printIndex(string s1, string s2)
{
    int len1=s1.length(),len2=s2.length();
    for (int i = 0; i < len1; i++) {
        if (s1.substr(i, len2) == s2) {
            ans.push_back(make_pair(i,s2));
        }
    }
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    sort(s2.begin(),s2.end());

    do{
        printIndex(s1,s2);
    }while(next_permutation(s2.begin(),s2.end()));
    sort(ans.begin(),ans.end());

    for(auto x:ans)
        cout<<"substring '"<<x.second<<"' present at index "<<x.first<<"\n";
}
