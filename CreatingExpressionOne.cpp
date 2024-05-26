
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool equals = false;
void f(vector<int>VEKTOR,int n,int sum,int index,int final)
{


  if(index == n){
      if(sum == final) equals = true;
      return;
  }


  f(VEKTOR, n,sum+VEKTOR[index],index+1,final);
  f(VEKTOR, n,sum-VEKTOR[index],index+1,final);
}

int main()
{
    int n,sum,index,final;
    vector<int>VEKTOR;
    cin>> n;
    cin>> final;
    for(int i =0;i<n;i++){
        int element;
        cin >> element;
        VEKTOR.push_back(element);
    }
    f(VEKTOR,n,sum,index,final);
    if(equals){
        cout<<"YES";
    }else
    cout<<"NO";
} 