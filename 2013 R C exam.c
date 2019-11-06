#include <stdio.h>
#include <stdlib.h>


/* structured type definition */
typedef struct h_type_tag
{
    int id;
    char name[20];
    float waste; //kg
    float water; //m3
    float surface; // sqm
    float tax; // euro
}  house_type;

/* declarations */

/* function that reads data from a file, stores it in an array and returns the number of records read*/
int read_records (char* file_name, house_type houses[]);

/* function that computes the tax for each house given the array with houses info and stores the results in the same array */
void compute_tax (house_type houses[], int size);

/* function that writes data taken from the array into a file */
void write_records (char* file_name, house_type houses[], int size);

/* function that prints the info on houses to the screen */
void print_results (house_type houses[], int size);

int main()
{
    house_type houses[5000];
    int ans = 1;
    int norecs = 0;
    char filename[20];

    while (ans != 5)
    {
        printf("1 - read from file\n");
        printf("2 - compute tax\n");
        printf("3 - print screen\n");
        printf("4 - write in file\n");
        printf("5 - exit\n");

        scanf("%d", &ans);

        switch(ans)
        {
            case 1: norecs = read_records ("input.txt", houses);
                    printf("%d records have been read\n", norecs);
                    break;
            case 2: compute_tax (houses, norecs);
                    printf("Compute Tax has been run\n");
                    break;
            case 3: print_results (houses, norecs);
                    printf("Info was printed\n");
                    break;
            case 4: printf("Please input a file name: \n");
                    scanf("%s", filename);
                    write_records (filename, houses, norecs);
                    printf("Info was written in the file %s\n", filename);
                    break;
            case 5: printf("Byeeeeee!\n");
                    break;
        }
    }

    printf("End of main() function!\n");

    return 0;
}

/* function that reads data from a file, stores it in an array and returns the number of records read*/
int read_records (char* file_name, house_type houses[])
{
    FILE* fp;
 int norecs = 0;
    char ch;

 /* open file */
 fp = fopen(file_name, "r");

 while(!feof(fp))
    {
 /* read on record from file */
  fscanf(fp, "%d%c%s%c%f%c%f%c%f%c", &houses[norecs].id, &ch,
                                houses[norecs].name, &ch,
                               &houses[norecs].waste, &ch,
                               &houses[norecs].water, &ch,
                               &houses[norecs].surface, &ch);

    /* increase the number of records read */
    norecs++;
    }

    /* close file */
    fclose(fp);

    return norecs;
}

/* function that computes the tax for each house given the array with houses info and stores the results in the same array */
void compute_tax (house_type houses[], int size)
{
 int i;

    /* parse grades and compute the average */
 for (i = 0; i < size; i++)
 {
     if (houses[i].surface >= 200)
         houses[i].tax = houses[i].surface + 0.5 * houses[i].waste
                         + 3 * houses[i].water;
    else
         houses[i].tax = 100 + houses[i].waste + houses[i].water;
 }
}

/* function that writes data taken from the array into a file */
void write_records (char* file_name, house_type houses[], int size)
{
    FILE* fp;
    int i;

 /* open file */
 fp = fopen(file_name, "w");
 for (i = 0; i < size; i++)
 /* write the record to the file */
 {
     fprintf(fp, "%d %s %f %f %f %f\n",
            houses[i].id, houses[i].name,
            houses[i].waste, houses[i].water,
            houses[i].surface, houses[i].tax);
 }
    /* flush content into file */
    fflush(fp);

    /* close file */
    fclose(fp);
}

/* function that prints the info on houses to the screen */
void print_results (house_type houses[], int size)
{
    int i;
    //
    printf("| ID |        Name        | Waste | Water |Surface| Tax |\n");
    //
    /* parse data and print grades and average */
    for (i = 0; i < size; i++)
    {
     printf("|%4d|%20s|%7.2f|%7.2f|%7.2f|%5.2f|\n",
            houses[i].id, houses[i].name,
            houses[i].waste, houses[i].water,
            houses[i].surface, houses[i].tax);
    }
}
