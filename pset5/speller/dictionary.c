// Implements a dictionary's functionality
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

int count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int index = hash(word);
    char lower[LENGTH+1];
    
    for (int i = 0, l = strlen(word); i < l; i++) 
    {
        lower[i] = tolower(word[i]);
    }
    
    int lower_index = hash(lower);
    node *new = table[lower_index];
    
    node *cursor = table[lower_index];

    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, lower) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    // This hash function adds the ASCII values of all characters in the word together
    long sum = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        sum += tolower(word[i]);
    }
    return sum % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    // open dictionary file
    FILE *file = fopen(dictionary, "r");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return false;
    }
    
    char buffer[LENGTH + 1];
    
    while (fscanf(file, "%s", buffer) != EOF)
    {
        fscanf(file, "%s", buffer);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            unload();
            return false;
        }
        
        strcpy(n->word, buffer);
        n->next = NULL;
        int index = hash(buffer);

        if (table[index] == NULL)
        {
            table[index] = n;
        }
        else
        {
            table[index] = n->next;
        }
        count++;
    }
    return count;
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if (count > 0)
    {
        return count;
    }
    else
    {
        return 0;
    }
    
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        while (table[i] != NULL)
        {
            node *tmp = table[i]->next;
            free(table[i]);
            table[i] = tmp;
        }
    }
    return true;
}



    // for (int i = 0; word[i] != '\0'; i++)
    // {
    //     if (isalpha(word[i]))
    //     {
    //         return true;
    //     }
    // }