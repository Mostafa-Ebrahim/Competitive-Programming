#include <bits/stdc++.h>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(){
    int n, k; 
    double total=0;
    cin >> n >> k;
    double arr1[n], arr2[n];

    for(int i=1; i<=n; i++){  
        cin >> arr1[i] >> arr2[i];
    }
    
    for(int m=2; m<=n; m++){
        total += distance(arr1[m],arr2[m],arr1[m-1],arr2[m-1])/50*k;
    }

    printf("%.9Lf",total);
}