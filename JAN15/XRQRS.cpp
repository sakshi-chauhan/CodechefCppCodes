#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

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
    
    int Q,x;
    long long int M,L,R,N,count,max,y,i;
    std::vector<int> vec;
    std::cin>>M;
    
    while( M-- ){
                  
           std::cin>>Q;
           count = 0;
           max = 0;
           
           if( Q == 0 ){
               
               std::cin>>x;
               vec.push_back(x);
               
           }
           
           else if( Q == 1 ){
                
                std::cin>>L>>R>>x;
                
                for( i = L-1 ; i < R ; i++ ){
                     
                     y = x^vec[i];
                     
                     if( y > max )
                         max = vec[i];              
                     
                }     
                std::cout<<max<<"\n";
                
           }
           
           else if( Q == 2 ){
                
                std::cin>>x;
                for( i = vec.size()-1 ; i >= vec.size()-x ; i-- )
                          vec.erase(vec.begin() + i);
                
           }
           
           else if( Q == 3 ){
                
                std::cin>>L>>R>>x;    
                
                for( i = L-1 ; i < R ; i++ ){
                     
                     if( vec[i] <= x )
                         count++;
                              
                }
                
                std::cout<<count<<"\n";
           }
           
           else if( Q == 4 ){
                //int L,R,x;
                std::cin>>L>>R>>x;
                std::cout<<kthSmallest(vec,L-1,R-1,x)<<"\n";
           }
    }
    
    
    return 0;
        
}
