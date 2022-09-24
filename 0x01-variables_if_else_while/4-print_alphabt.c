#include <stdio.h>                                                                                                                                       
                                                                                                                                                        

/*Printing alphabet in lower case then in upper case */                                                                                                  

int main(void)                                                                                                                                           

{                                                                                                                                                        
        int ch;                                                                                                                                          

        for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
