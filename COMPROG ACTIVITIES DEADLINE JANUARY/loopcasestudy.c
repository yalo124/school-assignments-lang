#include <stdio.h>

int main()
{
    int drops_of_wine = 162;
    int total_drops_of_wine = 0;
    int bucket_capacity = 2452;
    int cat_licks = 28;
    int total_with_cat_lick = 0;

    printf("=== JD Wine Company ===\n");
    printf("Hour\tDrop\tTotal Drops\n");

    for (int hours = 1; hours <= 16; hours++)
    {
        total_drops_of_wine += drops_of_wine;

        if (hours % 3 == 0)
        {
            total_drops_of_wine -= cat_licks;
            total_with_cat_lick += cat_licks;

            printf("%d\t162\t%d - 28 = %d\n",
                   hours,
                   total_drops_of_wine + cat_licks,
                   total_drops_of_wine);
        }
        else
        {
            printf("%d\t162\t%d\n", hours, total_drops_of_wine);
        }

        if (total_drops_of_wine >= bucket_capacity)
        {
            printf("\nThe bucket was filled by %d hours (capacity %d drops)\n", hours, bucket_capacity);
            break;
        }
    }

    printf("The cat drunk, a total of %d drops of wine\n", total_with_cat_lick);

    return 0;
}
