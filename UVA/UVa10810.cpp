//UVa 10810 Ultra Quicksort using merge sort

#include<iostream>
#include<cstdlib>
#include<cmath>

int Merge( int* A , int p , int q , int r ){
     
     int n1,n2;
     int* l1;
     int* l2;
     n1 = q - p + 1;
     n2 = r - q ;
     
     l1 = (int*)malloc( sizeof(int)*(n1+1) );
     l2 = (int*)malloc( sizeof(int)*(n2+1) );
     
     for( int i = 0 ; i < n1 ; i++ )
          l1[i] = A[ p + i ];
     
     for( int i = 0 ; i < n2 ; i++ )
          l2[i] = A[ q + i + 1 ]; 
          
     l1[n1] = INT_MAX; 
     l2[n2] = INT_MAX;
     
     int i = 0 , j = 0;
     int inv = 0;
     bool counted = false;
     
     for(int k = p ; k <=r ; k++ ){
             
             //if( l1[k] > l2[k] )
                 //count_inv++; 
            if( counted == false && l2[j] < l1[i] ){
                inv += n1 - i;    
                counted = true;
            }
            if( l1[i] <= l2[j] ){
                
                    A[k] = l1[i];
                    i++;                       
                    
             }      
               
             else{
                  
                    A[k] = l2[j];
                    j++;     
                    counted = false;
             }          
             
     } 
     return inv;        
}


int MergeSort( int* A , int p , int r ){
     
     int q;
     int count_inv = 0;
     
     if( p < r ){
         
         q = ( p + r )/2;    
         count_inv = count_inv + MergeSort(A,p,q);    
         count_inv = count_inv + MergeSort(A,q+1,r);
         count_inv = count_inv + Merge(A,p,q,r);
     }
     return count_inv;
}

int main(){
    
    int n;
    
    std::cout<<"Enter the number of elements : ";
    std::cin>>n;
    
    int *a = new int[n];
    
    std::cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
         std::cin>>a[i];           
         
    //MergeSort(a,0,n-1);
    
    /*std::cout<<"The sorted sequence is : ";
    for(int i=0;i<n;i++)
            std::cout<<a[i]<<" ";
 
    std::cout<<count_inv<<"\n";*/        
    std::cout<<MergeSort(a,0,n-1);
    return 0;
        
}
