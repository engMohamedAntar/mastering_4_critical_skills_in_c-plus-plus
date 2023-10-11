#include<iostream>
#include <map>
#include<set>
using namespace std;


int main() {
   int N;
   cout<<"Enter number of strings\n";
   cin>>N;
   map<string,set<string>> mp;
   for(int i=0;i<N;i++)
   {
       string str;
       cin>>str;
       string c="";
       for(auto x: str)
        {
            c+=x;
            mp[c].insert(str);
        }
   }
   ///////////////////
   cout<<"Enter number of queries\n";
   int q;cin>>q;
   while(q--)
   {
       string str;
       cin>>str;
      if(mp.count(str))
        {
            for(auto x: mp[str])//will iterate over the set( mp[str] )
                cout<<x<<" ";
            cout<<endl;
        }
      else
        cout<<"No such prefix found\n";
   }
	return 0;
}
