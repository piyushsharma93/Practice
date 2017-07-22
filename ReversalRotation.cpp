#include <iostream>
using namespace std;
//d: parameter, n: size of array

void reverse(int ar[],int L,int h)
{
    int temp;
    while(l<=h)
    {
        temp=ar[l];
        ar[l]=ar[h];
        ar[h]=temp;
        l++;
        h--;
    }
}
int main() {
	int a[]={1,2,3,4,5};
	reverse(a,0,1);
	reverse(a,2,4);
	reverse(a,0,4);
	for(int i=0;i<5;i++)
	{
	    cout<<a[i]<<"\t";
	}
	return 0;
}
