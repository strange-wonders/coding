//
//  main.c
//  hattrick
//
//  Created by Sara Norris on 6/26/15.
//  Copyright (c) 2015 Sara Norris. All rights reserved.
//

/*
 * A program to "pull a name out of a hat". This program should:
 * prompt the user to enter a name
 * accept a minimum of 3 names from the user
 * add those names to an array
 * randomly select a name from the array
 * print a silly message congratulating any holders of that name on their selection
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("Hi! Wanna see a trick? Give me a list of names, and I'll pick one at random.");
    puts("I know, it's a kind of a lame trick.");
    puts("And I need you to enter the names one at a time...");
    puts("And then hit enter a final time after the last name to let me know you're done.");
    puts("Ok, go!");
    
    //dry run with pre-made array
    
    char *some_names[] = {"Harimad-sol", "Susan Sto Helit", "Delenn", "Dain Sarrasri", "Hermione Granger"};
    
    int size = (int) sizeof(some_names) /  (int) sizeof(some_names[0]);
    int size1 = (int) sizeof(some_names);
    int size2 = (int) sizeof(some_names[0]);
    
    int slip = rand() % size;
    
    printf("\nsize1 is %i\n", size1);
    printf("\nsize2 is %i\n", size2);
    
    printf("\nthe size is %i\n", size);
    
    printf("...\n...\nDrumroll, please! The name is... %s!\n", some_names[slip]); /*
     * Get user input
     *	store input in name_array
     * 	keep getting it until user hits enter on an empty field
     *
     * Generate a random number. must be >= 0, but < the number of entries in the array
     * Put the entry at that position in the array. Silly sentence optional.
     */
    return 0;
    
    
    
}