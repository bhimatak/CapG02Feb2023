Vi Editor – Assignments

1.vi prog1.c

2.#include <stdio.h>
	int main()
	{
 		int n;
		printf(“\n this program to print any one of delhi mumbai chennai Mumbai as output:”);
	
		printf(“Enter a number between 1 to 4:”);
		scanf(“%d”,&n);

		switch(n):
		{
		case 1:
			printf(“delhi”);
			break;
		case 2:
			printf(“mumbai”);
			break;
		case 3:
			printf(“chennai”);
			break;
		case 4:
			printf(“Mumbai”);
			break;
		default:
			break;	
	}
	return 0;
	}
  
3. :w

4. gg – to move to beginning of the file
   shift + g – to move to end of the file 

5. 2dd – to delete two lines
   p – to paste it 

6. 2dd – to delete two lines
   p – to paste it 

7. j – to join 2 lines position the cursor on first line and press j

8. O – to insert a new line before the first line, point the cursor in first line a press O

9. p – to paste a yanked or copied buffer press p after pointing the cursor at starting point of current line

10. /delhi – to search for a string ‘delhi’

11. :s/delhi/Mumbai

12. :s/delhi/Mumbai/g

13. :%s/delhi/mumbai/g

14. :13,37s/delhi/Mumbai/g

15. “u” to undo 

16. :13,37s/delhi/Mumbai/

17. u, (ctrl-r), u

18. :%s/delhi/Mumbai/gc

19. “?word” with ‘N’ key to continue looping through all matches.

20. “/word” with ‘N’ key to continue looping through all matches.

21. Move cursor to first line we want to join and enter ‘J’ in command mode to join current line with the next line.

22. :set number & :set nonumber

23. :set ignorecase

24. Move cursor to first line we want to delete and enter command “4dd” to delete 4 lines and Move the cursor to location where we want to paste it and press “p” to paste it.

25. “d” , “d$” or “nd” – where n is number of characters

26. “dw” command to delete a current word.
