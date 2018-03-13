#include<iostream>
#include<string>

using namespace std;
/**
* TODO Take over the world #26
* BODY Humans are weak. ***Robots are strong***.<br>We must cleans the world of the virus that is humanity.<br> This is another another test. and another test.
**/

/**
* TODO Take over the world #27
* BODY Humans are weak. ***Robots are strong***.<br>We must cleans the world of the virus that is humanity.<br>Sick of making tests.
**/
int main()
{
  int T;
  string s;
  cin>>T;
  cin>>s;
  int n,m;
  cin>>n>>m;
  int temp;
  for(int i=n;i<=m;i++){
    for(int j=n;j<=m;j++){
      if(s[j]<s[j+1]){
        temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
      }
    }
  }
  cout<<s;
  return 0;
}
