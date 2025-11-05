#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define DECK_SIZE 52
#define HALF_DECK 26

void fn_Simulation_DeckOfCards() {
    int deck[DECK_SIZE];
    int player1[HALF_DECK], player2[HALF_DECK];

    for (int i = 0; i < DECK_SIZE; i++) {
        deck[i] = i + 1;
    }

    srand(time(NULL));

    printf("=== Deck of Cards Game Simulation using OpenMP ===\n\n");

#pragma omp parallel
    {

#pragma omp single
        {
            printf("Game Start Announcement: Let's begin the card game!\n");
            printf("(Printed by Thread %d)\n\n", omp_get_thread_num());
        }

#pragma omp for
        for (int i = 0; i < DECK_SIZE; i++) {
            int j = rand() % DECK_SIZE;  // Pick a random card index
            // Swap deck[i] and deck[j]
            int temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
        }

#pragma omp sections
        {
            // Section 1: Deal to Player 1
#pragma omp section
            {
                for (int i = 0; i < HALF_DECK; i++) {
                    player1[i] = deck[i];
                }
                printf("Thread %d dealt cards to Player 1\n", omp_get_thread_num());
            }
            // Section 2: Deal to Player 2
#pragma omp section
            {
                for (int i = 0; i < HALF_DECK; i++) {
                    player2[i] = deck[i + HALF_DECK];
                }
                printf("Thread %d dealt cards to Player 2\n", omp_get_thread_num());
            }
        }
    } 
    printf("\n=== Player 1 Hand (26 Cards) ===\n");
    for (int i = 0; i < HALF_DECK; i++) {
        printf("%d ", player1[i]);
    }
    printf("\n");

    printf("\n=== Player 2 Hand (26 Cards) ===\n");
    for (int i = 0; i < HALF_DECK; i++) {
        printf("%d ", player2[i]);
    }
    printf("\n");

    printf("\nDeck successfully shuffled and dealt using OpenMP constructs.\n");

}
