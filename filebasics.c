// C Program to create a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file pointer
    FILE* fptr;
char string[10];

    // creating file using fopen() access mode "w"
    fptr = fopen("file.txt", "w");

    // checking if the file is created
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    else {
        printf("The file is created Successfully.");
	fprintf(fptr, "%s %s %s %d", "We", "are", "in", 2024);
fputc('a', fptr);
fputs("AIE - D section", fptr);
    }



fclose(fptr);

 fptr = fopen("file.txt", "w");
if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
else {
//printf("New file");
 fprintf(fptr,"The file is newly created.");


fclose(fptr);

fptr = fopen("file.txt", "r");
if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
printf("\nString is :");
while(!feof(fptr))
{
fgets(string, 10, fptr);
printf("%s",string);
}
}


  
    return 0;
}