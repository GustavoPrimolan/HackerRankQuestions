#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

//SOLUÇÃO O(N) E ESPAÇO AUXILIAR O(1)
int main() {
    long int N,K,p,q,sum,i,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();
	
    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       cout << a[i] << " ";
	   if(max<x) max=x;

    }
    cout<<max;
    return 0;
}