#include<iostream>
#include<algorithm>

struct seq{
  
  std::string str;     
  int inv_count;
       
};
// Sort according to inversion count
bool cmp( seq a , seq b ){
     
     return a.inv_count < b.inv_count;
     
}
 
//Count Inversions using DP
int countinv( std::string str,int n){
    
    int dp[4][n];
    int count_A , count_C , count_G , count_T ;
    count_A = count_C = count_G = count_T = 0;
    
    //Number of occurences of each string
    for(int i = 0 ; i < n ; i++){
            
            if( str[i] == 'A' )        
                count_A++;
            else if( str[i] == 'C' )
                count_C++;
            else if( str[i] == 'G')
                count_G++;
            else
                count_T++;              
    }
    
    //Keep track of the first element
    if( str[0] == 'A')
        dp[0][0] = count_A-1;
    else
        dp[0][0] = count_A;    
    if( str[0] == 'C')
        dp[1][0] = count_C-1;
    else
        dp[1][0] = count_C;
    if( str[0] == 'G')        
        dp[2][0] = count_G-1;
    else
        dp[2][0] = count_G;
    if( str[0] == 'T')
        dp[3][0] = count_T-1;
    else
        dp[3][0] = count_T;    
    
    for( int j = 1 ; j < n ; j++ ){
         
         if( str[j] == 'A' )
             dp[0][j] = dp[0][j-1] - 1; 
         else
             dp[0][j] = dp[0][j-1]; 
         
         if( str[j] == 'C' )
             dp[1][j] = dp[1][j-1] - 1; 
         else
             dp[1][j] = dp[1][j-1];            
             
         if( str[j] == 'G' )
             dp[2][j] = dp[2][j-1] - 1; 
         else
             dp[2][j] = dp[2][j-1];     
             
         if( str[j] == 'T' )
             dp[3][j] = dp[3][j-1] - 1; 
         else
             dp[3][j] = dp[3][j-1];     
         
    }    
    
    /*for( int i = 0; i < 4 ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
             
             std::cout<<dp[i][j]<<" ";         
             
        }
        std::cout<<"\n";
    }*/
    
        
    int m,k,count = 0;
    
    if( str[0] == 'C' ){
        count += dp[0][0];
        m = 1;
    }
    else if( str[0] == 'G' ){    
        count += dp[0][0] + dp[1][0]; 
        m = 2;
    }
    else if( str[0] == 'T'){
        count += dp[0][0] + dp[1][0] + dp[2][0];
        m = 3;
    }
    
    for( int i = 1; i < 4 ; i++ ){
        //if( i != m ){ 
            for( int j = 1 ; j < n ; j++ ){
                 
                 if( dp[i][j] != dp[i][j-1] ){
                     //std::cout<<i-1<<" "<<j<<"\n";
                     k = i;
                     
                     while( k ){
                            
                            count += dp[k-1][j];     
                            k--;
                     }
                    
                 }
            }
        //}
    }
    //std::cout<<"Inversions="<<count;
    return count;
}

int main(){
    
    int T,m,n;
    std::string s;
    struct seq arr[105];
    
    std::cin>>T;
    
    
    while( T-- ){
           
           //getline(std::cin,s);       
           std::cin>>n>>m;
           
           for( int i = 0 ; i < m ; i++ ){
                  
                  std::cin>>arr[i].str;
                  arr[i].inv_count = countinv(arr[i].str , n);
                  //std::cout<<arr[i].inv_count<<"\n";       
           }
           std::stable_sort(arr,arr+m,cmp);
           for( int i = 0 ; i < m ; i++ )
                std::cout<<arr[i].str<<"\n";
    }
    
    return 0;    
    
}
