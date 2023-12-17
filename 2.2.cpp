#include <stdio.h>
#include <string.h>

//char str2[ 50 ] ;
char* reverse( char str1[] ) ;

int main() {
 char text[ 50 ] = "I Love You" ;
 char *out ;
 out = reverse( text ) ;
 printf("str1 = %s\nstr2 = %s\n", text, out);

}//end function

char* reverse( char str1[] ) {
	int i, j = 0 ;
	int length = strlen( str1 ) ;
	char *str2 = new char[length] ;
	for( i = length - 1 ; i >= 0 ; i-- ) {
		str2[j] = str1[i] ;
		j++ ;
	}
	str2[j] = '\0';
	return str2;
}
