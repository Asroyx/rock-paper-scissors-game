#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player, computer;

    player = getUserChoice();
    computer = getComputerChoice();

    std::cout << "Your choice : ";
    showChoice(player);

    std::cout << "Computer choice : ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
char getUserChoice()
{
    char choice;
    do
    {
        std::cout << "r = Rock\np = Paper\ns = Scissors\n**************\nChoose any: ";
        std::cin >> choice;
    } while (choice != 'r' && choice != 's' && choice != 'p');

    return choice;
}
char getComputerChoice()
{
    int choice;
    srand(time(0));
    choice = rand() % 3 + 1;
    switch (choice)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;

    case 's':
        std::cout << "Scissors\n";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "-------Draw-------\n";
        }
        else if (computer == 's')
        {
            std::cout << "-------Computer Won-------\n";
        }
        else
        {
            std::cout << "-------Player Won-------\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "-------Player Won-------\n";
        }
        else if (computer == 's')
        {
            std::cout << "-------Computer Won-------\n";
        }
        else
        {
            std::cout << "-------Draw-------\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "-------Computer Won-------\n";
        }
        else if (computer == 's')
        {
            std::cout << "-------Draw-------\n";
        }
        else
        {
            std::cout << "-------Player Won-------\n";
        }
        break;

    default:
        break;
    }
}
