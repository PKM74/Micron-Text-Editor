#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Micron Text Editor Version 0.1.1a\nMade By PKM74 on Github 2023\n\nPress ? for Help\n\n");

    for(;;){
    srand(time(NULL));
    char ch; //cmd lines input
    char create; //char store for the create command
        char yn; //char store for y/n inputs
        char ctype;
        char otype;
        char textmode;
        char filename[50];
    printf("\\>");
    scanf(" %s", &ch);

    if (ch == 'd'){ //printf for dir command (d)
    printf("ERROR: NO FILES\n");
    }
    if (ch == 'D'){ //printf for dir command (D)
    printf("ERROR: NO FILES\n");
    }

    if (ch == '?'){ //printf for help command (?)
        printf("? = HELP \nD = FILE VIEW\nC = CREATE FILE\nX = EXIT\nO = OPEN\nV = VERSION\n` = EXIT TEXT MODE\n");
    }

    if (ch == 'c'){//printf for create command (c)
    printf("Enter File Name:");
    scanf("%s", &filename);
    sprintf(filename, "%c.txt");
    fopen( filename, "a+");
    }
    if (ch == 'C'){//printf for create command (C)
    printf("Enter File Name:\n");
    scanf("%s", &filename);
    }

    if (ch == 'x'){//print statment for exit (x)
                return 0x002;
    }
    if (ch == 'X'){//print statment for exit (X)
                return 0x002;
    }

    if (ch == 'o'){//pint statment for open (o)
    printf("Please Enter File Type\n\n1: .TXT (Text File)\n2: .C (C Source File)\n3: .CPP (C++ Source File)\n4: Custom File\nType:");
    scanf("%s", &otype);
    printf("\n");
     if (otype == '1'){//file open statement 1 (TXT)
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
        otype = '0';
        if (yn == 'y'){
            (yn = '0');
            fopen(".\\files\text.txt", "a+");
            printf("File Opened Write the data in the Command Line press I to exit the editor\n");
            textmode = '1';
        }
    }
    }

    if (ch == 'V'){//Version command (V)
    printf("Micron Text Editor Version 0.1.1a\nMade By PKM74 on Github 2023\n\n");
    }
    if (ch == 'v'){//Version command (v)
    printf("Micron Text Editor Version 0.1.1a\nMade By PKM74 on Github 2023\n\n");
    }


if (textmode == '1'){//texmode Exit
    if (ch == '`'){// I
        printf("Exiting");
        sprintf(filename, "%c");
        fclose(filename);
    }
}

}
return 0x001;
}
