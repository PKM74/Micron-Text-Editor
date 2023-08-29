#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    for(;;){
    srand(time(NULL));
    char ch; //cmd lines input
    char create; //char store for the create command
        char yn; //char store for y/n inputs
        char ctype;
        char otype;
    printf("\\>");
    scanf(" %s", &ch);

    if (ch == 100){ //printf for dir command (d)
    printf("ERROR: NO FILES\n");
    }
    if (ch == 68){ //printf for dir command (D)
    printf("ERROR: NO FILES\n");
    }

    if (ch == 63){ //printf for help command (?)
        printf("? = HELP \nD = FILE VIEW\nC = CREATE FILE\nX = EXIT\nO = OPEN\n");
    }

    if (ch == 'c'){//printf for create command (c)
        printf("Please Select Type\n1: TXT file\n2: C source file\n3: C++ source file\n");
        printf("Type:");
        scanf("%s", &create);
    }
    if (ch == 'C'){//printf for create command (C)
        printf("Please Select Type\n1: TXT file\n2: C source file\n3: C++ source file\n");
        printf("Type:");
        scanf("%s", &create);
    }

    if (ch == 'x'){//print statment for exit (x)
                return 0x002;
    }
    if (ch == 'X'){//print statment for exit (X)
                return 0x002;
    }

    if (ch == 'o'){//pint statment for open (o)
    printf("Please Enter File Type\n\n1: .TXT (Text File)\n2: .C (C Source File)\n3: .CPP (C++ Source File)\nType:");
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
            printf("File Opened Write the data in the Command Line press I to exit the editor your old data should also appear");
            fscanf(".\\files\text.txt" "a" "f")
        }
    }
    }

{//if statements for Y/N questions (file create menu)
    if (create == '1'){//file create statement 1 (TXT)
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
        ctype = '1';
          {//File Create Stuff
    if (yn == 'y'){
    printf("File Created\n");
    yn = '\0';

    }
        if (yn == 'Y'){
    printf("File Created\n");
    yn = '\0';

    }
    if (yn == 'd'){
        printf("%c", ctype);
        printf("\n");
    }
}
    { //File Creation Cancel Stuff
        if (yn == 'N'){
    printf("File Create Cancelled\n");
    yn = '\0';
    }
            if (yn == 'n'){
    printf("File Create Cancelled\n");
    yn = '\0';
    }
    }
    }
        if (create == '2'){//file create statement 2 (C)
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
                ctype = '2';
                  {//File Create Stuff
    if (yn == 'y'){
    printf("File Created\n");
    yn = '\0';

    }
        if (yn == 'Y'){
    printf("File Created\n");
    yn = '\0';

    }
    if (yn == 'd'){
        printf("%c", ctype);
        printf("\n");
    }
}
    { //File Creation Cancel Stuff
        if (yn == 'N'){
    printf("File Create Cancelled\n");
    yn = '\0';
    }
            if (yn == 'n'){
    printf("File Create Cancelled\n");
    yn = '\0';
    }
    }
    }
        if (create == '3'){//file create statement 3 (C++)

        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
                ctype = '3';
                  {//File Create Stuff
    if (yn == 'y'){
    printf("File Created\n");
    yn = '\0';

    }
        if (yn == 'Y'){
    printf("File Created\n");
    yn = '\0';

    }
    if (yn == 'd'){
        printf("%c", ctype);
        printf("\n");
    }
}
    { //File Creation Cancel Stuff
        if (yn == 'N'){
    printf("File Create Cancelled\n");
    yn = '\0';
    }
            if (yn == 'n'){
    printf("File Create Cancelled\n");
    yn = '\0';
    }
    }

    }


    }
if (ctype == '1'){ //.TXT make script and auto open
    fopen("text.txt","a+");
    if (ctype == '1'){//file open statement 1 (TXT)
        printf("Would you Like to open the file?\n");
        printf("Y or N:");
        scanf("%s", &yn);
        ctype = '0';
        if (yn == 'y'){
            (yn = '0');
        }
    }

}
if (ctype == '2'){ //.C make script and auto open
    fopen("text.c","a+");

}
if (ctype == '3'){ //.CPP make script and auto open
    fopen("text.cpp","a+");

}

}
return 0x001;
}
