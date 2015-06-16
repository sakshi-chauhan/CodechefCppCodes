#include<iostream>

bool isSubsetSum(int set[], int n, int sum){
    
    bool subset[sum+1][n+1];

    for (int i = 0; i <= n; i++)
      subset[0][i] = true;

    
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;

    
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
       }
     }

    /* // uncomment this code to print table
     for (int i = 0; i <= sum; i++)
     {
       for (int j = 0; j <= n; j++)
          printf ("%4d", subset[i][j]);
       printf("\n");
     } */

     return subset[sum][n];
}

int main(){
    
    int t,n,c,count;
    int sum1,res,sum,k ,arr[105];
    long long int sub,temp,num,min;
    int a[500];
    
    std::cin>>t;
    
    while( t-- ){
           
           std::cin>>n>>c;
           sum = 0;
           
           for( int i = 0 ; i < n ; i++ ){
           
                std::cin>>arr[i];       
                sum += arr[i];
                
           }
           
            
           if( sum % c == 0 ){
                
                    std::cout<<"YES\n\n";    
                    for(int i = 0 ; i < n ; i++ )
                            std::cout<<arr[i]<<" ";
                
                std::cout<<'\n';
           }
           
               
           else{
                
                if( sum - c > c )
                    std::cout<<"NO\n"; 
                
                else if( isSubsetSum(arr,n,c) && isSubsetSum(arr,n, (sum-c)) ){
                    std::cout<<"YES\n";
                    
                }
                
                else
                    std::cout<<"NO\n";    
                
                
           }
    }
    
    return 0;
        
}
