#include <stdio.h>
int main(){
	int a1,a2,a3,a4;
	int n1,n2,nn1,nn2;
	int maxn1,maxn2,maxn3,maxn4,topmax2;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4); 
// 	15 14 12 11
	
	(a1>a2) ? n1=a1  : n2=a1  ;
	           //15         
	            
	(a1<a2) ? n1=a2  : n2=a2  ;
    	               // 14
    
    (a3>a4) ? nn1=a3  : nn2=a3  ;
                // 12          
    
    (a3<a4) ? nn1=a4  : nn2=a4  ;
                            // 11
                            
                    (n1>nn1) ? maxn1=n1  : maxn2=n1  ;
                                    // 15
                    (n1<nn1) ? maxn1=nn1  : maxn2=nn1  ;
                                                // 12
                                                
                                                
                    (n2>nn2) ?  maxn3=n2    : maxn4=n2 ;       
                                    // 14                    
                    (n2<nn2) ?  maxn3=nn2    : maxn4=nn2 ;  
                                                // 11
                                                
                                                             (maxn2>maxn3) ?  topmax2=maxn2    : topmax2=maxn3 ;  
    	                                                       // 12    14                            14                             
    	                
    	                
                                                                	printf("%d",topmax2);
	
	
	return 0;

	 
	 
	
}
