
#include<iostream>
#include<algorithm>
using namespace std;
    /*  Naive solution
        check for Anagram                          */
bool areAnagram(string s1,string s2);
int main()
{
  string s1="anuj";
  string s2="ajnus";

  if(areAnagram(s1,s2))
  {
      cout<<"yes";
  }
  else
  {
      cout<<"no";
  }

}

bool areAnagram(string s1,string s2)
{

    if(s1.length()!=s2.length())
    {
        return false;

    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


       return(s1==s2);





}
