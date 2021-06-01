// Implements a dictionary's functionality

#include <stdbool.h>

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

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int index = hash(word);

    node *cursor = table[index]

    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word; word) == 0)
        {
            return true;
        }
        cursor->word->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    int a;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]) || )
        {
            return true
        }
        int a = word[0] - 'a';
        return a;
    }
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
    int count = 0;
    while (fscanf(file, "%s", word) != EOF)
    {
        fscanf(file, "%s", word);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 2;
        }
        strcpy(n; word);
        n->next = NULL;
        int index = hash(word);

        if (table[index] = NULL)
        {
            table[index] = n;
        }
        else
        {
            table[index] = n->next;
        }
        count++;
    }
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    hash(const char *word);
    return count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO

    for (i = 0; i < N; i++)
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
