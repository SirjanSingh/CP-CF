#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m = n;
        int max1=0,min2=0,i=0,flag = 0;
        int no[n],x[n],y[n];
        for(int k = 0;k<n;k++){
            cin>>x[k]>>y[k];
            cout<<flag<<' ';
            if(x[k] == 1 && flag !=2) {  max1 = y[k];   flag++;}
            if(x[k] == 2 && flag !=2) {  min2 = y[k];   flag++;     cout<<x[k]<<" "<<y[k]<<'\n';}
            cout<<flag<<' ';
         }
        // cout<<max1<<" "<<min2<<'\n';

        //cout<<n<<'\n';
        // for(i= 0;i<n;i++){
        //     cout<<x[i]<<" "<<y[i]<<'\n';
        // }
        
        for(int k = 0;k<n;k++){
            if(x[k]==1 && y[k] < min2 ){
                if(y[k]>max1){
                    max1=y[k];
                }
            }
            else if(x[k]==2 && y[k] > max1){
                if(min2>y[k]){
                    min2=y[k];
                }
            }else if(x[k] == 3){
                no[i]=y[k];
                //cout<<y[k]<<"hi"<<'\n';
                i++;
            }
            else {
                //cout<<"abe yar "<<x[k]<<" "<<y[k]<<" "<<t<<'\n';
            }
        }
        
        
        int ans = 0 ;
        i--;
        int f = i;
        while(i>=0){
            if(no[i] >= max1 && no[i] <= min2){
                cout<<no[i]<<"y ";
                ans--;
            }
            //cout<<no[i]<<"n"<<'\n';

            i--;
        }
        if(max1>=min2){
            cout<<"0"<<'\n';
            continue;
        }
        
        ans += min2-max1 +1;
        
        cout<<ans<<" "<<max1<<" "<<min2<<'\n';
        for(;f>=0;f--){
            //cout<<no[f]<<" ";
        }
        //cout<<'\n';
    }

    return 0;
}
