#include<iostream>
#include <vector>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) 
{
    vector<int> result;

    for (auto& asteroid : asteroids) 
    {
    	
        bool is_exploded = false;
        while (!result.empty() && asteroid < 0 &&  result.back() > 0 ) 
        {
        	// last will explode.
            if ( -asteroid > result.back() ) // result.back() will be removed
            {
                result.pop_back();
                continue;	// See if more explode(will compare asteroid with the remainder values of the result)
            }
            else if (-asteroid == result.back())	// both exploded            
                result.pop_back();
            
            is_exploded = true;		// only asteroid explode(stroid is smaller than result.back() )
            break;
        }

        if (!is_exploded)
            result.push_back(asteroid);
    }
    return result;
}

int main() 
{
    vector<int> v {8,2,-5};
    v=asteroidCollision(v);
    for(auto k: v)
        cout<<k<<" ";
    cout<<endl;
	return 0;
}
