#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        vector <int> v;
        int j=0;
        while(j<n){
            int sum=0;
            while(arr[j]>0){
                sum += arr[j];
                j++;
            }
            if(sum != 0)
            	v.push_back(sum);
            sum=0;
            while(arr[j]<0){
                sum += arr[j];
                j++;
            }
            if(sum != 0)
           		v.push_back(sum);
        }
        //for(int k=0;k<v.size();k++)
        //	cout<<v[k]<<" ";
        int max;
        
        while(!v.size()<=2){
        	vector <int> v1;
            for(int k=0;k<v.size()-1;k=k+3){
                max=0;
                if(v[k] > v[k+1] && v[k] > v[k+2]){
                    max = v[k];
                }
                else if(v[k+1] > v[k] && v[k+1] > v[k+2]){
                    max = v[k+1];
                }
                else{
                    max = v[k+2];
                }
                int sum = v[k]+v[k+1]+v[k+2];
                if(max<sum)
                    max = sum;
                v1.push_back(max);
            }
           // v.clear();
           v.erase(v.begin(),v.end());
            v = v1;
            cout<<max;
        }
        
       // cout<<endl<<max<<endl;
    }
	return 0;
}
