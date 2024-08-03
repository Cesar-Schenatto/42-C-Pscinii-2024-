#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
	{
	 int i;
 
      i = 0;
      while (dest[i])
      {
          dest[i] = src[i]; 
				  i++;
      }
      dest[i] = src[i];      
		return (dest); 
}	
int  main(void){
	

	char str1[] = "like a stone";
	char str2[] = "black";
	printf("%s  %s ", str1, str2);
	ft_strcpy(str1, str2);
	printf("%s %s ", str1, str2);
	return 0;
}

//N0t finished yet. 