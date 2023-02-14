// file management in c 
// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     //fp = fopen("C:/Users/SQW014/Desktop/lib/skill.text","+w");
//     fp = fopen("pqr.txt","w+");
//     fprintf(fp,"Welcome to skill qode -Decode your skill here.....\n");
//      fputs("you are entering to learning C language now.....\n",fp);
//     fprintf(fp,"Thanks for Visiting....\n");
//     fclose(fp);
// }


/*
r   open a text file to read mode
w   open a text file to write mode
a   open a text file to append mode
EOF ==End of file
*/ 


#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[250];

    fp = fopen("pqr.txt","r");
    while (fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
    //printf("\n\n%s",buff);
}