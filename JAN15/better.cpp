#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
vector<int> arr; 

int partition(vector<int> arr, int l, int r, int k);

int findMedian(vector<int> arr , int n , int j){
	
    sort(arr.begin()+j, arr.begin()+j+n); 
    int k = j+n/2;
    return arr[k];   
}
 
int kthSmallest(vector<int> arr, int l, int r, int k){

    if (k > 0 && k <= r - l + 1){
    	
        int n = r-l+1; 
        
        int i;
        std::vector<int> median;
        int j;
        for (i=0; i<n/5; i++){
        
        	j = l + i*5;
            median.push_back(findMedian(arr, 5 , j));
        }
        if (i*5 < n) {
        		
        	j = l + i*5;
            median.push_back(findMedian(arr, n%5 , j));
            i++;
        }
 
       
        int medOfMed = (i == 1)? median[i-1]:kthSmallest(median, 0, i-1, i/2);
        
        int pos = partition(arr, l, r, medOfMed);
        
 		sort(arr.begin()+l, arr.begin()+(r+1));		
 
        if (pos-l == k-1){
       
            return arr[pos];
        }
        if (pos-l > k-1)  
            return kthSmallest(arr, l, pos-1, k);
 
        return kthSmallest(arr, pos+1, r, k-pos+l-1);
    }
 
    return INT_MAX;
}

int partition(vector<int> arr, int l, int r, int x){
    
    int i,temp;
    sort(arr.begin()+l, arr.begin()+(r+1)); 
    
    for (i=l; i<r; i++)
        if (arr[i] == x)
           break;
    
    temp = arr[i];
    arr[i] = arr[r];
    arr[r] = temp;
 
    i = l;
    for (int j = l; j <= r - 1; j++){
        if (arr[j] <= x){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    
    temp = arr[i];
    arr[i] = arr[r];
    arr[r] = temp;
    
    return i;
}
 
int main(){
   
    arr.push_back(12);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(19);
    arr.push_back(26);
    
    
    std::cout<<kthSmallest(arr,0,0,1);
    
    return 0;
}
