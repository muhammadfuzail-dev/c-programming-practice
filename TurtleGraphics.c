#include <stdio.h>
// ─────────────────────────────────────────
//  STEP 1: Create a 50x50 grid (the floor)
//  0 means empty, 1 means the turtle drew here
// ─────────────────────────────────────────
int floor[50][50];

// ─────────────────────────────────────────
//  STEP 2: Turtle's information
// ─────────────────────────────────────────
int row      = 10;  // Turtle's current row    (up/down)
int col      = 10;  // Turtle's current column (left/right)
int penDown  = 0;   // 0 = pen up, 1 = pen down
int dir      = 1;   // Direction: 0=Up, 1=Right, 2=Down, 3=Left

// ─────────────────────────────────────────
//  STEP 3: Functions (actions the turtle can do)
// ─────────────────────────────────────────

// Command 1: Lift the pen up (stop drawing)
void penUp() {
    penDown = 0;
    printf("Pen is UP\n");
}

// Command 2: Put the pen down (start drawing)
void putPenDown() {
    penDown = 1;
    printf("Pen is DOWN\n");
}

// Command 3: Turn the turtle to the right
// Right means: Up->Right->Down->Left->Up (cycle)
void turnRight() {
    dir = (dir + 1) % 4;  // % 4 keeps it in range 0-3
    printf("Turned RIGHT\n");
}

// Command 4: Turn the turtle to the left
// Left means: Up->Left->Down->Right->Up (cycle)
void turnLeft() {
    dir = (dir + 3) % 4;  // +3 is same as -1 but stays positive
    printf("Turned LEFT\n");
}

// Command 5: Move the turtle forward by some steps
void moveForward(int steps) {
    printf("Moving forward %d steps\n", steps);

    int i;
    for (i = 0; i < steps; i++) {

        // If pen is down, mark the current cell
        if (penDown == 1) {
            floor[row][col] = 1;
        }

        // Move based on direction
        if (dir == 0) row--;  // Moving UP    = row decreases
        if (dir == 1) col++;  // Moving RIGHT = col increases
        if (dir == 2) row++;  // Moving DOWN  = row increases
        if (dir == 3) col--;  // Moving LEFT  = col decreases

        // Safety: don't go outside the 50x50 grid
        if (row < 0)  row = 0;
        if (row > 49) row = 49;
        if (col < 0)  col = 0;
        if (col > 49) col = 49;
    }

    // Mark the final position too
    if (penDown == 1) {
        floor[row][col] = 1;
    }
}

// Command 6: Print the grid on screen
void printFloor() {
    printf("\n===== DRAWING =====\n");

    int i, j;
    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            if (floor[i][j] == 1)
                printf("*");   // Drew here
            else
                printf(" ");   // Empty
        }
        printf("\n");  // New line after each row
    }

    printf("===================\n\n");
}

// ─────────────────────────────────────────
//  STEP 4: Main function
//  This is where we give commands to the turtle
// ─────────────────────────────────────────
int main() {
    // The list of commands
    // {command, parameter}  <-- parameter only used for command 5
    int commands[20][2] = {
        {2,  0},   // Pen down
        {5, 12},   // Move forward 12 → draws top side
        {3,  0},   // Turn right
        {5, 12},   // Move forward 12 → draws right side
        {3,  0},   // Turn right
        {5, 12},   // Move forward 12 → draws bottom side
        {3,  0},   // Turn right
        {5, 12},   // Move forward 12 → draws left side
        {1,  0},   // Pen up
        {6,  0},   // Print the drawing
        {9,  0}    // End the program
    };

    printf("=== Turtle Graphics ===\n\n");

    // Go through each command one by one
    int i = 0;
    while (1) {
        int cmd   = commands[i][0];  // The command number
        int param = commands[i][1];  // The parameter (for move)

        if (cmd == 1) penUp();
        else if (cmd == 2) putPenDown();
        else if (cmd == 3) turnRight();
        else if (cmd == 4) turnLeft();
        else if (cmd == 5) moveForward(param);
        else if (cmd == 6) printFloor();
        else if (cmd == 9) {
            printf("Program ended!\n");
            break;  // Stop the loop
        }

        i++;  // Move to the next command
    }

    return 0;
}