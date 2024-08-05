2. #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }


    cout<<(sum*1.0/n)<<endl;

    return 0;
}
