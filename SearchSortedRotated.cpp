#include <iostream>
using namespace std;
//d: parameter, n: size of array

int pivot(int ar[],int l,int h)
{
    int m;
    if(l>h || l==h)
    return -1;
    m=(l+h)/2;
    if(ar[m+1]<ar[m] && m<h)
    {
        return m;
    }
    else if(ar[m-1]>ar[m] && m>l)
    {
        return m-1;
    }
    if(ar[m]>ar[l])
    return pivot(ar,m+1,h);
    else
    return pivot(ar,l,m-1);
    
}
int main() {
	int a[]={5,6,7,8,9,1,2,3,4};
    int p=pivot(a,0,8);
    if(p==-1)
    cout<<"Kantaap macha diya re";
    else
    cout<<p;
	return 0;
}
