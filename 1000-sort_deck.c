#include "deck.h"

int _strcmp (const char *s1, const char *s2);
char get_value(deck_node_t *card);
void insertion_sort_deck_kind(deck_node_t **deck);
void insertion_sort_deck_value(deck_node_t **deck);
void sort_deck(deck_node_t **deck);

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Positive byte difference if s1 > s2
 *         0 if s1 == s2
 *         Negative byte difference if s1 < s2
 */
int _strcmp(const char *s1, const char *s2)
{
        /* Compare characters until a difference is found or the end of a string is reached */
        while (*s1 && *s2 && *s1 == *s2)
        {
                 /* Move to the next character in s1 */
                s1++;
                /* Move to the next character in s2 */
                s2++;
        }

        if (*s1 != *s2)
                /* Return the difference between the corresponding characters in s1 and s2 */
                return (*s1 - *s2);
         /* If s1 and s2 are equal, return 0 */
        return (0);
}

/**
 * get_value - Get the numerical value of a card
 * @card: A pointer to a deck_node_t card.
 *
 * Return: The numerical value of the card.
 */
char get_value(deck_node_t *card)
{
        if (_strcmp(card->card->value, "Ace") == 0)
                return (0);  /* If the card value is "Ace", return 0 */

        if (_strcmp(card->card->value, "1") == 0)
                return (1);  /* If the card value is "1", return 1 */

        if (_strcmp(card->card->value, "2") == 0)
                return (2);  /* If the card value is "2", return 2 */

      
