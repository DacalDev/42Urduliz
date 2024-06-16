/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:45:57 by marvin            #+#    #+#             */
/*   Updated: 2024/06/16 10:41:43 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>  // Añadir esta librería para usar write

#define SIZE 4

int **board;

// Funciones para verificar las restricciones de visibilidad
int check_col_up(int col, int *input);
int check_col_down(int col, int *input);
int check_row_left(int row, int *input);
int check_row_right(int row, int *input);

// Función de backtracking
int solve(int row, int col, int *input);

// Función para imprimir el tablero
void print_board(void);

// Función para verificar si la entrada es válida
int validate_input(int argc, char **argv, int *input);

// Función para inicializar y liberar el tablero
void initialize_board(void);
void free_board(void);

// Funciones para verificar unicidad en filas y columnas
int is_valid(int row, int col, int height);

// Función auxiliar para escribir una cadena
void ft_putstr(char *str);

// Función auxiliar para escribir un número
void ft_putnbr(int nbr);

int main(int argc, char **argv)
{
    int input[16];

    if (!validate_input(argc, argv, input))
    {
        ft_putstr("Error\n");
        return (1);
    }
    initialize_board();
    if (solve(0, 0, input))
        print_board();
    else
        ft_putstr("Error\n");
    free_board();
    return (0);
}

int check_col_up(int col, int *input)
{
    int i;
    int max_height;
    int visible_boxes;

    i = 0;
    max_height = 0;
    visible_boxes = 0;
    while (i < SIZE)
    {
        if (board[i][col] > max_height)
        {
            max_height = board[i][col];
            visible_boxes++;
        }
        i++;
    }
    return (visible_boxes == input[col]);
}

int check_col_down(int col, int *input)
{
    int i;
    int max_height;
    int visible_boxes;

    i = SIZE - 1;
    max_height = 0;
    visible_boxes = 0;
    while (i >= 0)
    {
        if (board[i][col] > max_height)
        {
            max_height = board[i][col];
            visible_boxes++;
        }
        i--;
    }
    return (visible_boxes == input[SIZE + col]);
}

int check_row_left(int row, int *input)
{
    int i;
    int max_height;
    int visible_boxes;

    i = 0;
    max_height = 0;
    visible_boxes = 0;
    while (i < SIZE)
    {
        if (board[row][i] > max_height)
        {
            max_height = board[row][i];
            visible_boxes++;
        }
        i++;
    }
    return (visible_boxes == input[2 * SIZE + row]);
}

int check_row_right(int row, int *input)
{
    int i;
    int max_height;
    int visible_boxes;

    i = SIZE - 1;
    max_height = 0;
    visible_boxes = 0;
    while (i >= 0)
    {
        if (board[row][i] > max_height)
        {
            max_height = board[row][i];
            visible_boxes++;
        }
        i--;
    }
    return (visible_boxes == input[3 * SIZE + row]);
}

int solve(int row, int col, int *input)
{
    int next_row;
    int next_col;
    int height;

    if (row == SIZE)
    {
        int i;

        i = 0;
        while (i < SIZE)
        {
            if (!check_col_up(i, input) || !check_col_down(i, input) ||
                !check_row_left(i, input) || !check_row_right(i, input))
                return (0);
            i++;
        }
        return (1);
    }
    next_row = (col == SIZE - 1) ? row + 1 : row;
    next_col = (col == SIZE - 1) ? 0 : col + 1;
    height = 1;
    while (height <= SIZE)
    {
        if (is_valid(row, col, height))
        {
            board[row][col] = height;
            if (solve(next_row, next_col, input))
                return (1);
            board[row][col] = 0;
        }
        height++;
    }
    return (0);
}

void print_board(void)
{
    int i;
    int j;

    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            ft_putnbr(board[i][j]);
            if (j < SIZE - 1)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int validate_input(int argc, char **argv, int *input)
{
    char *token;
    int i;

    if (argc != 2)
        return (0);
    token = strtok(argv[1], " ");
    i = 0;
    while (i < 16)
    {
        if (token == NULL)
            return (0);
        input[i] = atoi(token);
        if (input[i] < 1 || input[i] > 4)
            return (0);
        token = strtok(NULL, " ");
        i++;
    }
    return (token == NULL);
}

void initialize_board(void)
{
    int i;
    int j;

    board = (int **)malloc(SIZE * sizeof(int *));
    i = 0;
    while (i < SIZE)
    {
        board[i] = (int *)malloc(SIZE * sizeof(int));
        j = 0;
        while (j < SIZE)
        {
            board[i][j] = 0;
            j++;
        }
        i++;
    }
}

void free_board(void)
{
    int i;

    i = 0;
    while (i < SIZE)
    {
        free(board[i]);
        i++;
    }
    free(board);
}

int is_valid(int row, int col, int height)
{
    int i;

    // Check the row
    i = 0;
    while (i < SIZE)
    {
        if (board[row][i] == height)
            return (0);
        i++;
    }
    // Check the column
    i = 0;
    while (i < SIZE)
    {
        if (board[i][col] == height)
            return (0);
        i++;
    }
    return (1);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void ft_putnbr(int nbr)
{
    char c;

    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    c = (nbr % 10) + '0';
    write(1, &c, 1);
}
