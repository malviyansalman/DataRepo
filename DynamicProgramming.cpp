//https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
#include <bits/stdc++.h>
using namespace std;
int arr[10001];
int fun(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else if(arr[n]!=-1)
    return arr[n];
    else if(n%2!=0)
    return (arr[n]=fun(n-1)+1);
    else return (arr[n]=min(fun(n/2),fun(n-1))+1);
}
int main() {
	int T;
	cin>>T;
	memset(arr,-1,sizeof(arr));
	for(int t=0;t<T;t++)
	{
	    int n;
	    cin>>n;
	    cout<<fun(n)<<endl;
	}
	return 0;
}

//https://practice.geeksforgeeks.org/problems/paths-to-reach-origin/0
#include <bits/stdc++.h>
using namespace std;
int arr[26][26];
int fun(int i,int j)
{
    if(i==0 || j==0)
    return 1;
    else if(arr[i][j]!=-1)
    return arr[i][j];
    else return (arr[i][j]=fun(i-1,j)+fun(i,j-1));
}
int main() {
	//code
	int T;
	cin>>T;
	memset(arr,-1,sizeof(arr));
	for(int t=0;t<T;t++)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<fun(n,m)<<endl;
	}
	return 0;
}
