#include <iostream>
using namespace std;

int main(){
    cout<<"m = ";
    int m,n;
    cin >>m;
    cout<<"n = ";
    cin>>n;
    int nums1[m+n], nums2[n];
    cout<<"input array 1"<<endl;
    for(int i = 0; i < m; i++){
        cin>>nums1[i];
    }
    for(int i = m; i < (m+n); i++){
        nums1[i] = 0;
    }
    cout<<"input array 2"<<endl;
    for(int i = 0; i < n; i++){
        cin>>nums2[i];
    }

    //printing
    cout<<endl;
    cout<<"array 1 = [";
    for(int i = 0; i < (m+n); i++){
        cout<<nums1[i]<<", ";
    }
    cout<<"]"<<endl;
    cout<<"array 2 = [";
    for(int i = 0; i < n; i++){
        cout<<nums2[i]<<", ";
    }
    cout<<"]"<<endl;

    //merging
    int j = 0;
    for(int i = m; i < (m+n); i++){
        nums1[i] = nums2[j];
        j++;
    }

    //sorting
    for(int i = 0; i < (m+n); i++){
        for(int k = 0; k < (m+n); k++){
            if(nums1[k]>nums1[k+1]){
                int temp = nums1[k];
                nums1[k]=nums1[k+1];
                nums1[k+1]=temp;
            }
        }
    }
    //output
    cout<<"output : [";
    for(int i = 0; i < (m+n); i++){
        cout<<nums1[i]<<", ";
    }
    cout<<" ]"<<endl;

    return 0;
}
