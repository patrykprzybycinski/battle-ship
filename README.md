# Battleship Game

This is a simple console-based implementation of the classic "Battleship" game in C++. The program allows a player to play against the computer by attempting to sink randomly placed ships on a 10x10 grid.

## Features
- **Random Ship Placement**: The program places 5 single-mast ships randomly on the grid.
- **Player Interaction**: Players enter coordinates to "shoot" at the grid.
- **Win Detection**: The game ends when all ships are hit.

## How to Play
1. Clone the repository and compile the program.
2. Run the executable.
3. The player is prompted to enter the coordinates (x, y) to shoot.
4. The grid updates to show hits (`X`), misses (`O`), and unexplored cells (`~`).
5. Continue until all ships are sunk.

## Grid Symbols
- `~`: Water (unexplored).
- `S`: Ship (hidden from the player).
- `X`: Hit.
- `O`: Miss.

## Code Overview
### Main Components:
- **Initialization**:
  - `inicjalizacja()`: Sets up the grid with water (`~`).
- **Ship Placement**:
  - `statki()`: Randomly places ships on the grid.
- **Player Actions**:
  - `strzel()`: Allows the player to shoot at a specific grid coordinate.
- **Game Logic**:
  - `sprawdz_wygrana()`: Checks if all ships have been sunk.
  - `plansza_statki1()`: Displays the grid (with ships hidden).

### Execution Flow:
1. Initialize the game.
2. Place ships.
3. Enter the game loop, where the player shoots and the program checks for victory.

## How to Compile and Run
### Prerequisites
- A C++ compiler (e.g., `g++`).

### Compilation
```bash
# Compile the program
g++ -o battleship battleship.cpp
```

### Execution
```bash
# Run the game
./battleship
```

## Example Gameplay
```
Zaraz rozpocznie sie gra w statki
Powodzenia wszystkim zawodnikow

~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~

Podaj pierwsza wspolrzedna
1
Podaj druga wspolrzedna
1
Nie udalo sie trafic jednomasztowca
```

## Future Improvements
- Add support for two players.
- Implement ships of varying sizes (e.g., 2-mast, 3-mast).
- Allow diagonal or horizontal ship placement.
- Add a graphical user interface (GUI).
