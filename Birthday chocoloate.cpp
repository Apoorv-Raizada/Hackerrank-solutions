/*Lily has a chocolate bar consisting of a row of squares where each square has an integer written on it. She wants to share it with Ron for his birthday, which falls on month and day . Lily wants to give Ron a piece of chocolate only if it contains consecutive squares whose integers sum to .Given , , and the sequence of integers written on each square of Lily's chocolate bar, how many different ways can Lily break off a piece of chocolate to give to Ron?For example, if , and the chocolate bar contains squares with the integers written on them from left to right, the following diagram shows two ways to break off a piece:The first line contains an integer denoting (the number of squares in the chocolate bar).The second line contains space-separated integers describing the respective values of (the numbers written on each consecutive square of chocolate).The third line contains two space-separated integers describing the respective values of (Ron's birth day) and (Ron's birth month).
*/


#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector < int > s, int d, int m)
{
int res=0,p=0;
for(int i=0;i<n;i++)
{
int sum=0;
for(int j=0;j<m;j++)
{
sum=sum+s[i+j];
}
if(sum==d)
p++;
}
res=p;
return res;
}
int main()
{
int n;   
cin >> n;
vector<int> s(n);    
for(int s_i = 0; s_i < n; s_i++)
{
cin >> s[s_i];
}
int d;
int m;
cin >> d >> m;    
int result = solve(n, s, d, m);    
cout << result << endl;   
return 0;
}
