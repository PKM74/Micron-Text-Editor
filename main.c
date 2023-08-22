#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{

    for(;;){
    srand(time(NULL));
    char ch; //cmd lines input
    char create; //char store for the create command
        char yn; //char store for y/n inputs
    printf("/>");
    scanf(" %s", &ch);

    if (ch == 100){ //printf for dir command (d)
    printf("ERROR: NO FILES\n");
    }
    if (ch == 68){ //printf for dir command (D)
    printf("ERROR: NO FILES\n");
    }
    if (ch == 63){ //printf for help command (?)
        printf("? = HELP \nD = FILE VIEW\nC = Create File\n");
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
{//if statements for Y/N questions
    if (create == '1'){//file create statement 1
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
    }
        if (create == '2'){//file create statement 2
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
    }
        if (create == '3'){//file create statement 3
        printf("Are You Sure?\n");
        printf("Y or N:");
        scanf("%s", &yn);
    }
    if (yn == 'y'){
    printf("File Created\n");
    }
        if (yn == 'Y'){
    printf("File Created\n");
    }
        if (yn == 'N'){
    printf("File Create Cancelled\n");
    }
            if (yn == 'n'){
    printf("File Create Cancelled\n");
    }
}
}
    return 0;
}
