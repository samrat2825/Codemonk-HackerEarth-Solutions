#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int a[n][n];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin>>a[i][j];

		int count = 0;

		for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    for(int k=i;k<n;k++)
                    {
                        for(int m=j;m<n;m++)
                        {
                            if(a[i][j]>a[k][m])
                            {
                                count++;
                            }
                                
                        }
                    }
                }
            }
		cout<<count<<endl;
	}

	return 0;
}
