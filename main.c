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
    printf("\\>");
    scanf(" %s", &ch);

    if (ch == 100){ //printf for dir command (d)
    printf("ERROR: NO FILES\n");
    }
    if (ch == 68){ //printf for dir command (D)
    printf("ERROR: NO FILES\n");
    }

    if (ch == 63){ //printf for help command (?)
        printf("? = HELP \nD = FILE VIEW\nC = CREATE FILE\nX = EXIT\n");
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
    if (ch == 'x'){//print statment for exit (X)
                return 0x002;
    }

{//if statements for Y/N questions (file create menu)
    if (create == '1'){//file create statement 1 (TXT)
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
        ctype = '1';
    }
        if (create == '2'){//file create statement 2 (C)
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
                ctype = '2';
    }
        if (create == '3'){//file create statement 3 (C++)

        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
                ctype = '3';
    }

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
if (ctype == '1'){ //.TXT make script
    fopen("text.txt","a+");


}
if (ctype == '1'){ //.C make script
    fopen("text.c","a+");

}
if (ctype == '1'){ //.CPP make script
    fopen("text.cpp","a+");

}

}
return 0x001;
}
