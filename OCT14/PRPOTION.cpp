#include<iostream>

int main(){
    
    int T,R,G,B,M;
    int maxR,maxG,maxB;
    int r[105],g[105],b[105];
    int i;
    char max;
    
    std::cin>>T;
    
    while( T-- ){
            
            maxR=maxG=maxB=-1;
            
            std::cin>>R>>G>>B>>M;
            
            for( i=0 ; i<R ; i++ ){
                 std::cin>>r[i];
                 if( maxR < r[i] )
                     maxR = r[i];     
            }
            
            for( i=0 ; i<G ; i++ ){
                 std::cin>>g[i];
                 if( maxG < g[i] )
                     maxG = g[i];     
            }
            
            for( i=0 ; i<B ; i++ ){
                 std::cin>>b[i];
                 if( maxB < b[i] )
                     maxB = b[i];     
            }
            
            while( M-- ){
                   if( maxR > maxG ){
                       if( maxR > maxB )    
                           max = 'R';
                       else
                           max = 'B';    
                   }       
                   else{
                        if( maxG > maxB )
                            max = 'G';
                        else
                            max = 'B';         
                   }
                   
                   if( max == 'R' ){
                       for( i=0 ; i<R ; i++ )
                            r[i]/=2;
                       maxR/=2;         
                   }
                   else if( max == 'G' ){
                       for( i=0 ; i<G ; i++ )
                            g[i]/=2;
                       maxG/=2;         
                   }
                   else{
                       for( i=0 ; i<B ; i++ )
                            b[i]/=2;
                       maxB/=2;         
                   }
            }
            maxR = r[0];
            maxG = g[0];
            maxB = b[0];
            
            for( i=1 ; i<R ; i++ ){
                 if( r[i] > maxR )
                     maxR = r[i];     
            }
            
            for( i=1 ; i<G ; i++ ){
                 if( g[i] > maxG )
                     maxG = g[i];     
            }
            
            for( i=1 ; i<B ; i++ ){
                 if( b[i] > maxB )
                     maxB = b[i];     
            }
            
            if( maxR > maxG ){
                       if( maxR > maxB )    
                           max = 'R';
                       else
                           max = 'B';    
            }       
            else{
                        if( maxG > maxB )
                            max = 'G';
                        else
                            max = 'B';         
            }
            if( max == 'R' )
                std::cout<<maxR<<'\n';
            else if( max == 'G' )
                std::cout<<maxG<<'\n';
            else
                std::cout<<maxB<<'\n';         
    }
    
    return 0;    
    
}
