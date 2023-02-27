#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
using namespace std;

int main()
{
    cout << "\tNo1" << endl;
    cout << "Enter symbol: ";
    char sym;
    cin >> sym;
    cout << "Enter their number: ";
    int num;
    cin >> num;
    cout << "Enter delay(ms): ";
    int del;
    cin >> del;
    cout << "Enter direction (1 - Horizontal, 2 - Vertical): ";
    int dir;
    cin >> dir;
    switch (dir)
    {
    case 1:
        while (num > 0)
        {
            cout << sym;
            num--;
            Sleep(del);
        }
    case 2:
        while (num > 0)
        {
            cout << sym << endl;
            num--;
            Sleep(del);
        }
    }
    cout << endl;

    cout << "\tNo2" << endl;
    int number;
    cout << "Wellcome to the full random and a little gambling game!\nRoll the dice if you wana play!\n(1 - play, 2 - I have more important things to do)" << endl;
    int ch;
    cin >> ch;
    if (ch == 1)
    {
        int sumPC = 0;
        int sumY = 0;
        int MIN = 2;
        int MAX = 12;
        cout << "=============1=============" << endl;
        number = rand() % (MAX - MIN) + MIN;
        cout << "PC: " << number << endl;
        sumPC += number;
        number = rand() % (MAX - MIN) + MIN;
        cout << "Yours: " << number << endl;
        sumY += number;
        cout << "=============2=============" << endl;
        number = rand() % (MAX - MIN) + MIN;
        cout << "PC: " << number << endl;
        sumPC += number;
        number = rand() % (MAX - MIN) + MIN;
        cout << "Yours: " << number << endl;
        sumY += number;
        cout << "=============3=============" << endl;
        number = rand() % (MAX - MIN) + MIN;
        cout << "PC: " << number << endl;
        sumPC += number;
        number = rand() % (MAX - MIN) + MIN;
        cout << "Yours: " << number << endl;
        sumY += number;
        cout << "============Sum============" << endl;
        cout << "PC: " << sumPC << endl;
        cout << "Yours: " << sumY << endl;
    }
    else if (ch == 2)
    {
        cout << "Okay, bye." << endl;
    }
    else
    {
        cout << "We don't have this variant.";
    }

    cout << "\tNo3\n";
    int level, a, b, magicNum, userNum;
    int userChoice, userLives, userPoints, guessed;
    userPoints = 0;
    guessed = 0;
    srand(time(NULL));
    do {
        cout << "Welcome to the Game!\n";
        cout << "Your choice:\n";
        cout << "1 - 1st level: magic number [1..10]\n";
        cout << "2 - 2nd level: magic number [10..100]\n";
        cout << "3 - quit\n";
        cin >> userChoice;
        switch (userChoice) {
        case 1:
        {
            cout << "Welcome to the 1st level: "
                "magic number [1..10]!\n";
            a = 1;
            b = 10;
            userLives = (b - a + 1) / 2;
            cout << "Bot thinks a number...\n";
            Sleep(1000);
            magicNum = a + rand() % (b - a);
            cout << "Magic number is ready! "
                "Let's try to guess it!\n";
            do {
                cout << "Just now you have ";
                cout << userLives << "lives.\n";
                cout << "Try to guess, your number?\n";
                cin >> userNum;
                if (userNum == magicNum)
                {
                    cout << "You guessed magic number!\n";
                    guessed = 1;
                }
                else {
                    cout << "Oh! I lost 1 life!\n";
                    userLives--;
                    cout << "Just now you have ";
                    cout << userLives << "\n";
                    do {
                        cout << "Do you wish a little "
                            "hint? It costs"
                            "1 life!\n";
                        cout << "Your choice:\n";
                        cout << "1 - yes\n";
                        cout << "0 - no\n";
                        cin >> userChoice;
                        if (userChoice == 1)
                        {
                            if (userNum > magicNum)
                            {
                                cout << "Let's give "
                                    "less...\n";
                                userLives--;
                            }
                            else
                            {
                                cout << "Let's give "
                                    "more...\n";
                                userLives--;
                            }
                        }
                    } while ((userChoice != 1) &&
                        (userChoice != 0));
                }
            } while ((userLives > 0) && (guessed == 0));
            userPoints = userLives * 5;
            if (userPoints == 0)
            {
                cout << "You lose!\n";
            }
            else
            {
                cout << "Your score:" << userPoints;
                cout << "\n";
            }
            break;
        }
        case 2:
        {
            cout << "Welcome to the 2nd level: "
                "magic number [10..100]!\n";
            a = 10;
            b = 100;
            userLives = (b - a + 1) / 4;
            cout << "Bot thinks a number...\n";
            Sleep(1000);
            magicNum = a + rand() % (b - a);
            cout << "Magic number is ready! "
                "Let's try to guess it!\n";
            do {
                cout << "Just now you have ";
                cout << userLives << "lives.\n";
                cout << "Try to guess, your number?\n";
                cin >> userNum;
                if (userNum == magicNum)
                {
                    cout << "You guessed magic number!\n";
                    guessed = 1;
                }
                else {
                    cout << "Oh! I lost 1 life!\n";
                    userLives--;
                    cout << "Just now you have ";
                    cout << userLives << "\n";
                    do {
                        cout << "Do you wish a little "
                            "hint? It costs "
                            "1 life!\n";
                        cout << "Your choice:\n";
                        cout << "1 - yes\n";
                        cout << "0 - no\n";
                        cin >> userChoice;
                        if (userChoice == 1)
                        {
                            if (userNum > magicNum)
                            {
                                cout << "Let's give "
                                    "less...\n";
                                userLives--;
                            }
                            else
                            {
                                cout << "Let's give "
                                    "more...\n";
                                userLives--;
                            }
                        }
                    } while ((userChoice != 1) &&
                        (userChoice != 0));
                }
            } while ((userLives > 0) && (guessed == 0));
            userPoints = userLives * 10;
            if (userPoints == 0)
            {
                cout << "You lose!\n";
            }
            else
            {
                cout << "Your score:" << userPoints;
                cout << "\n";
            }
            break;
        }
        case 3:
        {
            cout << "See you!";
            break;
        }
        default:
            cout << "Wrong menu item!";
 }
 } while (userChoice != 3);



	return 0;
}