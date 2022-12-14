
int _putchar(char c);

int print_alphabet(void)
{
  
  char letter;
  
  char ln = '\n';
  
  for (letter = 'a' ; letter <= 'z' ; letter++)
    
    {
      
      _putchar(letter);
      
      if (letter == 'z')
	
	{
	  
	  _putchar(ln);
	  
	}
      
    }
  
  return (0);
  
}
