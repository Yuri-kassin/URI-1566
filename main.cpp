#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<vector>
#include <string.h>
#include<algorithm>

using namespace std;

int main(){

	vector<int>lit;
	int NC,N,pes,i,j;
	cin>>NC;
	for(i=0;i<NC;i++){
		cin>>N;
		lit.resize(N);
		for(j=0;j<N;j++){
			scanf("%d",&lit[j]);
		}
	sort(lit.begin(),lit.end());
			for(j=0;j<N;j++){
				if(j==N-1)cout<<lit[j]<<endl;
				else if(lit[j]<=230 && lit[j]>=20) cout<<lit[j]<<" ";
			}
			while(!lit.empty()) lit.pop_back();
			

	}
	
	system("pause");
	return 0;
}
