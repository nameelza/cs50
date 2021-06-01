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


}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    int count = 0;
    int a;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]) || )
        int a = word[0] - 'a';
        return a;
        count++;
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

        n->next = table[index];
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
    return false;
}
