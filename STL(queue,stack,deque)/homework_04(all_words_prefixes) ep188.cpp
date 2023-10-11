#include<iostream>
#include <map>
#include<vector>
using namespace std;


int main() {
   int N;
   cout<<"Enter number of strings\n";
   cin>>N;
   map<string,vector<string>> mp;
   for(int i=0;i<N;i++)
   {
       string str;
       cin>>str;
       string c="";
       for(auto x: str) //Iterates over str charachters
       {
           c+=x;
           mp[c].push_back(str);
       }
   }
   //////////////////
   cout<<"Enter number of queries: ";
   int q;cin>>q;
   while(q--)
   {
       string str;
       cin>>str;

       if(mp.count(str))
       {
           for(auto x: mp[str])
              cout<<x<<" ";
           cout<<endl;
       }
       else
        cout<<"No such prefix"<<endl;
   }
	return 0;
}
