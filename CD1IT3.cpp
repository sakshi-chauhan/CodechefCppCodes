#include<iostream>
#include<algorithm>
using namespace std; 

long long int h[1005];
/*bool pairs( long long int* arr, int arr_size, long long int sum ){
  int i, count = 0;
  long long int temp;
  bool binMap[1005] = {0}; 
 
  for(i = 0; i < arr_size; i++){
        
    temp = sum - arr[i];
    if(temp >= 0 && binMap[temp] == 1){
      return true;
    }
    binMap[arr[i]] = 1;
  }
  return false;
}*/
bool pairs(long long int* A, int arr_size,long long int sum){
    int l, r;
 
    /* Sort the elements */
    sort( A, A+arr_size);
 
    /* Now look for the two candidates in the sorted 
       array*/
    l = 0;
    r = arr_size-1; 
    while(l < r)
    {
         if(A[l] + A[r] == sum)
              return 1; 
         else if(A[l] + A[r] < sum)
              l++;
         else // A[i] + A[j] > sum
              r--;
    }    
    return 0;
}
int main(){
    
    int N;
    long long int K;
    
    cin>>N>>K;
    
    for( int i = 0 ; i < N ; i++ )
         cin>>h[i];
    
    if( pairs(h,N,K) )
        cout<<"Yes";
    else
        cout<<"No";    
    
    return 0;    
}
