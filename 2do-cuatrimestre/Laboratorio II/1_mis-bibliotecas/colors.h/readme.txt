- 	colors.h es una biblioteca con la que podrás darle color al texto que se imprime en la consola/terminal.
	Compatible con Windows y Linux, no requiere bibliotecas adicionales.
	RECORDÁ:
	+ include "src/colors.h" -> en el archivo .c
	+ compilar "src/colors.c" -> con los demás archivos .c

-	colors.h is a library for bring colors to the terminal text.
	It's compatible with both Windows and Linux. No extra libraries are required.
	REMEMBER: 
	+ include "src/colors.h" -> in the .c file
	+ compile "src/colors.c" -> with all .c files
	
***************************************************************************************
------	USO / USAGE ------
int main()
{
	c_boldGreen(); // The text color is (bold) green after this line
	printf("Hello world");
	c_green(); // The text color is green after this line
	printf("I'm glad you're programming in C c:");
	c_reset(); // This function reset text color to default
	printf("Cheers!");
}
***************************************************************************************
------	¿CÓMO COMPILAR? / HOW TO COMPILE? ------
Linux (any terminal): gcc main.c src/colors.c -o program.o && ./program.o
Windows (cmd, NOT PowerShell): gcc main.c src/colors.c -o program.exe && program.exe