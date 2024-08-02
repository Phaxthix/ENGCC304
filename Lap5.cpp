#include <stdio.h>
int main() {
   
    int score = 0 ; 
    printf( "enter score : " ) ;

    if(scanf( "%d", &score ) != 1 ) {
        printf("Please enter number only.\n") ;
        return 1 ;
    }
    
    
    if(score >= 80 ) {
         printf( "A !\n " ) ;
    }     
     else if(score >= 75 && score < 80 ) {
         printf( "B+ !\n" ) ; 
     }
     else if(score >= 75 && score < 70 ) {
         printf( "B !\n" ) ;
     }
     else if(score >= 70 && score < 65 ) {
         printf( "C+ !\n" ) ;
     }
     else if(score >= 65 && score < 60 ) {
         printf( "C !\n" ) ;
     }
     else if(score >= 60 && score < 55 ) {
         printf( "D+ !\n" ) ;
     } 
     else if(score >= 55 && score < 50 ) {
         printf( "D !\n" ) ;
     }
     else if( score <=50 ) {
         printf( "F !\n" ) ;
     }
   
   
    return 0 ;
}//end main function
