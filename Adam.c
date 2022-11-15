#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int count1;
int count2;

int main()
{


    char value[5];
    printf("How many Test cases do you want to take: ");
    scanf("%s", &value);
    printf("\n");
    int check= atoi(value);
    Determine(check);

}

int Check(char info[])
{
    int counting=0;
    for(int p=0; p<strlen(info); p++)
    {
        if(info[p]!='D')
        {
            counting++;
        }
    }
    return counting;

}

void Determine(int num)
{
    char container[100][100];
    char text[50];
    int counter[50];
    for(int i=0;i<num;i++)
    {
        printf("Enter the string made up of 'U' and 'D': ");
        scanf("%s",&container[i]);
        printf("\n");
        for(int z=0;z<strlen(container[i]); z++){
            container[i][z]= toupper(container[i][z]);
        }


    }


    for(int j=0;j<num;j++)
    {
        int point= Check(container[j]);
        if(point!=0)
        {
            counter[j]=point;


        }


        for(int k=0; k<strlen(container[j]);k++)
        {
            if(container[j][k]!='D')
            {
                count1++;




                continue;

            }

            else
            {
                counter[j]=count1;
                count1=0;
                break;

            }

        }

    }

    for(int y=0; y<num;y++)
    {
        printf("%s     %d\n", container[y], counter[y]);

    }



}
