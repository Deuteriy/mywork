#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
 
int nod(int a,int b)
{
    if (a<b)
	{ 
            int c;
            c=a;
            a=b;
            b=c;
	}
    if (a%b==0)
        return b;
    else
        return nod(a%b,b);
}
 
int main()
{
    int m, k, i;
    const int nmax=20;
    int n[nmax];
    cout<<endl<<"Введите количество числе в данной последовательности:"<<endl;
    cin>>m;
    cout<<endl<<"Введите числа последовательности"<<endl;
    for (i=0; i<m; i++)
        cin>>n[i];
    k=nod (n[0], n[1]);
    for (i=2; i<m; i++)
        k=nod(k, n[i]);
    cout<<"НОД = "<<k<<endl;
    return 0;
}